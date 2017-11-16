#! /usr/bin/python3
import sys

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

print( utf8ToInt( int( sys.argv[1], 16)))

