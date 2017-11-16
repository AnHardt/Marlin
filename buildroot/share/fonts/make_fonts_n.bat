
.\bdf2u8g.exe        -b 16  -e 255 HD44780_W.bdf HD44780_W_5x7 dogm_font_data_HD44780_W.h
.\bdf2u8g.exe        -b 32  -e 255 HD44780_C.bdf HD44780_C_5x7 dogm_font_data_HD44780_C.h
.\bdf2u8g.exe        -b 32  -e 255 HD44780_J.bdf HD44780_J_5x7 dogm_font_data_HD44780_J.h

; Marlin symbols
.\bdf2u8g.exe -l   0 -s   0 -b   1 -e   9 ISO10646-0-11.bdf Marlin_symbols dogm_font_data_Marlin_symbols.h

; ASCII
.\bdf2u8g.exe -l   0 -s   0 -b  32 -e 127 ISO10646-0-11.bdf ASCII fontASCII.h

; Europeran
.\bdf2u8g.exe -l   0 -s 128 -b 128 -e 191 ISO10646-0-11.bdf C2    fontC2.h
.\bdf2u8g.exe -l   0 -s 192 -b 192 -e 255 ISO10646-0-11.bdf C3    fontC3.h
.\bdf2u8g.exe -l   1 -s   0 -b 0   -e 63  ISO10646-0-11.bdf C4    fontC4.h
.\bdf2u8g.exe -l   1 -s  64 -b 0   -e 63  ISO10646-0-11.bdf C5    fontC5.h

; Greec
.\bdf2u8g.exe -l   3 -s 128 -b 0   -e 63  ISO10646-0-11.bdf CE    fontCE.h
.\bdf2u8g.exe -l   3 -s 192 -b 0   -e 63  ISO10646-0-11.bdf CF    fontCF.h

; Cyrillic
.\bdf2u8g.exe -l   4 -s   0 -b 0   -e 63  ISO10646-0-11.bdf D0    fontD0.h
.\bdf2u8g.exe -l   4 -s  64 -b 0   -e 63  ISO10646-0-11.bdf D1    fontD1.h
.\bdf2u8g.exe -l   5 -s  64 -b 0   -e 63  ISO10646-0-11.bdf D5    fontD5.h

; Kana
.\bdf2u8g.exe -l  48 -s 192 -b 0   -e 63  ISO10646-0-11.bdf E382  fontE382.h
.\bdf2u8g.exe -l  48 -s 192 -b 0   -e 63  ISO10646-0-11.bdf E383  fontE383.h
