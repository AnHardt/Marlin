#!/bin/bash

rm language_all.h

echo "// Testfine with all languages" >> language_all.h

FILES=language_*.h
for f in $FILES
do
  cat $f >> language_all.h
done
