/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Basque-Euskera
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_EU_H
#define LANGUAGE_EU_H


#define DISPLAY_CHARSET_ASCII

#define WELCOME_MSG                         MACHINE_NAME " prest."
#define MSG_BACK                            "Atzera"
#define MSG_SD_INSERTED                     "Txartela sartuta"
#define MSG_SD_REMOVED                      "Txartela kenduta"
#define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters
#define MSG_MAIN                            "Menu nagusia"
#define MSG_AUTOSTART                       "Auto hasiera"
#define MSG_DISABLE_STEPPERS                "Itzali motoreak"
#define MSG_DEBUG_MENU                      "Arazketa Menua"
#define MSG_PROGRESS_BAR_TEST               "Prog. Barra Proba"
#define MSG_AUTO_HOME                       "Hasierara joan"
#define MSG_AUTO_HOME_X                     "X jatorria"
#define MSG_AUTO_HOME_Y                     "Y jatorria"
#define MSG_AUTO_HOME_Z                     "Z jatorria"
#define MSG_LEVEL_BED_HOMING                "XYZ hasieraratzen"
#define MSG_LEVEL_BED_WAITING               "Klik egin hasteko"
#define MSG_LEVEL_BED_NEXT_POINT            "Hurrengo Puntua"
#define MSG_LEVEL_BED_DONE                  "Berdintzea eginda"
#define MSG_SET_HOME_OFFSETS                "Etxe. offset eza."
#define MSG_HOME_OFFSETS_APPLIED            "Offsetak ezarrita"
#define MSG_SET_ORIGIN                      "Hasiera ipini"
#define MSG_PREHEAT_1                       "Berotu PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " Guztia"
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 " Amaia"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " Ohea"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " konf."
#define MSG_PREHEAT_2                       "Berotu ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_1 " Guztia"
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 " Amaia"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_1 " Ohea"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_1 " konf."
#define MSG_COOLDOWN                        "Hoztu"
#define MSG_SWITCH_PS_ON                    "Energia piztu"
#define MSG_SWITCH_PS_OFF                   "Energia itzali"
#define MSG_EXTRUDE                         "Estruitu"
#define MSG_RETRACT                         "Atzera eragin"
#define MSG_MOVE_AXIS                       "Ardatzak mugitu"
#define MSG_BED_LEVELING                    "Ohea Berdindu"
#define MSG_LEVEL_BED                       "Ohea Berdindu"
#define MSG_MOVING                          "Mugitzen..."
#define MSG_FREE_XY                         "Askatu XY"
#define MSG_MOVE_X                          "Mugitu X"
#define MSG_MOVE_Y                          "Mugitu Y"
#define MSG_MOVE_Z                          "Mugitu Z"
#define MSG_MOVE_E                          "Estrusorea"
#define MSG_MOVE_01MM                       "Mugitu 0.1mm"
#define MSG_MOVE_1MM                        "Mugitu 1mm"
#define MSG_MOVE_10MM                       "Mugitu 10mm"
#define MSG_SPEED                           "Abiadura"
#define MSG_BED_Z                           "Z Ohea"
#define MSG_NOZZLE                          "Pita"
#define MSG_BED                             "Ohea"
#define MSG_FAN_SPEED                       "Haizagailu abiada"
#define MSG_FLOW                            "Fluxua"
#define MSG_CONTROL                         "Kontrola"
#define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Fakt"
#define MSG_AUTOTEMP                        "Auto tenperatura"
#define MSG_ON                              "On "
#define MSG_OFF                             "Off"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Aukeratu"
#define MSG_ACC                             "Azelerazioa"
#define MSG_JERK                            "Astindua"
#define MSG_VX_JERK                         "Vx-astindua"
#define MSG_VY_JERK                         "Vy-astindua"
#define MSG_VZ_JERK                         "Vz-astindua"
#define MSG_VE_JERK                         "Ve-astindua"
#define MSG_VMAX                            "Vmax "
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VBidaia min"
#define MSG_ACCELERATION                    MSG_ACC
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retrakt"
#define MSG_A_TRAVEL                        "A-bidaia"
#define MSG_STEPS_PER_MM                    "Pausoak/mm"
#define MSG_XSTEPS                          "X pausoak/mm"
#define MSG_YSTEPS                          "Y pausoak/mm"
#define MSG_ZSTEPS                          "Z pausoak/mm"
#define MSG_ESTEPS                          "E pausoak/mm"
#define MSG_E1STEPS                         "E1 pausoak/mm"
#define MSG_E2STEPS                         "E2 pausoak/mm"
#define MSG_E3STEPS                         "E3 pausoak/mm"
#define MSG_E4STEPS                         "E4 pausoak/mm"
#define MSG_E5STEPS                         "E5 pausoak/mm"
#define MSG_TEMPERATURE                     "Tenperatura"
#define MSG_MOTION                          "Mugimendua"
#define MSG_FILAMENT                        "Harizpia"
#define MSG_VOLUMETRIC_ENABLED              "E mm3-tan"
#define MSG_FILAMENT_DIAM                   "Hariz. Dia."
#define MSG_ADVANCE_K                       "K Aurrerapena"
#define MSG_CONTRAST                        "LCD kontrastea"
#define MSG_STORE_EEPROM                    "Gorde memoria"
#define MSG_LOAD_EEPROM                     "Kargatu memoria"
#define MSG_RESTORE_FAILSAFE                "Larri. berriz."
#define MSG_REFRESH                         "Berriz kargatu"
#define MSG_WATCH                           "Pantaila info"
#define MSG_PREPARE                         "Prestatu"
#define MSG_TUNE                            "Doitu"
#define MSG_PAUSE_PRINT                     "Pausatu inprimak."
#define MSG_RESUME_PRINT                    "Jarraitu inprima."
#define MSG_STOP_PRINT                      "Gelditu inprima."
#define MSG_CARD_MENU                       "SD-tik inprimatu"
#define MSG_NO_CARD                         "Ez dago SD-rik"
#define MSG_DWELL                           "Lo egin..."
#define MSG_USERWAIT                        "Aginduak zain..."
#define MSG_RESUMING                        "Jarraitzen inpri."
#define MSG_PRINT_ABORTED                   "Inprim. deusezta."
#define MSG_NO_MOVE                         "Mugimendu gabe."
#define MSG_KILLED                          "AKABATUTA. "
#define MSG_STOPPED                         "GELDITUTA. "
#define MSG_CONTROL_RETRACT                 "Atzera egin mm"
#define MSG_CONTROL_RETRACT_SWAP            "Swap Atzera mm"
#define MSG_CONTROL_RETRACTF                "Atzera egin V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Igo mm"
#define MSG_CONTROL_RETRACT_RECOVER         "Atzera egin mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Swap Atzera mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "Atzera egin V"
#define MSG_AUTORETRACT                     "Atzera egin"
#define MSG_FILAMENTCHANGE                  "Aldatu harizpia"
#define MSG_INIT_SDCARD                     "Hasieratu SD-a"
#define MSG_CNG_SDCARD                      "Aldatu txartela"
#define MSG_ZPROBE_OUT                      "Z zunda kanpora"
#define MSG_BLTOUCH_SELFTEST                "BLTouch AutoProba"
#define MSG_BLTOUCH_RESET                   "BLTouch berrabia."
#define MSG_HOME                            "Etxera"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "lehenengo"
#define MSG_ZPROBE_ZOFFSET                  "Z Konpentsatu"
#define MSG_BABYSTEP_X                      "Mikro-urratsa X"
#define MSG_BABYSTEP_Y                      "Mikro-urratsa Y"
#define MSG_BABYSTEP_Z                      "Mikro-urratsa Z"
#define MSG_ENDSTOP_ABORT                   "Endstop deusezta."
#define MSG_HEATING_FAILED_LCD              "Err: Beroketa"
#define MSG_ERR_REDUNDANT_TEMP              "Err: Tenperatura"
#define MSG_THERMAL_RUNAWAY                 "TENP. KONTROL EZA"
#define MSG_ERR_MAXTEMP                     "Err: Tenp Maximoa"
#define MSG_ERR_MINTEMP                     "Err: Tenp Minimoa"
#define MSG_ERR_MAXTEMP_BED                 "Err: Ohe Tenp Max"
#define MSG_ERR_MINTEMP_BED                 "Err: Ohe Tenp Min"
#define MSG_ERR_Z_HOMING                    "G28 Z Debekatua"
#define MSG_HALTED                          "INPRIMA. GELDIRIK"
#define MSG_PLEASE_RESET                    "Berrabia. Mesedez"
#define MSG_SHORT_DAY                       "d" // One character only
#define MSG_SHORT_HOUR                      "h" // One character only
#define MSG_SHORT_MINUTE                    "m" // One character only
#define MSG_HEATING                         "Berotzen..."
#define MSG_HEATING_COMPLETE                "Berotzea prest."
#define MSG_BED_HEATING                     "Ohea Berotzen."
#define MSG_BED_DONE                        "Ohea Berotuta."
#define MSG_DELTA_CALIBRATE                 "Delta Kalibraketa"
#define MSG_DELTA_CALIBRATE_X               "Kalibratu X"
#define MSG_DELTA_CALIBRATE_Y               "Kalibratu Y"
#define MSG_DELTA_CALIBRATE_Z               "Kalibratu Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Kalibratu Zentrua"
#define MSG_DELTA_AUTO_CALIBRATE            "Auto Kalibraketa"
#define MSG_DELTA_HEIGHT_CALIBRATE          "Delta Alt. Ezar."
#define MSG_INFO_MENU                       "Inprimagailu Inf."
#define MSG_INFO_PRINTER_MENU               "Inprimagailu Inf."
#define MSG_INFO_STATS_MENU                 "Inprima. estatis."
#define MSG_INFO_BOARD_MENU                 "Txartelaren Info."
#define MSG_INFO_THERMISTOR_MENU            "Termistoreak"
#define MSG_INFO_EXTRUDERS                  "Estrusoreak"
#define MSG_INFO_BAUDRATE                   "Baudioak"
#define MSG_INFO_PROTOCOL                   "Protokoloa"
#define MSG_CASE_LIGHT                      "Kabina Argia"

