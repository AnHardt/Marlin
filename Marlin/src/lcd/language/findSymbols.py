#! /usr/bin/python3
import sys, os

inname = sys.argv[1]
#name = sys.argv[1][9:-2]
name = sys.argv[1]
while 0 <= name.find('/'):
    name = name[name.find('/')+1:]
name = name[9:-2]
oname = 'fonts/fontgroup_' + name + '.sh'
oname2 = 'fonts/symbols_' + name + '.txt'
inp = open(inname, 'r', encoding="utf-8")
op = open(oname, 'w', encoding="utf-8")
op2 = open(oname2, 'w', encoding="utf-8")
print(sys.argv[1])
op.write('#!/bin/bash')
op.write('\n')

#op2.write(sys.argv[1])
#op2.write('\n')

alphabet = []
for char in inp:
    while len(char):
        c = char[:1]
        if not c in alphabet and c >= '\u0080':
            alphabet += [c]
        char = char[1:]

alphabet.sort()
op2.write(str(alphabet))
op2.write('\n')
#for c in alphabet:
    #print(c)
    #op.write(str(c))
#op.write('\n')

group = []
for c in alphabet:
    d = c.encode('utf-8')[:-1]
#    print(str(d)[4:-1])
    ee = str(d)[4:-1]
    if len(ee) > 2:
        cc = ee[:2] + ee[-2:]
        ee = cc
#    print(ee)
    e = int(ee,16)
#    print(e)
    if not e in group:
        group += [e]
group.sort()
for iii in group:
    print(hex(iii)[2:])
    op.write('python3 ./splitbdf.py master.bdf ')
    op.write(hex(iii)[2:])
    op.write(' ')
    op.write(name)
    op.write('\n')

inp.close()
op.close()
op2.close()
