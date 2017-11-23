#! /usr/bin/python3
import sys, os

inname = sys.argv[1]

name = sys.argv[1]
while 0 <= name.find('/'):
    name = name[name.find('/')+1:]
name = name[9:-2]
oname2 = 'fonts/symbols.txt'
inp = open(inname, 'r', encoding="utf-8")
op2 = open(oname2, 'w', encoding="utf-8")
print(sys.argv[1])

sum = 0
alphabet = []
for char in inp:
    while len(char):
        c = char[:1]
        if not c in alphabet and c >= '\u0080':
            alphabet += [c]
            sum +=1
        char = char[1:]

alphabet.sort()
op2.write(str(alphabet))
op2.write('\n')
op2.write(str(sum))
#print(sum)
op2.write('\n')
op2.close()
inp.close()


