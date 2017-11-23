Again a new font system

Currently we have a limitation to 256 symbols per language. Especially languages with many symbols like Chinese and languages with more then one script, like Japanese, do suffer.
That's a limitation of U8Glib. That is not better in U8G2lib.
Aim of the new system is to provide a huge number of symbols if needed, limited only by the available memory.

1.) For all languages the ASCII [0-127] will be available. That makes fallback to English save.
2.) For every language the "language_*.h" file is scanned for the used symbols above [127] and sorted.
3.) A huge "master.bdf" containing all symbols bitmaps in the right size is scanned for the list produced in 2.
4.) 3. will produce a number of *.bdf, each 256 symbols long (index 1 byte) (limitation of U8Glib). Herein the symbols are sorted by their UNICODE-codepoint (2 byte). Only used Symbols will occur. For most languages there will by only one *.bdf containing a few symbols.
5.) This *.bdf files are accompanied by a sorted list of the symbols. The upper byte of this index (2 byte) of this list is pointing to the right *.bdf file, the lower to the index of the symbol in that part of the font.
6.) bdf2u8g generates '.c 'code for the ''.bdf files. A script generates code for the symbols list.
----
7.) When actually printing 
7.1.) A 1 byte UTF8 sequence is printed from the ASCII-font directly.
7.2.) A 2 or 3 byte UTF8 sequence is converted to its UNICODE-codepoint (a 2 byte number). A binary search finds the index of the symbol in the list (5.) what is a pointer to font-block and symbol.
