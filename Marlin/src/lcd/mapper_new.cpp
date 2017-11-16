// dumy
void setfont(const uint32_t font_nr) {
  Serial.print("Font: ");
  Serial.print(font_nr, HEX);
  switch(font_nr) {
    case 0xC2: SET_FONT_C2; break;
    case 0xC3: SET_FONT_C3; break;
    
    default 
  }
}

// dumy
void hardware_out(uint8_t c) {
  Serial.print(" Char: ");
  Serial.print(c, HEX);
  Serial.print(" ");
  Serial.println((char)c);
}

// returns: -1 malformed, 0 no output done, 1 printed one symbol.
// could be extended to indicate two places wide symbols - then returning 2
// or width in pixel
int8_t utf8_mapper(uint8_t c) {
  static uint32_t font_nr = 0;
  static uint8_t seen_nr = 0,
                 expect_nr = 1;
  if (seen_nr == 0) {
    if((c & 0b10000000u) != 0) {
      seen_nr = 1;
      font_nr = c;
      if((c & 0b01000000u) && !(c & 0b00100000u)) {
        expect_nr = 2;
        return 0;
      }
      if((c & 0b00100000u) && !(c & 0b00010000u)) {
        expect_nr = 3;
        return 0;
      }  
      if((c & 0b00010000u) && !(c & 0b00001000u)) {
        expect_nr = 4;
        return 0;
      }  
      else {
        //Serial.println("\nErr: Malformed start byte");
        font_nr = 0;
        seen_nr = 0;
        return -1; // malformed
      }
    }
    else {
      font_nr = 0;
      setfont(font_nr);
      hardware_out(c);
      seen_nr = 0;
      return 1;
    }
  }

  if ((c & 0b11000000u) != 0b10000000u) {
    /*
    Serial.print("\nErr: Malformed following byte: ");
    Serial.print(c, HEX);
    Serial.print(" ");
    Serial.print((char)c);
    Serial.print(" ");
    Serial.print(seen_nr);
    Serial.print(" ");
    Serial.println(expect_nr);
    */
    font_nr = 0;
    seen_nr = 0;
    return -1; // malformed
  }

  if (seen_nr < expect_nr-1) {
    font_nr <<= 8;
    font_nr += c;
    seen_nr++;
    return 0;
  }
  else { 
    setfont(font_nr);
    font_nr = 0;
    hardware_out(c);
    seen_nr = 0;
    return 1;
  }
}