#if LCD_WIDTH > 19
  #define MSG_INFO_PRINT_COUNT              "Inprim. Zenbaketa"
  #define MSG_INFO_COMPLETED_PRINTS         "Burututa"
  #define MSG_INFO_PRINT_TIME               "Inprim. denbora"
  #define MSG_INFO_PRINT_LONGEST            "Imprimatze luzeena"
  #define MSG_INFO_PRINT_FILAMENT           "Estruituta guztira"
#else
  #define MSG_INFO_PRINT_COUNT              "Inprimatze"
  #define MSG_INFO_COMPLETED_PRINTS         "Burututa"
  #define MSG_INFO_PRINT_TIME               "Guztira"
  #define MSG_INFO_PRINT_LONGEST            "Luzeena"
  #define MSG_INFO_PRINT_FILAMENT           "Estrusio"
#endif
#define MSG_INFO_MIN_TEMP                   "Tenp. Minimoa"
#define MSG_INFO_MAX_TEMP                   "Tenp. Maximoa"
#define MSG_INFO_PSU                        "Elikadura Iturria"
#define MSG_DRIVE_STRENGTH                  "Driver Potentzia"
#define MSG_DAC_PERCENT                     "Driver %"
#define MSG_DAC_EEPROM_WRITE                "Idatzi DAC EEPROM"

#define MSG_FILAMENT_CHANGE_HEADER          "HARIZPIA ALDATU"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "ALDAKETA AUKERAK:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Gehiago estruitu"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Inprima. jarraitu"

#define MSG_FILAMENT_CHANGE_MINTEMP         "Tenp Minimoa "
#define MSG_FILAMENT_CHANGE_NOZZLE          "  Pita: "

#endif // LANGUAGE_EU_H
