#!/bin/bash

if [ $# -lt 1 ]
  then
    echo "Usage: MakeAllFonts.sh Font.bdf"
    exit 1
fi

# generate ASCII font
fonts/bdf2u8g.exe -l 0 -s 0 -b 32 -e 127 -f 1 fonts/$1 ASCII fonts/font_ASCII.h

# find all language files and run 'findSymbols.py' on them
FILES=language_*.h
for f in $FILES
do
  ./MakeFont.sh $1 $f
done
