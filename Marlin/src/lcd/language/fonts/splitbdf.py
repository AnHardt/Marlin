#! /usr/bin/python3
import sys, os

inname = sys.argv[1]
outname = str(sys.argv[1])[: sys.argv[1].find('.bdf')]
outname_t = outname + '.t'
langfn = 'symbols.txt'
mapfn = 'map.txt'
mapn = 'symbolMap'
maplen = 'SYMBOL_MAP_LEN'

langf = open(langfn, 'r', encoding="utf-8")
mapf = open(mapfn, 'w', encoding="utf-8")

mapf.write('\n')
mapf.write('const uint16_t ')
mapf.write(mapn)
mapf.write('[] PROGMEM = {\n  ')
putcomma = 0

with open(langfn, 'r', encoding="utf-8") as langf:
    symbols = langf.readline()
    expected = int(langf.readline())
    #print(symbols)
    print(expected)
langf.close()

start = 0xFFFF
for c in symbols:
    cc = ord(c)
    if int(cc >= 0x80 and cc < start):
        start = cc
#print(start)

end = 0x0000
for c in symbols:
    cc = ord(c)
    if int(cc >= 0x80 and cc > end):
        end = cc
#print(end)

count = 0
while(count < expected):
    inp = open(inname, 'r', encoding="utf-8")
    outp = open(outname_t, 'w', encoding="utf-8")
    print('open')
    seen_chars = 0
    seen_start = 0
    buffer = ''

    for line in inp:
        if seen_chars == 0:      # until the first 'STARTCHAR' is seen copy
            if line.find('CHARS ') > -1:
                seen_chars = 1
                outp.write('CHARS 256\n') # except 'CHARS' - that is marked
            else:
                outp.write(line)
        else:
            if line.find('STARTCHAR') > -1:
                buffer = line             # reset buffer to line
            elif line.find('ENCODING ') > -1:
                test = int(line[9:])
                #print(str(intToUtf8(test)))
                #print(symbols[symbols.find(chr(intToUtf8(test)))])
                if (test >= start) and (symbols.find(chr(test)) > -1):
                    start = test
                    if putcomma != 0:
                        if putcomma < 16:
                            mapf.write(', ')
                        else:
                            putcomma = 0
                            mapf.write(',\n  ')
                    mapf.write("0x%0.4X" % test)
                    print(test, '>', count)
                    putcomma += 1
                    seen_start = 1
                    outp.write(buffer)
                    outp.write('ENCODING ')
                    outp.write(str(count & 0xFF))
                    outp.write('\n')
                    count += 1
                    buffer = ''
            elif  line.find('ENDCHAR') > -1:
                if seen_start:
                    outp.write(buffer)
                    outp.write(line)
                    buffer = ''
                    seen_start = 0
                    if (((count-1) & 0xFF) == 0xFF):
                        break
                if (test > end):
                    break
            else:
                buffer = buffer + line


    outp.write('ENDFONT\n')
    outp.close()
    print ('close')
    inp.close()
  
    inp = open(outname_t, 'r', encoding="utf-8")
    print ('copy to "' + outname + '_' + str((count-1) >> 8) + '.bdf"')
    outp = open(outname + '_' + str((count-1) >> 8) + '_.bdf', 'w', encoding="utf-8")
    for line in inp:
        if line.find('CHARS ') > -1:
            changer = line
            here = changer.find('256')
            line = changer[:here] + str((((count-1) & 0x00FF) +1) ) + '\n'
        outp.write(line)

    inp.close()
    outp.close()


os.remove(outname_t)

mapf.write('\n};\n\n#define ')
mapf.write(maplen)
mapf.write(' ')
mapf.write("%d" % count)
mapf.write('\n')
mapf.close()


