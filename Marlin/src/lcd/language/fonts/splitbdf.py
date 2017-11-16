#! /usr/bin/python3
import sys, os

def utf8ToInt(utf8):
    "Convert utf8_int to symbol number."
    if utf8 < 0x80:
        return utf8
    elif (utf8 > 0xFF) and (utf8 <= 0xFFFF) and 0==((utf8 & 0xE000) ^ 0xC000) and 0==((utf8 & 0xC0) ^ 0x80):
        r = ((utf8 & 0x1F00)>>2) + (utf8 & 0x3F)
        if r < 0x80:
            return -1
        else:        
            return r
    elif (utf8 > 0xFFFF) and (utf8 <= 0xFFFFFF)  and 0==((utf8 & 0xF00000) ^ 0xE00000)  and 0==((utf8 & 0xC000) ^ 0x8000) and 0==((utf8 & 0xC0) ^ 0x80):
        r = ((utf8 & 0x0F0000)>>4) + ((utf8 & 0x3F00)>>2) + (utf8 & 0x3F)
        if r < 0x80:
            return -1
        else:        
            return r
    else:
        return -1
        
def intToUtf8(i):
    "Convert integer to urf8"
    if i < 0x80:
        return i
    elif i <= 0x7FFF:
        return (((i << 2) & 0x1F00) | 0xC000) + ((i & 0x3F) | 0x80)
    elif i <= 0xFFFF:
        return (((i << 4) & 0x0F0000) | 0xE00000) + (((i << 2) & 0x3F00) | 0x8000) + ((i & 0x3F) | 0x80)
    else:
        return -1

starts = str(sys.argv[2])
starts += '80'
start = utf8ToInt(int(starts, 16))
end = start + 0x3F

startstr = sys.argv[2]
inname = sys.argv[1]
lang = sys.argv[3]

outname = str(sys.argv[1])[: sys.argv[1].find('.bdf')]
outname_t = outname + '.t'
langfn = 'symbols_' + lang + '.txt'
mapfn = 'map_' + lang + '_' + startstr + '.txt'
mapn = 'map_' + lang + '_' + startstr
mapln = 'maplen_' + lang + '_' + startstr

inp = open(inname, 'r', encoding="utf-8")
outp = open(outname_t, 'w', encoding="utf-8")
langf = open(langfn, 'r', encoding="utf-8")
mapf = open(mapfn, 'w', encoding="utf-8")

mapf.write('\n')
mapf.write('const uint8_t ')
mapf.write(mapn)
mapf.write('[] PROGMEM = {\n  ')
putcomma = 0



with open(langfn, 'r', encoding="utf-8") as langf:
    symbols = langf.readline()
    #print(symbols)

seen_chars = 0
seen_start = 0
buffer = ''
count = 0
for line in inp:
    if seen_chars == 0:      # until the first STARTCHAR is seen copy
        if line.find('CHARS ') > -1:
            seen_chars = 1
            outp.write('CHARS ***\n') # except CHARS - that is marked
        else:
            outp.write(line)
    else:
        if line.find('STARTCHAR') > -1:
            buffer = line             # reset buffer to line
        elif line.find('ENCODING ') > -1:
            test = int(line[9:])
            #print(str(intToUtf8(test)))
            #print(symbols[symbols.find(chr(intToUtf8(test)))])
            if (test >= start) and (-1 < symbols.find(chr(test))):
                print(test-start, '>', count)
                if putcomma != 0:
                    if putcomma <= 16:
                        mapf.write(', ')
                    else:
                        putcomma = 1
                        mapf.write(',\n  ')
                mapf.write(str(test-start))
                putcomma += 1
                seen_start = 1
                outp.write(buffer)
                outp.write('ENCODING ')
                outp.write(str(count))
                outp.write('\n')
                count += 1
                buffer = ''
        elif  line.find('ENDCHAR') > -1:
            if seen_start:
                outp.write(buffer)
                outp.write(line)
                buffer = ''
                seen_start = 0
            if test >= end:
                break
        else:
            buffer = buffer + line

            
mapf.write('\n};\n\nconst ')
mapf.write(mapln)
mapf.write(' = ')
mapf.write(str(count))
mapf.write(';\n')

mapf.close()

outp.write('ENDFONT\n')
outp.close()

inp.close()

inp = open(outname_t, 'r', encoding="utf-8")
outp = open(outname + '_' + lang + '_' + startstr + '.bdf', 'w', encoding="utf-8")
for line in inp:
    if line.find('***') > -1:
        changer = line
        here = changer.find('***')
        line = changer[:here] + str(count) + '\n'
    outp.write(line)

inp.close()
outp.close()
langf.close()


os.remove(outname_t)
