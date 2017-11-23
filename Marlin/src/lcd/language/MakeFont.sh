#!/bin/bash

if [ $# -lt 2 ]
  then
    echo "Usage: MakeFont.sh Font.bdf languagefile"
    exit 1
fi

DASH="_"
python3 ./fonts/findSymbols.py $2

cd fonts

python3 ./splitbdf.py $1

rm symbols.txt

MASTER=$(echo .$1| cut -d'.' -f 2)
MSTER+=$DASH
# from the generated *.bdf fonts create *.h files
FILES=$MASTER*_.bdf
for f in $FILES
do
  INPUTNR=$(echo $f| cut -d'_' -f 2)
  SUBSTRING1=$(echo $2| cut -d'_' -f 2-)
  SUBSTRING=$(echo .$SUBSTRING1| cut -d'.' -f 2)
  SUBSTRING+=$DASH
  SUBSTRING+=$INPUTNR
  MASTER=$(echo .$1| cut -d'.' -f 2)
  MASTER+=$DASH
  MASTER+=$SUBSTRING
  NCHARS=$(grep -o 'STARTCHAR' $f | wc -l)
  NCHARSM=$(echo $(($NCHARS-1)))
  echo "./bdf2u8g.exe -l 0 -s 0 -b 0 -e $NCHARSM -f 0 $f font_$INPUTNR $MASTER.h"
  ./bdf2u8g.exe -l 0 -s 0 -b 0 -e $NCHARSM -f 0 $f font_$INPUTNR $MASTER.h
  rm $f
done

SUB1=$(echo $2| cut -d'_' -f 2-)
SUB=$(echo .$SUBSTRING1| cut -d'.' -f 2)
ASTER=$(echo .$1| cut -d'.' -f 2)
ASTER+=$DASH
ASTER+=$SUB.h

cp praeambel.txt font_$ASTER

MASTER=$(echo .$1| cut -d'.' -f 2)
MSTER+=$DASH
# from the generated *.bdf fonts create *.h files
FILES=$MASTER*.h
for f in $FILES
do
  cat $f >> font_$ASTER
  rm $f
done
cat map.txt >> font_$ASTER
rm map.txt
