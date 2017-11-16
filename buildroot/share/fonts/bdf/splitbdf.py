#! python
import sys, os

start = int(sys.argv[2], 16)
if start <= 0xFF:
    start = (start & 0x3F) * 0x40
    print('one byte')
    print(start)
elif start <= 0xFFFF:
    lower = start & 0x3F
    upper = (start & 0x1F00) >> 2
    print('two bytes')
    print(upper)
    print(lower)
    print(upper + lower)
    start = (upper + lower) * 0x40
elif start <= 0xFFFFFF:
    lower = start & 0x3F
    middel = (start & 0x3F00) >> 2
    upper = (start & 0x0F00) >> 4
    print('thre bytes')
    print(upper)
    print(middel)
    print(lower)
    print(upper + middel + lower)
    start = (upper + middel + lower) * 0x40
end = start + 63

startstr = sys.argv[2]
inname = sys.argv[1]
outname = str(sys.argv[1])[: sys.argv[1].find('.bdf')]
outname_t = outname + '.t'

inp = open(inname, 'r')
outp = open(outname_t, 'w')
seen_chars = 0
seen_start = 0
buffer = ''
count = 0
for line in inp:
    if seen_chars == 0:
        if line.find('CHARS ') > -1:
            seen_chars = 1
            outp.write('CHARS ***\n')
        else:
            outp.write(line)
    else:
        if line.find('STARTCHAR') > -1:
            buffer = line
        else:
            buffer = buffer + line
        if line.find('ENCODING ') > -1:
            test = int(line[9:])
            if test >= start:
                seen_start = 1
                outp.write(buffer)
                buffer = ''
        if  line.find('ENDCHAR') > -1:
            if seen_start:
                outp.write(buffer)
                buffer = ''
                count += 1
            if test >= end:
                break
                
outp.write('ENDFONT\n')
inp.close()
outp.close()

inp = open(outname_t, 'r')
outp = open(outname + '_' + startstr + '.bdf', 'w')
for line in inp:
    if line.find('***') > -1:
        changer = line
        here = changer.find('***')
        line = changer[:here] + str(count) + '\n'
        print(line)
    outp.write(line)

inp.close()
outp.close()
os.remove(outname_t)
print('Start')
print(start)
print('End')
print(end)
print('Count')
print(count)
print('Ready')
