// Testfine with all languages
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
 * Aragonese
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_AN_H
#define LANGUAGE_AN_H


#define DISPLAY_CHARSET_ASCII

#define WELCOME_MSG                         MACHINE_NAME " parada."
#define MSG_SD_INSERTED                     "Tarcheta mesa"
#define MSG_SD_REMOVED                      "Tarcheta sacada"
#define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters
#define MSG_MAIN                            "Menu prencipal"
#define MSG_AUTOSTART                       "Inicio automatico"
#define MSG_DISABLE_STEPPERS                "Amortar motors"
#define MSG_AUTO_HOME                       "Levar a l'orichen"
#define MSG_AUTO_HOME_X                     "Orichen X"
#define MSG_AUTO_HOME_Y                     "Orichen Y"
#define MSG_AUTO_HOME_Z                     "Orichen Z"
#define MSG_LEVEL_BED_HOMING                "Orichen XYZ"
#define MSG_LEVEL_BED_WAITING               "Encetar (pretar)"
#define MSG_LEVEL_BED_NEXT_POINT            "Vinient punto"
#define MSG_LEVEL_BED_DONE                  "Nivelacion feita!"
#define MSG_SET_HOME_OFFSETS                "Achustar desfases"
#define MSG_HOME_OFFSETS_APPLIED            "Desfase aplicau"
#define MSG_SET_ORIGIN                      "Establir orichen"
#define MSG_PREHEAT_1                       "Precalentar PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " Tot"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " Base"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " Conf"
#define MSG_PREHEAT_2                       "Precalentar ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " Tot"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " Base"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " Conf"
#define MSG_COOLDOWN                        "Enfriar"
#define MSG_SWITCH_PS_ON                    "Enchegar Fuent"
#define MSG_SWITCH_PS_OFF                   "Amortar Fuent"
#define MSG_EXTRUDE                         "Extruir"
#define MSG_RETRACT                         "Retraer"
#define MSG_MOVE_AXIS                       "Mover Eixes"
#define MSG_BED_LEVELING                    "Nivelar base"
#define MSG_LEVEL_BED                       "Nivelar base"
#define MSG_MOVE_X                          "Mover X"
#define MSG_MOVE_Y                          "Mover Y"
#define MSG_MOVE_Z                          "Mover Z"
#define MSG_MOVE_E                          "Extrusor"
#define MSG_MOVE_01MM                       "Mover 0.1mm"
#define MSG_MOVE_1MM                        "Mover 1mm"
#define MSG_MOVE_10MM                       "Mover 10mm"
#define MSG_SPEED                           "Velocidat"
#define MSG_BED_Z                           "Base Z"
#define MSG_NOZZLE                          "Boquilla"
#define MSG_BED                             "Base"
#define MSG_FAN_SPEED                       "Ixoriador"
#define MSG_FLOW                            "Fluxo"
#define MSG_CONTROL                         "Control"
#define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "Temperatura Auto."
#define MSG_ON                              "On"
#define MSG_OFF                             "Off"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Trigar"
#define MSG_ACC                             "Aceleracion"
#define MSG_JERK                            "Jerk"
#define MSG_VX_JERK                         "Vx-jerk"
#define MSG_VY_JERK                         "Vy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "Vel. viache min"
#define MSG_ACCELERATION                    MSG_ACC
#define MSG_AMAX                            "Acel. max"
#define MSG_A_RETRACT                       "Acel. retrac."
#define MSG_A_TRAVEL                        "Acel. Viaje"
#define MSG_STEPS_PER_MM                    "Trangos/mm"
#define MSG_XSTEPS                          "X trangos/mm"
#define MSG_YSTEPS                          "Y trangos/mm"
#define MSG_ZSTEPS                          "Z trangos/mm"
#define MSG_ESTEPS                          "E trangos/mm"
#define MSG_E1STEPS                         "E1 trangos/mm"
#define MSG_E2STEPS                         "E2 trangos/mm"
#define MSG_E3STEPS                         "E3 trangos/mm"
#define MSG_E4STEPS                         "E4 trangos/mm"
#define MSG_E5STEPS                         "E5 trangos/mm"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Movimiento"
#define MSG_FILAMENT                        "Filamento"
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define MSG_FILAMENT_DIAM                   "Fil. Dia."
#define MSG_CONTRAST                        "Contraste"
#define MSG_STORE_EEPROM                    "Alzar memoria"
#define MSG_LOAD_EEPROM                     "Cargar memoria"
#define MSG_RESTORE_FAILSAFE                "Restaurar memoria"
#define MSG_REFRESH                         "Tornar a cargar"
#define MSG_WATCH                           "Informacion"
#define MSG_PREPARE                         "Preparar"
#define MSG_TUNE                            "Achustar"
#define MSG_PAUSE_PRINT                     "Pausar impresion"
#define MSG_RESUME_PRINT                    "Contin. impresion"
#define MSG_STOP_PRINT                      "Detener Impresion"
#define MSG_CARD_MENU                       "Menu de SD"
#define MSG_NO_CARD                         "No i hai tarcheta"
#define MSG_DWELL                           "Reposo..."
#define MSG_USERWAIT                        "Aguardand ordines"
#define MSG_RESUMING                        "Contin. impresion"
#define MSG_PRINT_ABORTED                   "Impres. cancelada"
#define MSG_NO_MOVE                         "Sin movimiento"
#define MSG_KILLED                          "Aturada d'emerch."
#define MSG_STOPPED                         "Aturada."
#define MSG_CONTROL_RETRACT                 "Retraer mm"
#define MSG_CONTROL_RETRACT_SWAP            "Swap Retraer mm"
#define MSG_CONTROL_RETRACTF                "Retraer  F"
#define MSG_CONTROL_RETRACT_ZLIFT           "Devantar mm"
#define MSG_CONTROL_RETRACT_RECOVER         "DesRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Swap DesRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "DesRet F"
#define MSG_AUTORETRACT                     "Retraccion auto."
#define MSG_FILAMENTCHANGE                  "Cambear filamento"
#define MSG_INIT_SDCARD                     "Encetan. tarcheta"
#define MSG_CNG_SDCARD                      "Cambiar tarcheta"
#define MSG_ZPROBE_OUT                      "Sonda Z fuera"
#define MSG_BLTOUCH_SELFTEST                "BLTouch Auto-Test"
#define MSG_BLTOUCH_RESET                   "Reset BLTouch"
#define MSG_HOME                            "Home" // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "first"
#define MSG_ZPROBE_ZOFFSET                  "Desfase Z"
#define MSG_BABYSTEP_X                      "Micropaso X"
#define MSG_BABYSTEP_Y                      "Micropaso Y"
#define MSG_BABYSTEP_Z                      "Micropaso Z"
#define MSG_ENDSTOP_ABORT                   "Cancelado - Endstop"
#define MSG_HEATING_FAILED_LCD              "Error: en calentar"
#define MSG_ERR_REDUNDANT_TEMP              "Error: temperatura"
#define MSG_THERMAL_RUNAWAY                 "Error de temperatura"
#define MSG_ERR_MAXTEMP                     "Error: Temp Maxima"
#define MSG_ERR_MINTEMP                     "Error: Temp Menima"
#define MSG_ERR_MAXTEMP_BED                 "Error: Temp Max base"
#define MSG_ERR_MINTEMP_BED                 "Error: Temp Min base"
#define MSG_ERR_Z_HOMING                    "G28 Z vedau"
#define MSG_HALTED                          "IMPRESORA ATURADA"
#define MSG_PLEASE_RESET                    "Per favor reinic."
#define MSG_SHORT_DAY                       "d"
#define MSG_SHORT_HOUR                      "h"
#define MSG_SHORT_MINUTE                    "m"
#define MSG_HEATING                         "Calentando..."
#define MSG_HEATING_COMPLETE                "Calentamiento listo"
#define MSG_BED_HEATING                     "Calentando base..."
#define MSG_BED_DONE                        "Base calient"
#define MSG_DELTA_CALIBRATE                 "Calibracion Delta"
#define MSG_DELTA_CALIBRATE_X               "Calibrar X"
#define MSG_DELTA_CALIBRATE_Y               "Calibrar Y"
#define MSG_DELTA_CALIBRATE_Z               "Calibrar Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Calibrar Centro"

#define MSG_INFO_MENU                       "Inf. Impresora"
#define MSG_INFO_PRINTER_MENU               "Inf. Impresora"
#define MSG_INFO_STATS_MENU                 "Estadisticas Imp."
#define MSG_INFO_BOARD_MENU                 "Inf. Controlador"
#define MSG_INFO_THERMISTOR_MENU            "Termistors"
#define MSG_INFO_EXTRUDERS                  "Extrusors"
#define MSG_INFO_BAUDRATE                   "Baudios"
#define MSG_INFO_PROTOCOL                   "Protocolo"
#define MSG_CASE_LIGHT                      "Luz"

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Conteo de impresion"
  #define MSG_INFO_COMPLETED_PRINTS         "Completadas"
  #define MSG_INFO_PRINT_TIME               "Tiempo total d'imp."
  #define MSG_INFO_PRINT_LONGEST            "Impresion mas larga"
  #define MSG_INFO_PRINT_FILAMENT           "Total d'extrusion"
#else
  #define MSG_INFO_PRINT_COUNT              "Impresions"
  #define MSG_INFO_COMPLETED_PRINTS         "Completadas"
  #define MSG_INFO_PRINT_TIME               "Total"
  #define MSG_INFO_PRINT_LONGEST            "Mas larga"
  #define MSG_INFO_PRINT_FILAMENT           "Extrusion"
#endif

#define MSG_INFO_MIN_TEMP                   "Temperatura menima"
#define MSG_INFO_MAX_TEMP                   "Temperatura maxima"
#define MSG_INFO_PSU                        "Fuente de aliment"

#define MSG_DRIVE_STRENGTH                  "Fuerza d'o driver"
#define MSG_DAC_PERCENT                     "Driver %"
#define MSG_DAC_EEPROM_WRITE                "Escri. DAC EEPROM"
#define MSG_FILAMENT_CHANGE_HEADER          "PRINT PAUSED"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "RESUME OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Extruir mas"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Resumir imp."

//
// Filament Change screens show up to 3 lines on a 4-line display
//                        ...or up to 2 lines on a 3-line display
//
#define MSG_FILAMENT_CHANGE_INIT_1          "Aguardand iniciar"

#define MSG_FILAMENT_CHANGE_INSERT_1        "Meta o filamento"
#define MSG_FILAMENT_CHANGE_INSERT_2        "y prete lo boton"

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_2          "d'o filamento"
  #define MSG_FILAMENT_CHANGE_INIT_3          "cambear"
  #define MSG_FILAMENT_CHANGE_INSERT_3        "pa continar..."
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_2          "d'o fil. cambear"
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Meta o filamento"
#endif // LCD_HEIGHT < 4

#define MSG_FILAMENT_CHANGE_UNLOAD_1        "Aguardando a"
#define MSG_FILAMENT_CHANGE_UNLOAD_2        "expulsar filament"
#define MSG_FILAMENT_CHANGE_LOAD_1          "Aguardando a"
#define MSG_FILAMENT_CHANGE_LOAD_2          "cargar filamento"
#define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Aguardando a"
#define MSG_FILAMENT_CHANGE_EXTRUDE_2       "extruir filamento"
#define MSG_FILAMENT_CHANGE_RESUME_1        "Aguardando impre."
#define MSG_FILAMENT_CHANGE_RESUME_2        "pa continar"

#endif // LANGUAGE_AN_H
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
 * Bulgarian
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_BG_H
#define LANGUAGE_BG_H

#define MAPPER_D0D1                // For Cyrillic
#define UTF8_MAPPER D0D1
#define DISPLAY_CHARSET_ISO10646_5

#define WELCOME_MSG                         MACHINE_NAME " Готов."
#define MSG_SD_INSERTED                     "Картата е поставена"
#define MSG_SD_REMOVED                      "Картата е извадена"
#define MSG_MAIN                            "Меню"
#define MSG_AUTOSTART                       "Автостарт"
#define MSG_DISABLE_STEPPERS                "Изкл. двигатели"
#define MSG_AUTO_HOME                       "Паркиране"
#define MSG_SET_HOME_OFFSETS                "Задай Начало"
#define MSG_SET_ORIGIN                      "Изходна точка"
#define MSG_PREHEAT_1                       "Подгряване PLA"
#define MSG_PREHEAT_1_N                     "Подгряване PLA"
#define MSG_PREHEAT_1_ALL                   "Подгр. PLA Всички"
#define MSG_PREHEAT_1_BEDONLY               "Подгр. PLA Легло"
#define MSG_PREHEAT_1_SETTINGS              "Настройки PLA"
#define MSG_PREHEAT_2                       "Подгряване ABS"
#define MSG_PREHEAT_2_N                     "Подгряване ABS"
#define MSG_PREHEAT_2_ALL                   "Подгр. ABS Всички"
#define MSG_PREHEAT_2_BEDONLY               "Подгр. ABS Легло"
#define MSG_PREHEAT_2_SETTINGS              "Настройки ABS"
#define MSG_COOLDOWN                        "Охлаждане"
#define MSG_SWITCH_PS_ON                    "Вкл. захранване"
#define MSG_SWITCH_PS_OFF                   "Изкл. захранване"
#define MSG_EXTRUDE                         "Екструзия"
#define MSG_RETRACT                         "Откат"
#define MSG_MOVE_AXIS                       "Движение по ос"
#define MSG_BED_LEVELING                    "Нивелиране"
#define MSG_LEVEL_BED                       "Нивелиране"
#define MSG_MOVE_X                          "Движение по X"
#define MSG_MOVE_Y                          "Движение по Y"
#define MSG_MOVE_Z                          "Движение по Z"
#define MSG_MOVE_E                          "Екструдер"
#define MSG_MOVE_01MM                       "Премести с 0.1mm"
#define MSG_MOVE_1MM                        "Премести с 1mm"
#define MSG_MOVE_10MM                       "Премести с 10mm"
#define MSG_SPEED                           "Скорост"
#define MSG_BED_Z                           "Bed Z"
#define MSG_NOZZLE                          LCD_STR_THERMOMETER " Дюза"
#define MSG_BED                             LCD_STR_THERMOMETER " Легло"
#define MSG_FAN_SPEED                       "Вентилатор"
#define MSG_FLOW                            "Поток"
#define MSG_CONTROL                         "Управление"
#define MSG_MIN                             LCD_STR_THERMOMETER " Минимум"
#define MSG_MAX                             LCD_STR_THERMOMETER " Максимум"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Фактор"
#define MSG_AUTOTEMP                        "Авто-темп."
#define MSG_ON                              "Вкл. "
#define MSG_OFF                             "Изкл. "
#define MSG_A_RETRACT                       "A-откат"
#define MSG_A_TRAVEL                        "A-travel"
#define MSG_STEPS_PER_MM                    "Стъпки/mm"
#define MSG_XSTEPS                          "X стъпки/mm"
#define MSG_YSTEPS                          "Y стъпки/mm"
#define MSG_ZSTEPS                          "Z стъпки/mm"
#define MSG_ESTEPS                          "E стъпки/mm"
#define MSG_E1STEPS                         "E1 стъпки/mm"
#define MSG_E2STEPS                         "E2 стъпки/mm"
#define MSG_E3STEPS                         "E3 стъпки/mm"
#define MSG_E4STEPS                         "E4 стъпки/mm"
#define MSG_E5STEPS                         "E5 стъпки/mm"
#define MSG_TEMPERATURE                     "Температура"
#define MSG_MOTION                          "Движение"
#define MSG_FILAMENT                        "Нишка"
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define MSG_FILAMENT_DIAM                   "Диам. нишка"
#define MSG_CONTRAST                        "LCD контраст"
#define MSG_STORE_EEPROM                    "Запази в EPROM"
#define MSG_LOAD_EEPROM                     "Зареди от EPROM"
#define MSG_RESTORE_FAILSAFE                "Фабрични настройки"
#define MSG_REFRESH                         LCD_STR_REFRESH "Обнови"
#define MSG_WATCH                           "Преглед"
#define MSG_PREPARE                         "Действия"
#define MSG_TUNE                            "Настройка"
#define MSG_PAUSE_PRINT                     "Пауза"
#define MSG_RESUME_PRINT                    "Възобнови печата"
#define MSG_STOP_PRINT                      "Спри печата"
#define MSG_CARD_MENU                       "Меню карта"
#define MSG_NO_CARD                         "Няма карта"
#define MSG_DWELL                           "Почивка..."
#define MSG_USERWAIT                        "Изчакване"
#define MSG_RESUMING                        "Продълж. печата"
#define MSG_PRINT_ABORTED                   "Печатът е прекъснат"
#define MSG_NO_MOVE                         "Няма движение"
#define MSG_KILLED                          "УБИТО."
#define MSG_STOPPED                         "СПРЯНО."
#define MSG_CONTROL_RETRACT                 "Откат mm"
#define MSG_CONTROL_RETRACT_SWAP            "Смяна Откат mm"
#define MSG_CONTROL_RETRACTF                "Откат  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Скок mm"
#define MSG_CONTROL_RETRACT_RECOVER         "Възврат mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Смяна Възврат mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "Възврат  V"
#define MSG_AUTORETRACT                     "Автоoткат"
#define MSG_FILAMENTCHANGE                  "Смяна нишка"
#define MSG_INIT_SDCARD                     "Иниц. SD-Карта"
#define MSG_CNG_SDCARD                      "Смяна SD-Карта"
#define MSG_ZPROBE_OUT                      "Z-сондата е извадена"
#define MSG_ZPROBE_ZOFFSET                  "Z Отстояние"
#define MSG_BABYSTEP_X                      "Министъпка X"
#define MSG_BABYSTEP_Y                      "Министъпка Y"
#define MSG_BABYSTEP_Z                      "Министъпка Z"
#define MSG_ENDSTOP_ABORT                   "Стоп Кр.Изключватели"
#define MSG_DELTA_CALIBRATE                 "Делта Калибровка"
#define MSG_DELTA_CALIBRATE_X               "Калибровка X"
#define MSG_DELTA_CALIBRATE_Y               "Калибровка Y"
#define MSG_DELTA_CALIBRATE_Z               "Калибровка Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Калибровка Център"

#endif // LANGUAGE_BG_H
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
 * Catalan
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_CA_H
#define LANGUAGE_CA_H

#define MAPPER_C2C3  // because of "ó"
#define UTF8_MAPPER C2C3
#define DISPLAY_CHARSET_ISO10646_1

#define WELCOME_MSG                         MACHINE_NAME " preparada."
#define MSG_SD_INSERTED                     "Targeta detectada."
#define MSG_SD_REMOVED                      "Targeta extreta."
#define MSG_LCD_ENDSTOPS                    "Endstops"
#define MSG_MAIN                            "Menú principal"
#define MSG_AUTOSTART                       "Inici automatic"
#define MSG_DISABLE_STEPPERS                "Desactiva motors"
#define MSG_DEBUG_MENU                      "Menu de depuracio"
#define MSG_PROGRESS_BAR_TEST               "Test barra progres"
#define MSG_AUTO_HOME                       "Ves a l'origen"
#define MSG_AUTO_HOME_X                     "X a origen"
#define MSG_AUTO_HOME_Y                     "Y a origen"
#define MSG_AUTO_HOME_Z                     "Z a origen"
#define MSG_LEVEL_BED_HOMING                "Origen XYZ"
#define MSG_LEVEL_BED_WAITING               "Premeu per iniciar"
#define MSG_LEVEL_BED_NEXT_POINT            "Següent punt"
#define MSG_LEVEL_BED_DONE                  "Anivellament fet!"
#define MSG_SET_HOME_OFFSETS                "Ajusta decalatge"
#define MSG_HOME_OFFSETS_APPLIED            "Decalatge aplicat"
#define MSG_SET_ORIGIN                      "Estableix origen"
#define MSG_PREHEAT_1                       "Preescalfa PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " Tot"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " Llit"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " Conf."
#define MSG_PREHEAT_2                       "Preescalfa ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " Tot"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " Llit"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " Conf."
#define MSG_COOLDOWN                        "Refreda"
#define MSG_SWITCH_PS_ON                    "Switch power on"
#define MSG_SWITCH_PS_OFF                   "Switch power off"
#define MSG_EXTRUDE                         "Extrudeix"
#define MSG_RETRACT                         "Retreu"
#define MSG_MOVE_AXIS                       "Mou eixos"
#define MSG_BED_LEVELING                    "Anivella llit"
#define MSG_LEVEL_BED                       "Anivella llit"
#define MSG_MOVING                          "Movent.."
#define MSG_FREE_XY                         "XY lliures"
#define MSG_MOVE_X                          "Mou X"
#define MSG_MOVE_Y                          "Mou Y"
#define MSG_MOVE_Z                          "Mou Z"
#define MSG_MOVE_E                          "Extrusor"
#define MSG_MOVE_01MM                       "Mou 0.1mm"
#define MSG_MOVE_1MM                        "Mou 1mm"
#define MSG_MOVE_10MM                       "Mou 10mm"
#define MSG_SPEED                           "Velocitat"
#define MSG_BED_Z                           "Llit Z"
#define MSG_NOZZLE                          "Nozzle"
#define MSG_BED                             "Llit"
#define MSG_FAN_SPEED                       "Vel. Ventilador"
#define MSG_FLOW                            "Flux"
#define MSG_CONTROL                         "Control"
#define MSG_MIN                             LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "Autotemp"
#define MSG_ON                              "On "
#define MSG_OFF                             "Off"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Select"
#define MSG_ACC                             "Accel"
#define MSG_JERK                            "Jerk"
#define MSG_VX_JERK                         "Vx-jerk"
#define MSG_VY_JERK                         "Vy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VViatge min"
#define MSG_AMAX                            "Accel. max "
#define MSG_A_RETRACT                       "Accel. retracc"
#define MSG_A_TRAVEL                        "Accel. Viatge"
#define MSG_STEPS_PER_MM                    "Passos/mm"
#define MSG_XSTEPS                          "Xpassos/mm"
#define MSG_YSTEPS                          "Ypassos/mm"
#define MSG_ZSTEPS                          "Zpassos/mm"
#define MSG_ESTEPS                          "Epassos/mm"
#define MSG_E1STEPS                         "E1passos/mm"
#define MSG_E2STEPS                         "E2passos/mm"
#define MSG_E3STEPS                         "E3passos/mm"
#define MSG_E4STEPS                         "E4passos/mm"
#define MSG_E5STEPS                         "E5passos/mm"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Moviment"
#define MSG_FILAMENT                        "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E en mm3"
#define MSG_FILAMENT_DIAM                   "Diam. Fil."
#define MSG_CONTRAST                        "Contrast de LCD"
#define MSG_STORE_EEPROM                    "Desa memoria"
#define MSG_LOAD_EEPROM                     "Carrega memoria"
#define MSG_RESTORE_FAILSAFE                "Restaura valors"
#define MSG_REFRESH                         "Actualitza"
#define MSG_WATCH                           "Pantalla Info."
#define MSG_PREPARE                         "Prepara"
#define MSG_TUNE                            "Ajusta"
#define MSG_PAUSE_PRINT                     "Pausa impressio"
#define MSG_RESUME_PRINT                    "Repren impressio"
#define MSG_STOP_PRINT                      "Atura impressio."
#define MSG_CARD_MENU                       "Imprimeix de SD"
#define MSG_NO_CARD                         "No hi ha targeta"
#define MSG_DWELL                           "En repos..."
#define MSG_USERWAIT                        "Esperant usuari.."
#define MSG_RESUMING                        "Reprenent imp."
#define MSG_PRINT_ABORTED                   "Imp. cancelada"
#define MSG_NO_MOVE                         "Sense moviment."
#define MSG_KILLED                          "MATAT."
#define MSG_STOPPED                         "ATURADA."
#define MSG_CONTROL_RETRACT                 "Retreu mm"
#define MSG_CONTROL_RETRACT_SWAP            "Swap Retreure mm"
#define MSG_CONTROL_RETRACTF                "Retreu V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Aixeca mm"
#define MSG_CONTROL_RETRACT_RECOVER         "DesRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Swap DesRet +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "DesRet V"
#define MSG_AUTORETRACT                     "Auto retraccio"
#define MSG_FILAMENTCHANGE                  "Canvia filament"
#define MSG_INIT_SDCARD                     "Inicialitza SD"
#define MSG_CNG_SDCARD                      "Canvia SD"
#define MSG_ZPROBE_OUT                      "Sonda Z fora"
#define MSG_BLTOUCH_RESET                   "Reinicia BLTouch"
#define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "primer"
#define MSG_ZPROBE_ZOFFSET                  "Decalatge Z"
#define MSG_BABYSTEP_X                      "Micropas X"
#define MSG_BABYSTEP_Y                      "Micropas Y"
#define MSG_BABYSTEP_Z                      "Micropas Z"
#define MSG_ENDSTOP_ABORT                   "Cancel. Endstop"
#define MSG_HEATING_FAILED_LCD              "Error al escalfar"
#define MSG_ERR_REDUNDANT_TEMP              "Err: TEMP REDUNDANT"
#define MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     "Err: TEMP MAXIMA"
#define MSG_ERR_MINTEMP                     "Err: TEMP MINIMA"
#define MSG_ERR_MAXTEMP_BED                 "Err: TEMPMAX LLIT"
#define MSG_ERR_MINTEMP_BED                 "Err: TEMPMIN LLIT"
#define MSG_ERR_Z_HOMING                    "G28 Z No permes"
#define MSG_HALTED                          "IMPRESSORA PARADA"
#define MSG_PLEASE_RESET                    "Reinicieu"
#define MSG_SHORT_DAY                       "d" // One character only
#define MSG_SHORT_HOUR                      "h" // One character only
#define MSG_SHORT_MINUTE                    "m" // One character only
#define MSG_HEATING                         "Escalfant..."
#define MSG_HEATING_COMPLETE                "Escalfament fet."
#define MSG_BED_HEATING                     "Escalfant llit"
#define MSG_BED_DONE                        "Llit fet."
#define MSG_DELTA_CALIBRATE                 "Calibratge Delta"
#define MSG_DELTA_CALIBRATE_X               "Calibra X"
#define MSG_DELTA_CALIBRATE_Y               "Calibra Y"
#define MSG_DELTA_CALIBRATE_Z               "Calibra Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Calibra el centre"

#define MSG_INFO_MENU                       "Quant a la impr."
#define MSG_INFO_PRINTER_MENU               "Info Impressora"
#define MSG_INFO_STATS_MENU                 "Estadistiques"
#define MSG_INFO_BOARD_MENU                 "Info placa"
#define MSG_INFO_THERMISTOR_MENU            "Termistors"
#define MSG_INFO_EXTRUDERS                  "Extrusors"
#define MSG_INFO_BAUDRATE                   "Baud"
#define MSG_INFO_PROTOCOL                   "Protocol"
#define MSG_CASE_LIGHT                      "Llum"

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Total impressions"
  #define MSG_INFO_COMPLETED_PRINTS         "Acabades"
  #define MSG_INFO_PRINT_TIME               "Temps imprimint"
  #define MSG_INFO_PRINT_LONGEST            "Treball mes llarg"
  #define MSG_INFO_PRINT_FILAMENT           "Total extrudit"
#else
  #define MSG_INFO_PRINT_COUNT              "Impressions"
  #define MSG_INFO_COMPLETED_PRINTS         "Acabades"
  #define MSG_INFO_PRINT_TIME               "Total"
  #define MSG_INFO_PRINT_LONGEST            "Mes llarg"
  #define MSG_INFO_PRINT_FILAMENT           "Extrudit"
#endif

#define MSG_INFO_MIN_TEMP                   "Temp. mínima"
#define MSG_INFO_MAX_TEMP                   "Temp. màxima"
#define MSG_INFO_PSU                        "Font alimentacio"

#define MSG_DRIVE_STRENGTH                  "Força motor"
#define MSG_DAC_PERCENT                     "Driver %"
#define MSG_DAC_EEPROM_WRITE                "DAC EEPROM Write"
#define MSG_FILAMENT_CHANGE_HEADER          "PRINT PAUSED"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "RESUME OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Extrudeix mes"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Repren impressió"
#define MSG_FILAMENT_CHANGE_MINTEMP         "Temp minima es "

//
// Filament Change screens show up to 3 lines on a 4-line display
//                        ...or up to 2 lines on a 3-line display
//
#if LCD_HEIGHT >= 4
  #define MSG_FILAMENT_CHANGE_INIT_1          "Esperant per"
  #define MSG_FILAMENT_CHANGE_INIT_2          "iniciar el canvi"
  #define MSG_FILAMENT_CHANGE_INIT_3          "de filament"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Esperant per"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "treure filament"
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Poseu filament"
  #define MSG_FILAMENT_CHANGE_INSERT_2        "i premeu el boto"
  #define MSG_FILAMENT_CHANGE_INSERT_3        "per continuar..."
  #define MSG_FILAMENT_CHANGE_HEAT_1          "Premeu boto per"
  #define MSG_FILAMENT_CHANGE_HEAT_2          "escalfar nozzle."
  #define MSG_FILAMENT_CHANGE_HEATING_1       "Escalfant nozzle"
  #define MSG_FILAMENT_CHANGE_HEATING_2       "Espereu..."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Esperant carrega"
  #define MSG_FILAMENT_CHANGE_LOAD_2          "de filament"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Esperant per"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "extreure filament"
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Esperant per"
  #define MSG_FILAMENT_CHANGE_RESUME_2        "reprendre"
#else // LCD_HEIGHT < 4
  #define MSG_FILAMENT_CHANGE_INIT_1          "Espereu..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Expulsant..."
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Insereix i prem"
  #define MSG_FILAMENT_CHANGE_HEATING_1       "Escalfant..."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Carregant..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Extrudint..."
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Reprenent..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_CA_H
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
 * Chinese
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_CN_H
#define LANGUAGE_CN_H

#define DISPLAY_CHARSET_ISO10646_CN

#define WELCOME_MSG                         "\xa4\xa5\xa6\xa7"
#define MSG_SD_INSERTED                     "\xa8\xa9\xaa\xab"
#define MSG_SD_REMOVED                      "\xa8\xa9\xac\xad"
#define MSG_MAIN                            "\xae\xaf\xb0"
#define MSG_AUTOSTART                       "\xb1\xb2\xb3\xb4"
#define MSG_DISABLE_STEPPERS                "\xb5\xb6\xb7\xb8\xb9\xba"
#define MSG_AUTO_HOME                       "\xbb\xbc\xbd"
#define MSG_LEVEL_BED_HOMING                "Homing XYZ"
#define MSG_LEVEL_BED_WAITING               "Click to Begin"
#define MSG_LEVEL_BED_DONE                  "Leveling Done!"
#define MSG_SET_HOME_OFFSETS                "\xbe\xbf\xbb\xbc\xbd\xc0\xc1"
#define MSG_HOME_OFFSETS_APPLIED            "Offsets applied"
#define MSG_SET_ORIGIN                      "\xbe\xbf\xbc\xbd"
#define MSG_PREHEAT_1                       "\xc3\xc4 PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " \xc5\xc6"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " \xc4\xc7"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " \xbe\xbf"
#define MSG_PREHEAT_2                       "\xc3\xc4 ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " \xc5\xc6"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " \xbe\xc6"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " \xbe\xbf"
#define MSG_COOLDOWN                        "\xc8\xc9"
#define MSG_SWITCH_PS_ON                    "\xb9\xcb\xca\xb3"
#define MSG_SWITCH_PS_OFF                   "\xb9\xcb\xb5\xb6"
#define MSG_EXTRUDE                         "\xcc\xad"
#define MSG_RETRACT                         "\xbb\xcd"
#define MSG_MOVE_AXIS                       "\xc1\xb2\xce"
#define MSG_BED_LEVELING                    "\xcf\xe0\xc4\xc7"
#define MSG_LEVEL_BED                       "\xcf\xe0\xc4\xc7"
#define MSG_MOVE_X                          "\xc1\xb2 X"
#define MSG_MOVE_Y                          "\xc1\xb2 Y"
#define MSG_MOVE_Z                          "\xc1\xb2 Z"
#define MSG_MOVE_E                          "\xcc\xad\xba"
#define MSG_MOVE_01MM                       "\xc1\xb2 0.1mm"
#define MSG_MOVE_1MM                        "\xc1\xb2 1mm"
#define MSG_MOVE_10MM                       "\xc1\xb2 10mm"
#define MSG_SPEED                           "\xd1\xd2"
#define MSG_NOZZLE                          "\xd3\xd4"
#define MSG_BED                             "\xc4\xc7"
#define MSG_FAN_SPEED                       "\xd5\xd6\xd1\xd2"
#define MSG_FLOW                            "\xcc\xad\xd1\xd2"
#define MSG_CONTROL                         "\xd8\xd9"
#define MSG_MIN                             LCD_STR_THERMOMETER " \xda\xdb"
#define MSG_MAX                             LCD_STR_THERMOMETER " \xda\xdc"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " \xdd\xde"
#define MSG_AUTOTEMP                        "\xb1\xb2\xd8\xc9"
#define MSG_ON                              "\xb3 "  // intentional space to shift wide symbol to the left
#define MSG_OFF                             "\xb5 "  // intentional space to shift wide symbol to the left
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "Accel"
#define MSG_JERK                            "Jerk"
#define MSG_VX_JERK                         "Vx-jerk"
#define MSG_VY_JERK                         "Vy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract"
#define MSG_A_TRAVEL                        "A-travel"
#define MSG_STEPS_PER_MM                    "Steps/mm"
#define MSG_XSTEPS                          "Xsteps/mm"
#define MSG_YSTEPS                          "Ysteps/mm"
#define MSG_ZSTEPS                          "Zsteps/mm"
#define MSG_ESTEPS                          "Esteps/mm"
#define MSG_E1STEPS                         "E1steps/mm"
#define MSG_E2STEPS                         "E2steps/mm"
#define MSG_E3STEPS                         "E3steps/mm"
#define MSG_E4STEPS                         "E4steps/mm"
#define MSG_E5STEPS                         "E5steps/mm"
#define MSG_TEMPERATURE                     "\xc9\xd2"
#define MSG_MOTION                          "\xdf\xb2"
#define MSG_FILAMENT                        "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define MSG_FILAMENT_DIAM                   "Fil. Dia."
#define MSG_CONTRAST                        "LCD contrast"
#define MSG_STORE_EEPROM                    "Store memory"
#define MSG_LOAD_EEPROM                     "Load memory"
#define MSG_RESTORE_FAILSAFE                "Restore failsafe"
#define MSG_REFRESH                         "Refresh"
#define MSG_WATCH                           "\xec\xed\xee\xef"
#define MSG_PREPARE                         "\xa4\xa5"
#define MSG_TUNE                            "\xcf\xf0"
#define MSG_PAUSE_PRINT                     "\xf1\xf2\xca\xf3"
#define MSG_RESUME_PRINT                    "\xf4\xf5\xca\xf3"
#define MSG_STOP_PRINT                      "\xf2\xf6\xca\xf3"
#define MSG_CARD_MENU                       "\xaf\xb0"
#define MSG_NO_CARD                         "\xf9\xa8"
#define MSG_DWELL                           "Sleep..."
#define MSG_USERWAIT                        "Wait for user..."
#define MSG_RESUMING                        "Resuming print"
#define MSG_PRINT_ABORTED                   "Print aborted"
#define MSG_NO_MOVE                         "No move."
#define MSG_KILLED                          "KILLED. "
#define MSG_STOPPED                         "STOPPED. "
#define MSG_CONTROL_RETRACT                 "Retract mm"
#define MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"
#define MSG_CONTROL_RETRACTF                "Retract  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Change filament"
#define MSG_INIT_SDCARD                     "Init. SD card"
#define MSG_CNG_SDCARD                      "Change SD card"
#define MSG_ZPROBE_OUT                      "Z probe out. bed"
#define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "first"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"
#define MSG_HEATING_FAILED_LCD              "Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              "Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     "Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     "Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 "Err: MAXTEMP BED"
#define MSG_DELTA_CALIBRATE                 "Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               "Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               "Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               "Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Calibrate Center"

#endif // LANGUAGE_CN_H
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
 * Czech
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 * Translated by Petr Zahradnik, Computer Laboratory
 * Blog and video blog Zahradnik se bavi
 * http://www.zahradniksebavi.cz
 *
 */
#ifndef LANGUAGE_CZ_H
#define LANGUAGE_CZ_H

#define DISPLAY_CHARSET_ASCII

#define WELCOME_MSG                         MACHINE_NAME " pripraven."
#define MSG_BACK                            "Zpet"
#define MSG_SD_INSERTED                     "Karta vlozena"
#define MSG_SD_REMOVED                      "Karta vyjmuta"
#define MSG_LCD_ENDSTOPS                    "Endstopy" // max 8 znaku
#define MSG_MAIN                            "Hlavni nabidka"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Uvolnit motory"
#define MSG_DEBUG_MENU                      "Nabidka ladeni"
#define MSG_PROGRESS_BAR_TEST               "Test uk.prubehu"
#define MSG_AUTO_HOME                       "Domovska pozice"
#define MSG_AUTO_HOME_X                     "Domu osa X"
#define MSG_AUTO_HOME_Y                     "Domu osa Y"
#define MSG_AUTO_HOME_Z                     "Domu osa Z"
#define MSG_LEVEL_BED_HOMING                "Mereni podlozky"
#define MSG_LEVEL_BED_WAITING               "Kliknutim spustte"
#define MSG_LEVEL_BED_NEXT_POINT            "Dalsi bod"
#define MSG_LEVEL_BED_DONE                  "Mereni hotovo!"
#define MSG_Z_FADE_HEIGHT                   "Vyska srovnavani"
#define MSG_SET_HOME_OFFSETS                "Nastavit ofsety"
#define MSG_HOME_OFFSETS_APPLIED            "Ofsety nastaveny"
#define MSG_SET_ORIGIN                      "Nastavit pocatek"
#define MSG_PREHEAT_1                       "Zahrat PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " vse"
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 " hotend"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " podloz"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " nast"
#define MSG_PREHEAT_2                       "Zahrat ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " vse"
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 " hotend"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " podloz"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " nast"
#define MSG_COOLDOWN                        "Zchladit"
#define MSG_SWITCH_PS_ON                    "Zapnout napajeni"
#define MSG_SWITCH_PS_OFF                   "Vypnout napajeni"
#define MSG_EXTRUDE                         "Vytlacit (extr.)"
#define MSG_RETRACT                         "Zatlacit (retr.)"
#define MSG_MOVE_AXIS                       "Posunout osy"
#define MSG_BED_LEVELING                    "Vyrovnat podlozku"
#define MSG_LEVEL_BED                       "Vyrovnat podlozku"
#define MSG_EDITING_STOPPED                 "Konec uprav site"

#define MSG_UBL_DOING_G29                   "Provadim G29"
#define MSG_UBL_UNHOMED                     "Prejedte domu"
#define MSG_UBL_TOOLS                       "UBL nastroje"
#define MSG_UBL_LEVEL_BED                   "Unified Bed Leveling"
#define MSG_UBL_MANUAL_MESH                 "Manualni sit bodu"
#define MSG_UBL_BC_INSERT                   "Vlozte kartu, zmerte"
#define MSG_UBL_BC_INSERT2                  "Zmerte"
#define MSG_UBL_BC_REMOVE                   "Odstrante a zmerte"
#define MSG_UBL_MOVING_TO_NEXT              "Presoun na dalsi"
#define MSG_UBL_ACTIVATE_MESH               "Aktivovat UBL"
#define MSG_UBL_DEACTIVATE_MESH             "Deaktivovat UBL"
#define MSG_UBL_SET_BED_TEMP                "Teplota podlozky"
#define MSG_UBL_CUSTOM_BED_TEMP             MSG_UBL_SET_BED_TEMP
#define MSG_UBL_SET_HOTEND_TEMP             "Teplota hotendu"
#define MSG_UBL_CUSTOM_HOTEND_TEMP          MSG_UBL_SET_HOTEND_TEMP
#define MSG_UBL_EDIT_CUSTOM_MESH            "Upravit vlastni sit"
#define MSG_UBL_FINE_TUNE_MESH              "Doladit sit bodu"
#define MSG_UBL_DONE_EDITING_MESH           "Konec uprav site"
#define MSG_UBL_BUILD_CUSTOM_MESH           "Vlastni sit"
#define MSG_UBL_BUILD_MESH_MENU             "Vytvorit sit"
#define MSG_UBL_BUILD_PLA_MESH              "Sit bodu PLA"
#define MSG_UBL_BUILD_ABS_MESH              "Sit bodu ABS"
#define MSG_UBL_BUILD_COLD_MESH             "Studena sit bodu"
#define MSG_UBL_MESH_HEIGHT_ADJUST          "Upravit vysku site"
#define MSG_UBL_MESH_HEIGHT_AMOUNT          "Vyska"
#define MSG_UBL_VALIDATE_MESH_MENU          "Zkontrolovat sit"
#define MSG_UBL_VALIDATE_PLA_MESH           "Kontrola site PLA"
#define MSG_UBL_VALIDATE_ABS_MESH           "Kontrola site ABS"
#define MSG_UBL_VALIDATE_CUSTOM_MESH        "Kontrola vlast. site"
#define MSG_UBL_CONTINUE_MESH               "Pokracovat v siti"
#define MSG_UBL_MESH_LEVELING               "Sitove rovnani"
#define MSG_UBL_3POINT_MESH_LEVELING        "3-bodove rovnani"
#define MSG_UBL_GRID_MESH_LEVELING          "Mrizkove rovnani"
#define MSG_UBL_MESH_LEVEL                  "Srovnat podlozku"
#define MSG_UBL_SIDE_POINTS                 "Postranni body"
#define MSG_UBL_MAP_TYPE                    "Typ site bodu"
#define MSG_UBL_OUTPUT_MAP                  "Exportovat sit"
#define MSG_UBL_OUTPUT_MAP_HOST             "Exportovat do PC"
#define MSG_UBL_OUTPUT_MAP_CSV              "Exportovat do CSV"
#define MSG_UBL_OUTPUT_MAP_BACKUP           "Zaloha do PC"
#define MSG_UBL_INFO_UBL                    "Info o UBL do PC"
#define MSG_UBL_EDIT_MESH_MENU              "Upravit sit dobu"
#define MSG_UBL_FILLIN_AMOUNT               "Hustota mrizky"
#define MSG_UBL_MANUAL_FILLIN               "Rucni hustota"
#define MSG_UBL_SMART_FILLIN                "Chytra hustota"
#define MSG_UBL_FILLIN_MESH                 "Zaplnit mrizku"
#define MSG_UBL_INVALIDATE_ALL              "Zrusit vsechno"
#define MSG_UBL_INVALIDATE_CLOSEST          "Zrusit posledni"
#define MSG_UBL_FINE_TUNE_ALL               "Upravit vsechny"
#define MSG_UBL_FINE_TUNE_CLOSEST           "Upravit posledni"
#define MSG_UBL_STORAGE_MESH_MENU           "Uloziste siti"
#define MSG_UBL_STORAGE_SLOT                "Pametovy slot"
#define MSG_UBL_LOAD_MESH                   "Nacist sit bodu"
#define MSG_UBL_SAVE_MESH                   "Ulozit sit bodu"
#define MSG_UBL_SAVE_ERROR                  "Err: Ulozit UBL"
#define MSG_UBL_RESTORE_ERROR               "Err: Obnovit UBL"
#define MSG_UBL_Z_OFFSET_STOPPED            "Konec Z-Offsetu"
#define MSG_UBL_STEP_BY_STEP_MENU           "UBL Postupne"

#define MSG_USER_MENU                       "Vlastni prikazy"
#define MSG_MOVING                          "Posunování..."
#define MSG_FREE_XY                         "Uvolnit XY"
#define MSG_MOVE_X                          "Posunout X"
#define MSG_MOVE_Y                          "Posunout Y"
#define MSG_MOVE_Z                          "Posunout Z"
#define MSG_MOVE_E                          "Extruder"
#define MSG_MOVE_01MM                       "Posunout o 0,1mm"
#define MSG_MOVE_1MM                        "Posunout o 1mm"
#define MSG_MOVE_10MM                       "Posunout o 10mm"
#define MSG_SPEED                           "Rychlost"
#define MSG_BED_Z                           "Vyska podl."
#define MSG_NOZZLE                          "Tryska"
#define MSG_BED                             "Podlozka"
#define MSG_FAN_SPEED                       "Rychlost vent."
#define MSG_FLOW                            "Prutok"
#define MSG_CONTROL                         "Ovladani"
#define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Fakt"
#define MSG_AUTOTEMP                        "Autoteplota"
#define MSG_ON                              "Zap"
#define MSG_OFF                             "Vyp"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Vybrat"
#define MSG_ACC                             "Zrychl"
#define MSG_JERK                            "Jerk"
#define MSG_VX_JERK                         "Vx-jerk"
#define MSG_VY_JERK                         "Vy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VELOCITY                        "Rychlost"
#define MSG_VMAX                            "Vmax "
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_ACCELERATION                    "Akcelerace"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retrakt"
#define MSG_A_TRAVEL                        "A-prejezd"
#define MSG_STEPS_PER_MM                    "Kroku/mm"
#define MSG_XSTEPS                          "Xkroku/mm"
#define MSG_YSTEPS                          "Ykroku/mm"
#define MSG_ZSTEPS                          "Zkroku/mm"
#define MSG_ESTEPS                          "Ekroku/mm"
#define MSG_E1STEPS                         "E1kroku/mm"
#define MSG_E2STEPS                         "E2kroku/mm"
#define MSG_E3STEPS                         "E3kroku/mm"
#define MSG_E4STEPS                         "E4kroku/mm"
#define MSG_E5STEPS                         "E5kroku/mm"
#define MSG_TEMPERATURE                     "Teplota"
#define MSG_MOTION                          "Pohyb"
#define MSG_FILAMENT                        "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E na mm3"
#define MSG_FILAMENT_DIAM                   "Fil. Prum."
#define MSG_ADVANCE_K                       "K pro posun"
#define MSG_CONTRAST                        "Kontrast LCD"
#define MSG_STORE_EEPROM                    "Ulozit nastaveni"
#define MSG_LOAD_EEPROM                     "Nacist nastaveni"
#define MSG_RESTORE_FAILSAFE                "Obnovit vychozi"
#define MSG_INIT_EEPROM                     "Inic. EEPROM"
#define MSG_REFRESH                         "Obnovit"
#define MSG_WATCH                           "Info obrazovka"
#define MSG_PREPARE                         "Priprava tisku"
#define MSG_TUNE                            "Doladeni tisku"
#define MSG_PAUSE_PRINT                     "Pozastavit tisk"
#define MSG_RESUME_PRINT                    "Obnovit tisk"
#define MSG_STOP_PRINT                      "Zastavit tisk"
#define MSG_CARD_MENU                       "Tisknout z SD"
#define MSG_NO_CARD                         "Zadna SD karta"
#define MSG_DWELL                           "Uspano..."
#define MSG_USERWAIT                        "Cekani na uziv..."
#define MSG_PRINT_PAUSED                    "Tisk pozastaven"
#define MSG_RESUMING                        "Obnovovani tisku"
#define MSG_PRINT_ABORTED                   "Tisk zrusen"
#define MSG_NO_MOVE                         "Zadny pohyb."
#define MSG_KILLED                          "PRERUSENO. "
#define MSG_STOPPED                         "ZASTAVENO. "
#define MSG_CONTROL_RETRACT                 "Retrakt mm"
#define MSG_CONTROL_RETRACT_SWAP            "Vymena Re.mm"
#define MSG_CONTROL_RETRACTF                "Retraktovat  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Zvednuti Z mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Vymenit filament"
#define MSG_INIT_SDCARD                     "Nacist SD kartu"
#define MSG_CNG_SDCARD                      "Vymenit SD kartu"
#define MSG_ZPROBE_OUT                      "Sonda Z mimo podl"
#define MSG_BLTOUCH                         "BLTouch"
#define MSG_BLTOUCH_SELFTEST                "BLTouch Self-Test"
#define MSG_BLTOUCH_RESET                   "BLTouch Reset"
#define MSG_BLTOUCH_DEPLOY                  "BLTouch Vysunout"
#define MSG_BLTOUCH_STOW                    "BLTouch Zasunout"
#define MSG_HOME                            "Domu"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "prvni"
#define MSG_ZPROBE_ZOFFSET                  "Z ofset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"
#define MSG_HEATING_FAILED_LCD              "Chyba zahrivani"
#define MSG_ERR_REDUNDANT_TEMP              "REDUND. TEPLOTA"
#define MSG_THERMAL_RUNAWAY                 "TEPLOTNI SKOK"
#define MSG_ERR_MAXTEMP                     "VYSOKA TEPLOTA"
#define MSG_ERR_MINTEMP                     "NIZKA TEPLOTA"
#define MSG_ERR_MAXTEMP_BED                 "VYS. TEPL. PODL."
#define MSG_ERR_MINTEMP_BED                 "NIZ. TEPL. PODL."
#define MSG_ERR_Z_HOMING                    "G28 Z ZAKAZANO"
#define MSG_HALTED                          "TISK. ZASTAVENA"
#define MSG_PLEASE_RESET                    "Provedte reset"
#define MSG_SHORT_DAY                       "d"
#define MSG_SHORT_HOUR                      "h"
#define MSG_SHORT_MINUTE                    "m"
#define MSG_HEATING                         "Zahrivani..."
#define MSG_HEATING_COMPLETE                "Zahrati hotovo."
#define MSG_BED_HEATING                     "Zahrivani podl."
#define MSG_BED_DONE                        "Podlozka hotova."
#define MSG_DELTA_CALIBRATE                 "Delta Kalibrace"
#define MSG_DELTA_CALIBRATE_X               "Kalibrovat X"
#define MSG_DELTA_CALIBRATE_Y               "Kalibrovat Y"
#define MSG_DELTA_CALIBRATE_Z               "Kalibrovat Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Kalibrovat Stred"
#define MSG_DELTA_AUTO_CALIBRATE            "Autokalibrace"
#define MSG_DELTA_HEIGHT_CALIBRATE          "Nast.vysku delty"
#define MSG_INFO_MENU                       "O tiskarne"
#define MSG_INFO_PRINTER_MENU               "Info o tiskarne"
#define MSG_3POINT_LEVELING                 "3-bodove rovnani"
#define MSG_LINEAR_LEVELING                 "Linearni rovnani"
#define MSG_BILINEAR_LEVELING               "Bilinearni rovnani"
#define MSG_UBL_LEVELING                    "Unified Bed Leveling"
#define MSG_MESH_LEVELING                   "Mrizkove rovnani"
#define MSG_INFO_STATS_MENU                 "Statistika"
#define MSG_INFO_BOARD_MENU                 "Info o desce"
#define MSG_INFO_THERMISTOR_MENU            "Termistory"
#define MSG_INFO_EXTRUDERS                  "Extrudery"
#define MSG_INFO_BAUDRATE                   "Rychlost"
#define MSG_INFO_PROTOCOL                   "Protokol"
#define MSG_CASE_LIGHT                      "Osvetleni"
#define MSG_CASE_LIGHT_BRIGHTNESS           "Jas svetla"

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Pocet tisku"
  #define MSG_INFO_COMPLETED_PRINTS         "Dokonceno"
  #define MSG_INFO_PRINT_TIME               "Celkovy cas"
  #define MSG_INFO_PRINT_LONGEST            "Nejdelsi tisk"
  #define MSG_INFO_PRINT_FILAMENT           "Celkem vytlaceno"
#else
  #define MSG_INFO_PRINT_COUNT              "Tisky"
  #define MSG_INFO_COMPLETED_PRINTS         "Hotovo"
  #define MSG_INFO_PRINT_TIME               "Cas"
  #define MSG_INFO_PRINT_LONGEST            "Nejdelsi"
  #define MSG_INFO_PRINT_FILAMENT           "Vytlaceno"
#endif

#define MSG_INFO_MIN_TEMP                   "Teplota min"
#define MSG_INFO_MAX_TEMP                   "Teplota max"
#define MSG_INFO_PSU                        "Nap. zdroj"
#define MSG_DRIVE_STRENGTH                  "Buzeni motoru"
#define MSG_DAC_PERCENT                     "Motor %"
#define MSG_DAC_EEPROM_WRITE                "Ulozit do EEPROM"

#define MSG_FILAMENT_CHANGE_HEADER          "PRINT PAUSED"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "RESUME OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Jeste vytlacit"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Obnovit tisk"
#define MSG_FILAMENT_CHANGE_MINTEMP         "Min. teplota je "
#define MSG_FILAMENT_CHANGE_NOZZLE          "  Tryska: "

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Cekejte prosim"
  #define MSG_FILAMENT_CHANGE_INIT_2          "na zahajeni"
  #define MSG_FILAMENT_CHANGE_INIT_3          "vymeny filamentu"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Cekejte prosim"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "na vysunuti"
  #define MSG_FILAMENT_CHANGE_UNLOAD_3        "filamentu"
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Vlozte filament"
  #define MSG_FILAMENT_CHANGE_INSERT_2        "a stisknete"
  #define MSG_FILAMENT_CHANGE_INSERT_3        "tlacitko..."
  #define MSG_FILAMENT_CHANGE_HEAT_1          "Kliknete pro"
  #define MSG_FILAMENT_CHANGE_HEAT_2          "nahrati trysky"
  #define MSG_FILAMENT_CHANGE_HEATING_1       "Cekejte prosim"
  #define MSG_FILAMENT_CHANGE_HEATING_2       "na nahrati tr."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Cekejte prosim"
  #define MSG_FILAMENT_CHANGE_LOAD_2          "na zavedeni"
  #define MSG_FILAMENT_CHANGE_LOAD_3          "filamentu"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Cekejte prosim"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "na vytlaceni"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_3       "filamentu"
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Cekejte prosim"
  #define MSG_FILAMENT_CHANGE_RESUME_2        "na pokracovani"
  #define MSG_FILAMENT_CHANGE_RESUME_3        "tisku"
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Cekejte..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Vysouvani..."
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Vlozte, kliknete"
  #define MSG_FILAMENT_CHANGE_HEATING_1       "Nahrivani..."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Zavadeni..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Vytlacovani..."
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Pokracovani..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_CZ_H
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
 * Czech
 * UTF-8 for Graphical Display
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 * Translated by Petr Zahradnik, Computer Laboratory
 * Blog and video blog Zahradnik se bavi
 * http://www.zahradniksebavi.cz
 *
 */
#ifndef LANGUAGE_CZ_UTF_H
#define LANGUAGE_CZ_UTF_H

#define MAPPER_C3C4C5_CZ
#define UTF8_MAPPER C3C4C5_CZ
#define DISPLAY_CHARSET_ISO10646_CZ

#define WELCOME_MSG                         MACHINE_NAME " připraven."
#define MSG_BACK                            "Zpět"
#define MSG_SD_INSERTED                     "Karta vložena"
#define MSG_SD_REMOVED                      "Karta vyjmuta"
#define MSG_LCD_ENDSTOPS                    "Endstopy" // max 8 znaku
#define MSG_MAIN                            "Hlavní nabídka"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Uvolnit motory"
#define MSG_DEBUG_MENU                      "Nabídka ladění"
#define MSG_PROGRESS_BAR_TEST               "Test uk. průběhu"
#define MSG_AUTO_HOME                       "Domovská pozice"
#define MSG_AUTO_HOME_X                     "Domů osa X"
#define MSG_AUTO_HOME_Y                     "Domů osa Y"
#define MSG_AUTO_HOME_Z                     "Domů osa Z"
#define MSG_LEVEL_BED_HOMING                "Měření podložky"
#define MSG_LEVEL_BED_WAITING               "Kliknutím spusťte"
#define MSG_LEVEL_BED_NEXT_POINT            "Další bod"
#define MSG_LEVEL_BED_DONE                  "Měření hotovo!"
#define MSG_Z_FADE_HEIGHT                   "Výška srovnávání"
#define MSG_SET_HOME_OFFSETS                "Nastavit ofsety"
#define MSG_HOME_OFFSETS_APPLIED            "Ofsety nastaveny"
#define MSG_SET_ORIGIN                      "Nastavit počátek"
#define MSG_PREHEAT_1                       "Zahřát PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " vše"
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 " hotend"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " podlož"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " nast"
#define MSG_PREHEAT_2                       "Zahřát ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " vše"
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 " hotend"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " podlož"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " nast"
#define MSG_COOLDOWN                        "Zchladit"
#define MSG_SWITCH_PS_ON                    "Zapnout napájení"
#define MSG_SWITCH_PS_OFF                   "Vypnout napájení"
#define MSG_EXTRUDE                         "Vytlačit (extr.)"
#define MSG_RETRACT                         "Zatlačit (retr.)"
#define MSG_MOVE_AXIS                       "Posunout osy"
#define MSG_BED_LEVELING                    "Vyrovnat podložku"
#define MSG_LEVEL_BED                       "Vyrovnat podložku"
#define MSG_EDITING_STOPPED                 "Konec úprav sítě"

#define MSG_UBL_DOING_G29                   "Provádím G29"
#define MSG_UBL_UNHOMED                     "Přejeďte domů"
#define MSG_UBL_TOOLS                       "UBL nástroje"
#define MSG_UBL_LEVEL_BED                   "Unified Bed Leveling"
#define MSG_UBL_MANUAL_MESH                 "Manuální síť bodů"
#define MSG_UBL_BC_INSERT                   "Vložte kartu, změřte"
#define MSG_UBL_BC_INSERT2                  "Změřte"
#define MSG_UBL_BC_REMOVE                   "Odstraňte a změřte"
#define MSG_UBL_MOVING_TO_NEXT              "Přesun na další"
#define MSG_UBL_ACTIVATE_MESH               "Aktivovat UBL"
#define MSG_UBL_DEACTIVATE_MESH             "Deaktivovat UBL"
#define MSG_UBL_SET_BED_TEMP                "Teplota podložky"
#define MSG_UBL_CUSTOM_BED_TEMP             MSG_UBL_SET_BED_TEMP
#define MSG_UBL_SET_HOTEND_TEMP             "Teplota hotendu"
#define MSG_UBL_CUSTOM_HOTEND_TEMP          MSG_UBL_SET_HOTEND_TEMP
#define MSG_UBL_EDIT_CUSTOM_MESH            "Upravit vlastní síť"
#define MSG_UBL_FINE_TUNE_MESH              "Doladit síť bodů"
#define MSG_UBL_DONE_EDITING_MESH           "Konec úprav sítě"
#define MSG_UBL_BUILD_CUSTOM_MESH           "Vlastní síť"
#define MSG_UBL_BUILD_MESH_MENU             "Vytvořit síť"
#define MSG_UBL_BUILD_PLA_MESH              "Síť bodu PLA"
#define MSG_UBL_BUILD_ABS_MESH              "Síť bodu ABS"
#define MSG_UBL_BUILD_COLD_MESH             "Studená síť bodu"
#define MSG_UBL_MESH_HEIGHT_ADJUST          "Upravit výšku sítě"
#define MSG_UBL_MESH_HEIGHT_AMOUNT          "Výška"
#define MSG_UBL_VALIDATE_MESH_MENU          "Zkontrolovat síť"
#define MSG_UBL_VALIDATE_PLA_MESH           "Kontrola sítě PLA"
#define MSG_UBL_VALIDATE_ABS_MESH           "Kontrola sítě ABS"
#define MSG_UBL_VALIDATE_CUSTOM_MESH        "Kontrola vlast. sítě"
#define MSG_UBL_CONTINUE_MESH               "Pokračovat v síťi"
#define MSG_UBL_MESH_LEVELING               "Síťové rovnání"
#define MSG_UBL_3POINT_MESH_LEVELING        "3-bodove rovnání"
#define MSG_UBL_GRID_MESH_LEVELING          "Mrizkove rovnání"
#define MSG_UBL_MESH_LEVEL                  "Srovnat podložku"
#define MSG_UBL_SIDE_POINTS                 "Postranní body"
#define MSG_UBL_MAP_TYPE                    "Typ sítě bodu"
#define MSG_UBL_OUTPUT_MAP                  "Exportovat síť"
#define MSG_UBL_OUTPUT_MAP_HOST             "Exportovat do PC"
#define MSG_UBL_OUTPUT_MAP_CSV              "Exportovat do CSV"
#define MSG_UBL_OUTPUT_MAP_BACKUP           "Záloha do PC"
#define MSG_UBL_INFO_UBL                    "Info o UBL do PC"
#define MSG_UBL_EDIT_MESH_MENU              "Upravit síť bodů"
#define MSG_UBL_FILLIN_AMOUNT               "Hustota mřížky"
#define MSG_UBL_MANUAL_FILLIN               "Ruční hustota"
#define MSG_UBL_SMART_FILLIN                "Chytrá hustota"
#define MSG_UBL_FILLIN_MESH                 "Zaplnit mřížku"
#define MSG_UBL_INVALIDATE_ALL              "Zrušit všechno"
#define MSG_UBL_INVALIDATE_CLOSEST          "Zrušit poslední"
#define MSG_UBL_FINE_TUNE_ALL               "Upravit všechny"
#define MSG_UBL_FINE_TUNE_CLOSEST           "Upravit poslední"
#define MSG_UBL_STORAGE_MESH_MENU           "Uložiště sítí"
#define MSG_UBL_STORAGE_SLOT                "Paměťový slot"
#define MSG_UBL_LOAD_MESH                   "Načíst síť bodů"
#define MSG_UBL_SAVE_MESH                   "Uložit síť bodů"
#define MSG_UBL_SAVE_ERROR                  "Err: Uložit UBL"
#define MSG_UBL_RESTORE_ERROR               "Err: Obnovit UBL"
#define MSG_UBL_Z_OFFSET_STOPPED            "Konec Z-Offsetu"
#define MSG_UBL_STEP_BY_STEP_MENU           "UBL Postupně"

#define MSG_USER_MENU                       "Vlastní příkazy"
#define MSG_MOVING                          "Posouvání..."
#define MSG_FREE_XY                         "Uvolnit XY"
#define MSG_MOVE_X                          "Posunout X"
#define MSG_MOVE_Y                          "Posunout Y"
#define MSG_MOVE_Z                          "Posunout Z"
#define MSG_MOVE_E                          "Extrudér"
#define MSG_MOVE_01MM                       "Posunout o 0,1mm"
#define MSG_MOVE_1MM                        "Posunout o 1mm"
#define MSG_MOVE_10MM                       "Posunout o 10mm"
#define MSG_SPEED                           "Rychlost"
#define MSG_BED_Z                           "Výška podl."
#define MSG_NOZZLE                          "Tryska"
#define MSG_BED                             "Podložka"
#define MSG_FAN_SPEED                       "Rychlost vent."
#define MSG_FLOW                            "Průtok"
#define MSG_CONTROL                         "Ovládaní"
#define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Fakt"
#define MSG_AUTOTEMP                        "Autoteplota"
#define MSG_ON                              "Zap"
#define MSG_OFF                             "Vyp"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Vybrat"
#define MSG_ACC                             "Zrychl"
#define MSG_JERK                            "Jerk"
#define MSG_VX_JERK                         "Vx-jerk"
#define MSG_VY_JERK                         "Vy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VELOCITY                        "Rychlost"
#define MSG_VMAX                            "Vmax "
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_ACCELERATION                    "Akcelerace"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retrakt"
#define MSG_A_TRAVEL                        "A-přejezd"
#define MSG_STEPS_PER_MM                    "Kroků/mm"
#define MSG_XSTEPS                          "Xkroků/mm"
#define MSG_YSTEPS                          "Ykroků/mm"
#define MSG_ZSTEPS                          "Zkroků/mm"
#define MSG_ESTEPS                          "Ekroků/mm"
#define MSG_E1STEPS                         "E1kroků/mm"
#define MSG_E2STEPS                         "E2kroků/mm"
#define MSG_E3STEPS                         "E3kroků/mm"
#define MSG_E4STEPS                         "E4kroků/mm"
#define MSG_E5STEPS                         "E5kroků/mm"
#define MSG_TEMPERATURE                     "Teplota"
#define MSG_MOTION                          "Pohyb"
#define MSG_FILAMENT                        "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E na mm3"
#define MSG_FILAMENT_DIAM                   "Fil. Prum."
#define MSG_ADVANCE_K                       "K pro posun"
#define MSG_CONTRAST                        "Kontrast LCD"
#define MSG_STORE_EEPROM                    "Uložit nastavení"
#define MSG_LOAD_EEPROM                     "Načíst nastavení"
#define MSG_RESTORE_FAILSAFE                "Obnovit výchozí"
#define MSG_INIT_EEPROM                     "Inic. EEPROM"
#define MSG_REFRESH                         "Obnovit"
#define MSG_WATCH                           "Info obrazovka"
#define MSG_PREPARE                         "Připrava tisku"
#define MSG_TUNE                            "Doladění tisku"
#define MSG_PAUSE_PRINT                     "Pozastavit tisk"
#define MSG_RESUME_PRINT                    "Obnovit tisk"
#define MSG_STOP_PRINT                      "Zastavit tisk"
#define MSG_CARD_MENU                       "Tisknout z SD"
#define MSG_NO_CARD                         "Žádná SD karta"
#define MSG_DWELL                           "Uspáno..."
#define MSG_USERWAIT                        "Čekání na uživ..."
#define MSG_PRINT_PAUSED                    "Tisk pozastaven"
#define MSG_RESUMING                        "Obnovování tisku"
#define MSG_PRINT_ABORTED                   "Tisk zrušen"
#define MSG_NO_MOVE                         "Žádný pohyb."
#define MSG_KILLED                          "PŘERUSENO. "
#define MSG_STOPPED                         "ZASTAVENO. "
#define MSG_CONTROL_RETRACT                 "Retrakt mm"
#define MSG_CONTROL_RETRACT_SWAP            "Výměna Re.mm"
#define MSG_CONTROL_RETRACTF                "Retraktovat  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Zvednuti Z mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Vyměnit filament"
#define MSG_INIT_SDCARD                     "Načíst SD kartu"
#define MSG_CNG_SDCARD                      "Vyměnit SD kartu"
#define MSG_ZPROBE_OUT                      "Sonda Z mimo podl"
#define MSG_BLTOUCH                         "BLTouch"
#define MSG_BLTOUCH_SELFTEST                "BLTouch Self-Test"
#define MSG_BLTOUCH_RESET                   "BLTouch Reset"
#define MSG_BLTOUCH_DEPLOY                  "BLTouch Vysunout"
#define MSG_BLTOUCH_STOW                    "BLTouch Zasunout"
#define MSG_HOME                            "Domů"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "první"
#define MSG_ZPROBE_ZOFFSET                  "Z ofset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"
#define MSG_HEATING_FAILED_LCD              "Chyba zahřívání"
#define MSG_ERR_REDUNDANT_TEMP              "REDUND. TEPLOTA"
#define MSG_THERMAL_RUNAWAY                 "TEPLOTNÍ SKOK"
#define MSG_ERR_MAXTEMP                     "VYSOKÁ TEPLOTA"
#define MSG_ERR_MINTEMP                     "NÍZKA TEPLOTA"
#define MSG_ERR_MAXTEMP_BED                 "VYS. TEPL. PODL."
#define MSG_ERR_MINTEMP_BED                 "NÍZ. TEPL. PODL."
#define MSG_ERR_Z_HOMING                    "G28 Z ZAKÁZÁNO"
#define MSG_HALTED                          "TISK. ZASTAVENA"
#define MSG_PLEASE_RESET                    "Proveďte reset"
#define MSG_SHORT_DAY                       "d"
#define MSG_SHORT_HOUR                      "h"
#define MSG_SHORT_MINUTE                    "m"
#define MSG_HEATING                         "Zahřívání..."
#define MSG_HEATING_COMPLETE                "Zahřáti hotovo."
#define MSG_BED_HEATING                     "Zahřívání podl."
#define MSG_BED_DONE                        "Podložka hotova."
#define MSG_DELTA_CALIBRATE                 "Delta Kalibrace"
#define MSG_DELTA_CALIBRATE_X               "Kalibrovat X"
#define MSG_DELTA_CALIBRATE_Y               "Kalibrovat Y"
#define MSG_DELTA_CALIBRATE_Z               "Kalibrovat Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Kalibrovat Střed"
#define MSG_DELTA_AUTO_CALIBRATE            "Autokalibrace"
#define MSG_DELTA_HEIGHT_CALIBRATE          "Nast.výšku delty"
#define MSG_INFO_MENU                       "O tiskárně"
#define MSG_INFO_PRINTER_MENU               "Info o tiskárně"
#define MSG_3POINT_LEVELING                 "3-bodové rovnání"
#define MSG_LINEAR_LEVELING                 "Lineárni rovnání"
#define MSG_BILINEAR_LEVELING               "Bilineární rovnání"
#define MSG_UBL_LEVELING                    "Unified Bed Leveling"
#define MSG_MESH_LEVELING                   "Mřížkové rovnání"
#define MSG_INFO_STATS_MENU                 "Statistika"
#define MSG_INFO_BOARD_MENU                 "Info o desce"
#define MSG_INFO_THERMISTOR_MENU            "Termistory"
#define MSG_INFO_EXTRUDERS                  "Extrudéry"
#define MSG_INFO_BAUDRATE                   "Rychlost"
#define MSG_INFO_PROTOCOL                   "Protokol"
#define MSG_CASE_LIGHT                      "Osvětlení"
#define MSG_CASE_LIGHT_BRIGHTNESS           "Jas světla"

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Počet tisků"
  #define MSG_INFO_COMPLETED_PRINTS         "Dokončeno"
  #define MSG_INFO_PRINT_TIME               "Celkový čas"
  #define MSG_INFO_PRINT_LONGEST            "Nejdelší tisk"
  #define MSG_INFO_PRINT_FILAMENT           "Celkem vytlačeno"
#else
  #define MSG_INFO_PRINT_COUNT              "Tisky"
  #define MSG_INFO_COMPLETED_PRINTS         "Hotovo"
  #define MSG_INFO_PRINT_TIME               "Čas"
  #define MSG_INFO_PRINT_LONGEST            "Nejdelší"
  #define MSG_INFO_PRINT_FILAMENT           "Vytlačeno"
#endif

#define MSG_INFO_MIN_TEMP                   "Teplota min"
#define MSG_INFO_MAX_TEMP                   "Teplota max"
#define MSG_INFO_PSU                        "Nap. zdroj"
#define MSG_DRIVE_STRENGTH                  "Buzení motorů"
#define MSG_DAC_PERCENT                     "Motor %"
#define MSG_DAC_EEPROM_WRITE                "Uložit do EEPROM"

#define MSG_FILAMENT_CHANGE_HEADER          "PRINT PAUSED"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "RESUME OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Ještě vytlačit"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Obnovit tisk"
#define MSG_FILAMENT_CHANGE_MINTEMP         "Min. teplota je "
#define MSG_FILAMENT_CHANGE_NOZZLE          "  Tryska: "

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Čekejte prosím"
  #define MSG_FILAMENT_CHANGE_INIT_2          "na zahájení"
  #define MSG_FILAMENT_CHANGE_INIT_3          "výměny filamentu"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Čekejte prosím"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "na vysunuti"
  #define MSG_FILAMENT_CHANGE_UNLOAD_3        "filamentu"
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Vložte filament"
  #define MSG_FILAMENT_CHANGE_INSERT_2        "a stiskněte"
  #define MSG_FILAMENT_CHANGE_INSERT_3        "tlačítko..."
  #define MSG_FILAMENT_CHANGE_HEAT_1          "Klikněte pro"
  #define MSG_FILAMENT_CHANGE_HEAT_2          "nahřátí trysky"
  #define MSG_FILAMENT_CHANGE_HEATING_1       "Čekejte prosím"
  #define MSG_FILAMENT_CHANGE_HEATING_2       "na nahřátí tr."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Čekejte prosím"
  #define MSG_FILAMENT_CHANGE_LOAD_2          "na zavedení"
  #define MSG_FILAMENT_CHANGE_LOAD_3          "filamentu"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Čekejte prosím"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "na vytlačení"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_3       "filamentu"
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Čekejte prosím"
  #define MSG_FILAMENT_CHANGE_RESUME_2        "na pokračování"
  #define MSG_FILAMENT_CHANGE_RESUME_3        "tisku"
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Čekejte..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Vysouvání..."
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Vložte, klikněte"
  #define MSG_FILAMENT_CHANGE_HEATING_1       "Nahřívání..."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Zavádění..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Vytlačování..."
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Pokračování..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_CZ_UTF_H
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
 * Danish
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_DA_H
#define LANGUAGE_DA_H

#define MAPPER_C2C3
#define UTF8_MAPPER C2C3
#define DISPLAY_CHARSET_ISO10646_1

#define WELCOME_MSG                         MACHINE_NAME " er klar"
#define MSG_SD_INSERTED                     "Kort isat"
#define MSG_SD_REMOVED                      "Kort fjernet"
#define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters
#define MSG_MAIN                            "Menu"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Slå alle steppere fra"
#define MSG_AUTO_HOME                       "Auto Home" // G28
#define MSG_AUTO_HOME_X                     "Home X"
#define MSG_AUTO_HOME_Y                     "Home Y"
#define MSG_AUTO_HOME_Z                     "Home Z"
#define MSG_LEVEL_BED_HOMING                "Homing XYZ"
#define MSG_LEVEL_BED_WAITING               "Klik når du er klar"
#define MSG_LEVEL_BED_NEXT_POINT            "Næste punkt"
#define MSG_LEVEL_BED_DONE                  "Bed level er færdig!"
#define MSG_SET_HOME_OFFSETS                "Sæt forsk. af home"
#define MSG_HOME_OFFSETS_APPLIED            "Forsk. er nu aktiv"
#define MSG_SET_ORIGIN                      "Sæt origin"
#define MSG_PREHEAT_1                       "Forvarm PLA"
#define MSG_PREHEAT_1_N                     "Forvarm PLA "
#define MSG_PREHEAT_1_ALL                   "Forvarm PLA Alle"
#define MSG_PREHEAT_1_BEDONLY               "Forvarm PLA Bed"
#define MSG_PREHEAT_1_SETTINGS              "Forvarm PLA conf"
#define MSG_PREHEAT_2                       "Forvarm ABS"
#define MSG_PREHEAT_2_N                     "Forvarm ABS "
#define MSG_PREHEAT_2_ALL                   "Forvarm ABS Alle"
#define MSG_PREHEAT_2_BEDONLY               "Forvarm ABS Bed"
#define MSG_PREHEAT_2_SETTINGS              "Forvarm ABS conf"
#define MSG_COOLDOWN                        "Afkøl"
#define MSG_SWITCH_PS_ON                    "Slå strøm til"
#define MSG_SWITCH_PS_OFF                   "Slå strøm fra"
#define MSG_EXTRUDE                         "Extruder"
#define MSG_RETRACT                         "Retract"
#define MSG_MOVE_AXIS                       "Flyt akser"
#define MSG_BED_LEVELING                    "Juster bed"
#define MSG_LEVEL_BED                       "Juster bed"
#define MSG_MOVE_X                          "Flyt X"
#define MSG_MOVE_Y                          "Flyt Y"
#define MSG_MOVE_Z                          "Flyt Z"
#define MSG_MOVE_E                          "Extruder"
#define MSG_MOVE_01MM                       "Flyt 0.1mm"
#define MSG_MOVE_1MM                        "Flyt 1mm"
#define MSG_MOVE_10MM                       "Flyt 10mm"
#define MSG_SPEED                           "Hastighed"
#define MSG_BED_Z                           "Plade Z"
#define MSG_NOZZLE                          "Dyse"

#define MSG_BED                             "Plade"
#define MSG_FAN_SPEED                       "Blæser hastighed"
#define MSG_FLOW                            "Flow"
#define MSG_CONTROL                         "Kontrol"
#define MSG_MIN                             " \002 Min"
#define MSG_MAX                             " \002 Max"
#define MSG_FACTOR                          " \002 Fact"
#define MSG_AUTOTEMP                        "Autotemp"
#define MSG_ON                              "Til "
#define MSG_OFF                             "Fra"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Vælg"
#define MSG_ACC                             "Accel"
#define MSG_JERK                            "Jerk"
#define MSG_VX_JERK                         "Vx-jerk"
#define MSG_VY_JERK                         "Vy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract"
#define MSG_A_TRAVEL                        "A-rejse"
#define MSG_STEPS_PER_MM                    "Steps/mm"
#define MSG_XSTEPS                          "Xsteps/mm"
#define MSG_YSTEPS                          "Ysteps/mm"
#define MSG_ZSTEPS                          "Zsteps/mm"
#define MSG_ESTEPS                          "Esteps/mm"
#define MSG_E1STEPS                         "E1steps/mm"
#define MSG_E2STEPS                         "E2steps/mm"
#define MSG_E3STEPS                         "E3steps/mm"
#define MSG_E4STEPS                         "E4steps/mm"
#define MSG_E5STEPS                         "E5steps/mm"
#define MSG_TEMPERATURE                     "Temperatur"
#define MSG_MOTION                          "Bevægelse"
#define MSG_FILAMENT                        "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E i mm3"
#define MSG_FILAMENT_DIAM                   "Fil. Dia."
#define MSG_CONTRAST                        "LCD kontrast"
#define MSG_STORE_EEPROM                    "Gem i EEPROM"
#define MSG_LOAD_EEPROM                     "Hent fra EEPROM"
#define MSG_RESTORE_FAILSAFE                "Gendan failsafe"
#define MSG_REFRESH                         "Genopfrisk"
#define MSG_WATCH                           "Info skærm"
#define MSG_PREPARE                         "Forbered"
#define MSG_TUNE                            "Tune"
#define MSG_PAUSE_PRINT                     "Pause printet"
#define MSG_RESUME_PRINT                    "Forsæt printet"
#define MSG_STOP_PRINT                      "Stop printet"
#define MSG_CARD_MENU                       "Print fra SD"
#define MSG_NO_CARD                         "Intet SD kort"
#define MSG_DWELL                           "Dvale..."
#define MSG_USERWAIT                        "Venter på bruger..."
#define MSG_RESUMING                        "Forsætter printet"
#define MSG_PRINT_ABORTED                   "Print annulleret"
#define MSG_NO_MOVE                         "Ingen bevægelse."
#define MSG_KILLED                          "DRÆBT. "
#define MSG_STOPPED                         "STOPPET. "
#define MSG_CONTROL_RETRACT                 "Tilbagetræk mm"
#define MSG_CONTROL_RETRACT_SWAP            "Skift Re.mm"
#define MSG_CONTROL_RETRACTF                "Tilbagetræk V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Skift UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Skift filament"
#define MSG_INIT_SDCARD                     "Init. SD card"
#define MSG_CNG_SDCARD                      "Skift SD kort"
#define MSG_ZPROBE_OUT                      "Probe udenfor plade"
#define MSG_BLTOUCH_SELFTEST                "BLTouch Selv-Test"
#define MSG_BLTOUCH_RESET                   "Reset BLTouch"
#define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "først"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"
#define MSG_HEATING_FAILED_LCD              "Opvarmning fejlet"
#define MSG_ERR_REDUNDANT_TEMP              "Fejl: reserve temp"
#define MSG_THERMAL_RUNAWAY                 "Temp løber løbsk"
#define MSG_ERR_MAXTEMP                     "Fejl: Maks temp"
#define MSG_ERR_MINTEMP                     "Fejl: Min temp"
#define MSG_ERR_MAXTEMP_BED                 "Fejl: Maks Plade temp"
#define MSG_ERR_MINTEMP_BED                 "Fejl: Min Plade temp"
#define MSG_ERR_Z_HOMING                    "G28 Z Forbudt"
#define MSG_HALTED                          "PRINTER STOPPET"
#define MSG_PLEASE_RESET                    "Reset Venligst"
#define MSG_SHORT_DAY                       "d" // Kun et bogstav
#define MSG_SHORT_HOUR                      "h" // Kun et bogstav
#define MSG_SHORT_MINUTE                    "m" // Kun et bogstav
#define MSG_HEATING                         "Opvarmer..."
#define MSG_HEATING_COMPLETE                "Opvarmet"
#define MSG_BED_HEATING                     "Opvarmer plade"
#define MSG_BED_DONE                        "Plade opvarmet"
#define MSG_DELTA_CALIBRATE                 "Delta Kalibrering"
#define MSG_DELTA_CALIBRATE_X               "Kalibrer X"
#define MSG_DELTA_CALIBRATE_Y               "Kalibrer Y"
#define MSG_DELTA_CALIBRATE_Z               "Kalibrer Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Kalibrerings Center"

#define MSG_INFO_MENU                       "Om Printer"
#define MSG_INFO_PRINTER_MENU               "Printer Info"
#define MSG_INFO_STATS_MENU                 "Printer Stats"
#define MSG_INFO_BOARD_MENU                 "Kort Info"
#define MSG_INFO_THERMISTOR_MENU            "Thermistors"
#define MSG_INFO_EXTRUDERS                  "Extruders"
#define MSG_INFO_BAUDRATE                   "Baud"
#define MSG_INFO_PROTOCOL                   "Protocol"

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Ant. Prints"
  #define MSG_INFO_COMPLETED_PRINTS         "Færdige"
  #define MSG_INFO_PRINT_TIME               "Total print tid"
  #define MSG_INFO_PRINT_LONGEST            "Længste print"
  #define MSG_INFO_PRINT_FILAMENT           "Total Extruderet"
#else
  #define MSG_INFO_PRINT_COUNT              "Prints"
  #define MSG_INFO_COMPLETED_PRINTS         "Færdige"
  #define MSG_INFO_PRINT_TIME               "Total"
  #define MSG_INFO_PRINT_LONGEST            "Længste"
  #define MSG_INFO_PRINT_FILAMENT           "Extruderet"
#endif

#define MSG_INFO_MIN_TEMP                   "Min Temp"
#define MSG_INFO_MAX_TEMP                   "Max Temp"
#define MSG_INFO_PSU                        "Strømfors."

#define MSG_DRIVE_STRENGTH                  "Driv Styrke"
#define MSG_DAC_PERCENT                     "Driv %"
#define MSG_DAC_EEPROM_WRITE                "DAC EEPROM Skriv"

#define MSG_FILAMENT_CHANGE_HEADER          "PRINT PAUSED"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "RESUME OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Extruder mere"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Forsæt print"

#if LCD_HEIGHT >= 4
  #define MSG_FILAMENT_CHANGE_INIT_1          "Vent på start"
  #define MSG_FILAMENT_CHANGE_INIT_2          "af filament"
  #define MSG_FILAMENT_CHANGE_INIT_3          "skift"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Vent på"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "filament udskyd."
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Indsæt filament"
  #define MSG_FILAMENT_CHANGE_INSERT_2        "og tryk på knap"
  #define MSG_FILAMENT_CHANGE_INSERT_3        "for at fortsætte..."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Vent på"
  #define MSG_FILAMENT_CHANGE_LOAD_2          "filament indtag"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Vent på"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "filament extrudering"
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Vent på at print"
  #define MSG_FILAMENT_CHANGE_RESUME_2        "fortsætter"
#else // LCD_HEIGHT < 4
  #define MSG_FILAMENT_CHANGE_INIT_1          "Vent venligst..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Udskyder..."
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Indsæt og klik"
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Indtager..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Extrudere..."
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Fortsætter..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_DA_H
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
 * German
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_DE_H
#define LANGUAGE_DE_H

#define MAPPER_C2C3
#define UTF8_MAPPER C2C3
#define DISPLAY_CHARSET_ISO10646_1

// Germans special symbols are: ÄÖÜäöüß³

#define WELCOME_MSG                         MACHINE_NAME " bereit"
#define MSG_BACK                            "Zurück"
#define MSG_SD_INSERTED                     "SD-Karte erkannt"
#define MSG_SD_REMOVED                      "SD-Karte entfernt"
#define MSG_LCD_ENDSTOPS                    "Endstopp" // Max length 8 characters
#define MSG_MAIN                            "Hauptmenü"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Motoren deaktivieren" // M84
#define MSG_DEBUG_MENU                      "Debug Menu"
#define MSG_PROGRESS_BAR_TEST               "Fortschrittsb. Test"
#define MSG_AUTO_HOME                       "Home" // G28
#define MSG_AUTO_HOME_X                     "Home X"
#define MSG_AUTO_HOME_Y                     "Home Y"
#define MSG_AUTO_HOME_Z                     "Home Z"
#define MSG_LEVEL_BED_HOMING                "Homing XYZ"
#define MSG_LEVEL_BED_WAITING               "Klick für Start"
#define MSG_LEVEL_BED_NEXT_POINT            "Nächste Koordinate"
#define MSG_LEVEL_BED_DONE                  "Fertig"
#define MSG_Z_FADE_HEIGHT                   "Ausblendhöhe"
#define MSG_SET_HOME_OFFSETS                "Setze Homeversatz"
#define MSG_HOME_OFFSETS_APPLIED            "Homeversatz aktiv"
#define MSG_SET_ORIGIN                      "Setze Nullpunkt" //"G92 X0 Y0 Z0" commented out in ultralcd.cpp
#define MSG_PREHEAT_1                       "Vorwärmen PLA"
#define MSG_PREHEAT_1_N                     "Vorwärmen PLA "
#define MSG_PREHEAT_1_ALL                   "Vorw. PLA Alle"
#define MSG_PREHEAT_1_END                   "Vorw. PLA Extr."
#define MSG_PREHEAT_1_BEDONLY               "Vorw. PLA Bett"
#define MSG_PREHEAT_1_SETTINGS              "Vorw. PLA Einst."
#define MSG_PREHEAT_2                       "Vorwärmen ABS"
#define MSG_PREHEAT_2_N                     "Vorwärmen ABS "
#define MSG_PREHEAT_2_ALL                   "Vorw. ABS Alle"
#define MSG_PREHEAT_2_END                   "Vorw. ABS Extr."
#define MSG_PREHEAT_2_BEDONLY               "Vorw. ABS Bett"
#define MSG_PREHEAT_2_SETTINGS              "Vorw. ABS Einst."
#define MSG_COOLDOWN                        "Abkühlen"
#define MSG_SWITCH_PS_ON                    "Netzteil ein"
#define MSG_SWITCH_PS_OFF                   "Netzteil aus"
#define MSG_EXTRUDE                         "Extrudieren"
#define MSG_RETRACT                         "Retract"
#define MSG_MOVE_AXIS                       "Bewegen"
#define MSG_BED_LEVELING                    "Bett Nivellierung"
#define MSG_LEVEL_BED                       "Bett nivellieren"
#define MSG_LEVEL_CORNERS                   "Ecken nivellieren"
#define MSG_NEXT_CORNER                     "Nächste Ecke"
#define MSG_EDITING_STOPPED                 "Netzbearb. angeh."
#define MSG_USER_MENU                       "Benutzer Menü"
#define MSG_MOVING                          "In Bewegung..."
#define MSG_FREE_XY                         "Abstand XY"
#define MSG_MOVE_X                          "X"
#define MSG_MOVE_Y                          "Y"
#define MSG_MOVE_Z                          "Z"
#define MSG_MOVE_E                          "Extruder "
#define MSG_MOVE_01MM                       " 0,1 mm"
#define MSG_MOVE_1MM                        " 1,0 mm"
#define MSG_MOVE_10MM                       "10,0 mm"
#define MSG_SPEED                           "Geschw."
#define MSG_BED_Z                           "Bett Z"
#define MSG_NOZZLE                          "Düse"
#define MSG_BED                             "Bett"
#define MSG_FAN_SPEED                       "Lüfter"
#define MSG_FLOW                            "Flussrate"
#define MSG_CONTROL                         "Einstellungen"
#define MSG_MIN                             LCD_STR_THERMOMETER " min"
#define MSG_MAX                             LCD_STR_THERMOMETER " max"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Faktor"
#define MSG_AUTOTEMP                        "AutoTemp"
#define MSG_ON                              "Ein"
#define MSG_OFF                             "Aus"
#define MSG_PID_P                           "PID P"
#define MSG_PID_I                           "PID I"
#define MSG_PID_D                           "PID D"
#define MSG_PID_C                           "PID C"
#define MSG_SELECT                          "Auswählen"
#define MSG_ACC                             "A"
#define MSG_JERK                            "Jerk"
#define MSG_VX_JERK                         "V X Jerk"
#define MSG_VY_JERK                         "V Y Jerk"
#define MSG_VZ_JERK                         "V Z Jerk"
#define MSG_VE_JERK                         "V E Jerk"
#define MSG_VELOCITY                        "Geschwindigkeit"
#define MSG_VMAX                            "V max " // space by purpose
#define MSG_VMIN                            "V min"
#define MSG_VTRAV_MIN                       "V min Leerfahrt"
#define MSG_ACCELERATION                    "Beschleunigung"
#define MSG_AMAX                            "A max " // space by purpose
#define MSG_A_RETRACT                       "A Retract"
#define MSG_A_TRAVEL                        "A Leerfahrt"
#define MSG_STEPS_PER_MM                    "Steps/mm"
#define MSG_XSTEPS                          "X Steps/mm"
#define MSG_YSTEPS                          "Y Steps/mm"
#define MSG_ZSTEPS                          "Z Steps/mm"
#define MSG_ESTEPS                          "E Steps/mm"
#define MSG_E1STEPS                         "E1 Steps/mm"
#define MSG_E2STEPS                         "E2 Steps/mm"
#define MSG_E3STEPS                         "E3 Steps/mm"
#define MSG_E4STEPS                         "E4 Steps/mm"
#define MSG_E5STEPS                         "E5 Steps/mm"
#define MSG_TEMPERATURE                     "Temperatur"
#define MSG_MOTION                          "Bewegung"
#define MSG_FILAMENT                        "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E in mm³"
#define MSG_FILAMENT_DIAM                   "D Fil."
#define MSG_ADVANCE_K                       "Advance Faktor"
#define MSG_CONTRAST                        "LCD Kontrast"
#define MSG_STORE_EEPROM                    "Konfig. speichern"
#define MSG_LOAD_EEPROM                     "Konfig. laden"
#define MSG_RESTORE_FAILSAFE                "Standardwerte laden"
#define MSG_INIT_EEPROM                     "Werkseinstellungen"
#define MSG_REFRESH                         "Aktualisieren"
#define MSG_WATCH                           "Info"
#define MSG_PREPARE                         "Vorbereitung"
#define MSG_TUNE                            "Justierung"
#define MSG_PAUSE_PRINT                     "SD-Druck Pause"
#define MSG_RESUME_PRINT                    "SD-Druck Fortsetzung"
#define MSG_STOP_PRINT                      "SD-Druck Abbruch"
#define MSG_CARD_MENU                       "SD-Karte"
#define MSG_NO_CARD                         "Keine SD-Karte"
#define MSG_DWELL                           "Warten..."
#define MSG_USERWAIT                        "Warte auf Nutzer"
#define MSG_PRINT_PAUSED                    "Druck pausiert"
#define MSG_RESUMING                        "Druckfortsetzung"
#define MSG_PRINT_ABORTED                   "Druck abgebrochen"
#define MSG_NO_MOVE                         "Motoren eingeschaltet"
#define MSG_KILLED                          "ABGEBROCHEN"
#define MSG_STOPPED                         "ANGEHALTEN"
#define MSG_CONTROL_RETRACT                 "Retract mm"
#define MSG_CONTROL_RETRACT_SWAP            "Wechs. Retract mm"
#define MSG_CONTROL_RETRACTF                "Retract  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Z-Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Wechs. UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "Autom. Retract"
#define MSG_FILAMENTCHANGE                  "Filament wechseln"
#define MSG_INIT_SDCARD                     "SD-Karte erkennen"  // Manually initialize the SD-card via user interface
#define MSG_CNG_SDCARD                      "SD-Karte getauscht" // SD-card changed by user. For machines with no autocarddetect. Both send "M21"
#define MSG_ZPROBE_OUT                      "Sensor ausserhalb"
#define MSG_BLTOUCH                         "BLTouch"
#define MSG_BLTOUCH_SELFTEST                "BLTouch Test"
#define MSG_BLTOUCH_RESET                   "BLTouch Reset"
#define MSG_BLTOUCH_DEPLOY                  "BLTouch ausfahren"
#define MSG_BLTOUCH_STOW                    "BLTouch einfahren"
#define MSG_HOME                            "Vorher"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "homen"
#define MSG_ZPROBE_ZOFFSET                  "Z Versatz"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstopp-Abbr."
#define MSG_HEATING_FAILED_LCD              "HEIZEN FEHLGESCHLAGEN"
#define MSG_ERR_REDUNDANT_TEMP              "REDUND. TEMPERATURABWEICHUNG"
#define MSG_THERMAL_RUNAWAY                 LCD_STR_THERMOMETER " NICHT ERREICHT"
#define MSG_ERR_MAXTEMP                     LCD_STR_THERMOMETER " ÜBERSCHRITTEN"
#define MSG_ERR_MINTEMP                     LCD_STR_THERMOMETER " UNTERSCHRITTEN"
#define MSG_ERR_MAXTEMP_BED                 "BETT " LCD_STR_THERMOMETER " ÜBERSCHRITTEN"
#define MSG_ERR_MINTEMP_BED                 "BETT " LCD_STR_THERMOMETER " UNTERSCHRITTEN"
#define MSG_ERR_Z_HOMING                    "G28 Z verboten"
#define MSG_HALTED                          "DRUCKER STOPP"
#define MSG_PLEASE_RESET                    "Bitte Resetten"
#define MSG_SHORT_DAY                       "t" // One character only
#define MSG_SHORT_HOUR                      "h" // One character only
#define MSG_SHORT_MINUTE                    "m" // One character only
#define MSG_HEATING                         "Extr. heizt..."
#define MSG_HEATING_COMPLETE                "Extr. aufgeheizt"
#define MSG_BED_HEATING                     "Bett heizt..."
#define MSG_BED_DONE                        "Bett aufgeheizt"
#define MSG_DELTA_CALIBRATE                 "Delta kalibrieren"
#define MSG_DELTA_CALIBRATE_X               "Kalibriere X"
#define MSG_DELTA_CALIBRATE_Y               "Kalibriere Y"
#define MSG_DELTA_CALIBRATE_Z               "Kalibriere Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Kalibriere Mitte"
#define MSG_DELTA_SETTINGS                  "Delta Einst. anzeig."
#define MSG_DELTA_AUTO_CALIBRATE            "Autom. Kalibrierung"
#define MSG_DELTA_HEIGHT_CALIBRATE          "Delta Höhe setzen"

#define MSG_INFO_MENU                       "Über den Drucker"
#define MSG_INFO_PRINTER_MENU               "Drucker Info"
#define MSG_3POINT_LEVELING                 "3-Punkt Nivellierung"
#define MSG_LINEAR_LEVELING                 "Lineare Nivellierung"
#define MSG_BILINEAR_LEVELING               "Bilineare Nivell."
#define MSG_UBL_LEVELING                    "Unified Bed Leveling"
#define MSG_MESH_LEVELING                   "Netz Nivellierung"
#define MSG_INFO_STATS_MENU                 "Drucker Statistik"
#define MSG_INFO_BOARD_MENU                 "Board Info"
#define MSG_INFO_THERMISTOR_MENU            "Thermistoren"
#define MSG_INFO_EXTRUDERS                  "Extruder"
#define MSG_INFO_BAUDRATE                   "Baud"
#define MSG_INFO_PROTOCOL                   "Protokoll"
#define MSG_CASE_LIGHT                      "Beleuchtung"
#define MSG_CASE_LIGHT_BRIGHTNESS           "Helligkeit"

#define MSG_UBL_DOING_G29                 "G29 UBL läuft!"
#define MSG_UBL_UNHOMED                   "Erst XYZ homen"
#define MSG_UBL_TOOLS                     "UBL Tools"
#define MSG_UBL_LEVEL_BED                 "Unified Bed Leveling"
#define MSG_UBL_MANUAL_MESH               "Netz manuell erst."
#define MSG_UBL_BC_INSERT                 "Unterlegen & messen"
#define MSG_UBL_BC_INSERT2                "Messen"
#define MSG_UBL_BC_REMOVE                 "Entfernen & messen"
#define MSG_UBL_MOVING_TO_NEXT            "Nächster Punkt..."
#define MSG_UBL_ACTIVATE_MESH             "UBL aktivieren"
#define MSG_UBL_DEACTIVATE_MESH           "UBL deaktivieren"
#define MSG_UBL_SET_BED_TEMP              "Bett Temp."
#define MSG_UBL_CUSTOM_BED_TEMP           MSG_UBL_SET_BED_TEMP
#define MSG_UBL_SET_HOTEND_TEMP           "Hotend Temp."
#define MSG_UBL_CUSTOM_HOTEND_TEMP        MSG_UBL_SET_HOTEND_TEMP
#define MSG_UBL_MESH_EDIT                 "Netz bearbeiten"
#define MSG_UBL_EDIT_CUSTOM_MESH          "Eigenes Netz bearb."
#define MSG_UBL_FINE_TUNE_MESH            "Feineinstellung..."
#define MSG_UBL_DONE_EDITING_MESH         "Bearbeitung beendet"
#define MSG_UBL_BUILD_CUSTOM_MESH         "Eigenes Netz erst."
#define MSG_UBL_BUILD_MESH_MENU           "Netz erstellen"
#define MSG_UBL_BUILD_PLA_MESH            "Netz erstellen PLA"
#define MSG_UBL_BUILD_ABS_MESH            "Netz erstellen ABS"
#define MSG_UBL_BUILD_COLD_MESH           "Netz erstellen kalt"
#define MSG_UBL_MESH_HEIGHT_ADJUST        "Netz Höhe einst."
#define MSG_UBL_MESH_HEIGHT_AMOUNT        "Height Amount"
#define MSG_UBL_VALIDATE_MESH_MENU        "Netz validieren"
#define MSG_UBL_VALIDATE_PLA_MESH         "Netz validieren PLA"
#define MSG_UBL_VALIDATE_ABS_MESH         "Netz validieren ABS"
#define MSG_UBL_VALIDATE_CUSTOM_MESH      "Eig. Netz validieren"
#define MSG_UBL_CONTINUE_MESH             "Netzerst. forts."
#define MSG_UBL_MESH_LEVELING             "Netz Nivellierung"
#define MSG_UBL_3POINT_MESH_LEVELING      "3-Punkt Nivellierung"
#define MSG_UBL_GRID_MESH_LEVELING        "Gitternetz Nivell."
#define MSG_UBL_MESH_LEVEL                "Netz nivellieren"
#define MSG_UBL_SIDE_POINTS               "Eckpunkte"
#define MSG_UBL_MAP_TYPE                  "Kartentyp"
#define MSG_UBL_OUTPUT_MAP                "Karte ausgeben"
#define MSG_UBL_OUTPUT_MAP_HOST           "Ausgabe für Host"
#define MSG_UBL_OUTPUT_MAP_CSV            "Ausgabe für CSV"
#define MSG_UBL_OUTPUT_MAP_BACKUP         "Externe Sicherung"
#define MSG_UBL_INFO_UBL                  "UBL Info ausgeben"
#define MSG_UBL_EDIT_MESH_MENU            "Netz bearbeiten"
#define MSG_UBL_FILLIN_AMOUNT             "Menge an Fill-in"
#define MSG_UBL_MANUAL_FILLIN             "Manuelles Fill-in"
#define MSG_UBL_SMART_FILLIN              "Kluges Fill-in"
#define MSG_UBL_FILLIN_MESH               "Fill-in Netz"
#define MSG_UBL_INVALIDATE_ALL            "Alles annullieren"
#define MSG_UBL_INVALIDATE_CLOSEST        "Nächstlieg. ann."
#define MSG_UBL_FINE_TUNE_ALL             "Feineinstellung Alle"
#define MSG_UBL_FINE_TUNE_CLOSEST         "Feineinst. Nächstl."
#define MSG_UBL_STORAGE_MESH_MENU         "Netz Speicherplatz"
#define MSG_UBL_STORAGE_SLOT              "Memory Slot"
#define MSG_UBL_LOAD_MESH                 "Bett Netz laden"
#define MSG_UBL_SAVE_MESH                 "Bett Netz speichern"
#define MSG_UBL_SAVE_ERROR                "ERR:UBL speichern"
#define MSG_UBL_RESTORE_ERROR             "ERR:UBL wiederherst."
#define MSG_UBL_Z_OFFSET_STOPPED          "Z-Versatz angehalten"
#define MSG_UBL_STEP_BY_STEP_MENU         "Schrittweises UBL"

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Gesamte Drucke"
  #define MSG_INFO_COMPLETED_PRINTS         "Beendete Drucke"
  #define MSG_INFO_PRINT_TIME               "Gesamte Druckzeit"
  #define MSG_INFO_PRINT_LONGEST            "Längster Druckjob"
  #define MSG_INFO_PRINT_FILAMENT           "Gesamt Extrudiert"
#else
  #define MSG_INFO_PRINT_COUNT              "Drucke"
  #define MSG_INFO_COMPLETED_PRINTS         "Komplett"
  #define MSG_INFO_PRINT_TIME               "Gesamt "
  #define MSG_INFO_PRINT_LONGEST            "Längster"
  #define MSG_INFO_PRINT_FILAMENT           "Extrud."
#endif

#define MSG_INFO_MIN_TEMP                   "Min Temp"
#define MSG_INFO_MAX_TEMP                   "Max Temp"
#define MSG_INFO_PSU                        "Stromversorgung"

#define MSG_DRIVE_STRENGTH                  "Motorströme"
#define MSG_DAC_PERCENT                     "Treiber %"
#define MSG_DAC_EEPROM_WRITE                "Werte speichern"

#define MSG_FILAMENT_CHANGE_HEADER          "DRUCK PAUSIERT"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "FORTS. OPTIONEN:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Extrude mehr"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Drucke weiter"
#define MSG_FILAMENT_CHANGE_MINTEMP         "Min. Temperatur ist "
#define MSG_FILAMENT_CHANGE_NOZZLE          "  Düse: "

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Warte auf den"
  #define MSG_FILAMENT_CHANGE_INIT_2          "Start des"
  #define MSG_FILAMENT_CHANGE_INIT_3          "Filamentwechsels"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Warte auf"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "Herausnahme"
  #define MSG_FILAMENT_CHANGE_UNLOAD_3        "des Filaments..."
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Filament einlegen"
  #define MSG_FILAMENT_CHANGE_INSERT_2        "und Knopf"
  #define MSG_FILAMENT_CHANGE_INSERT_3        "drücken..."
  #define MSG_FILAMENT_CHANGE_HEAT_1          "Knopf drücken um"
  #define MSG_FILAMENT_CHANGE_HEAT_2          "Düse aufzuheizen."
  #define MSG_FILAMENT_CHANGE_HEATING_1       "Düse heizt auf..."
  #define MSG_FILAMENT_CHANGE_HEATING_2       "Bitte warten..."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Warte auf"
  #define MSG_FILAMENT_CHANGE_LOAD_2          "Laden des"
  #define MSG_FILAMENT_CHANGE_LOAD_3          "Filaments"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Warte auf"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "Extrusion des"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_3       "Filaments"
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Warte auf"
  #define MSG_FILAMENT_CHANGE_RESUME_2        "Fortsetzung des"
  #define MSG_FILAMENT_CHANGE_RESUME_3        "Druckes..."
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Bitte warten..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Auswerfen..."
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Laden und Klick"
  #define MSG_FILAMENT_CHANGE_HEATING_1       "Heizen..."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Laden..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Extrudieren..."
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Fortsetzen..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_DE_H
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
 * Greek
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_EL_H
#define LANGUAGE_EL_H

#define MAPPER_CECF
#define UTF8_MAPPER CECF
#define DISPLAY_CHARSET_ISO10646_GREEK

#define WELCOME_MSG                         MACHINE_NAME " έτοιμο."
#define MSG_SD_INSERTED                     "Εισαγωγή κάρτας"
#define MSG_SD_REMOVED                      "Αφαίρεση κάρτας"
#define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters
#define MSG_MAIN                            "Βασική Οθόνη"
#define MSG_AUTOSTART                       "Αυτόματη εκκίνηση"
#define MSG_DISABLE_STEPPERS                "Απενεργοποίηση Μοτέρ"
#define MSG_AUTO_HOME                       "Αυτομ. επαναφορά στο αρχικό σημείο" //SHORTEN
#define MSG_AUTO_HOME_X                     "Αρχικό σημείο X"
#define MSG_AUTO_HOME_Y                     "Αρχικό σημείο Y"
#define MSG_AUTO_HOME_Z                     "Αρχικό σημείο Z"
#define MSG_LEVEL_BED_HOMING                "Επαναφορά Επ. Εκτύπωσης" //SHORTEN
#define MSG_LEVEL_BED_WAITING               "Επιπεδοποίηση επ. Εκτύπωσης περιμενει" //SHORTEN
#define MSG_LEVEL_BED_NEXT_POINT            "Επόμενο σημείο"
#define MSG_LEVEL_BED_DONE                  "Ολοκλήρωση επιπεδοποίησης!" //SHORTEN
#define MSG_SET_HOME_OFFSETS                "Ορισμός βασικών μετατοπίσεων" //SHORTEN
#define MSG_HOME_OFFSETS_APPLIED            "Εφαρμόστηκαν οι μετατοπίσεις" //SHORTEN
#define MSG_SET_ORIGIN                      "Ορισμός προέλευσης"
#define MSG_PREHEAT_1                       "Προθέρμανση PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " όλα"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " bed" //SHORTEN
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " επιβεβαίωση" //SHORTEN
#define MSG_PREHEAT_2                       "Προθέρμανση ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " όλα"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " bed" //SHORTEN
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " επιβεβαίωση" //SHORTEN
#define MSG_COOLDOWN                        "Μειωση θερμοκρασιας"
#define MSG_SWITCH_PS_ON                    "Ενεργοποίηση"
#define MSG_SWITCH_PS_OFF                   "Απενεργοποίηση"
#define MSG_EXTRUDE                         "Εξώθηση"
#define MSG_RETRACT                         "Ανάσυρση"
#define MSG_MOVE_AXIS                       "Μετακίνηση άξονα"
#define MSG_BED_LEVELING                    "Επιπεδοποίηση Επ. Εκτύπωσης" //SHORTEN
#define MSG_LEVEL_BED                       "Επιπεδοποίηση Επ. Εκτύπωσης" //SHORTEN
#define MSG_MOVE_X                          "Μετακίνηση X"
#define MSG_MOVE_Y                          "Μετακίνηση Y"
#define MSG_MOVE_Z                          "Μετακίνηση Z"
#define MSG_MOVE_E                          "Εξωθητήρας"
#define MSG_MOVE_01MM                       "Μετακίνηση 0,1μμ"
#define MSG_MOVE_1MM                        "Μετακίνηση 1μμ"
#define MSG_MOVE_10MM                       "Μετακίνηση 10μμ"
#define MSG_SPEED                           "Ταχύτητα"
#define MSG_BED_Z                           "Επ. Εκτύπωσης Z"
#define MSG_NOZZLE                          "Ακροφύσιο"
#define MSG_BED                             "Κλίνη"
#define MSG_FAN_SPEED                       "Ταχύτητα ανεμιστήρα"
#define MSG_FLOW                            "Ροή"
#define MSG_CONTROL                         "Έλεγχος"
#define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "Αυτομ ρύθμιση θερ/σίας" //SHORTEN
#define MSG_ON                              "Ενεργοποιημένο"
#define MSG_OFF                             "Απενεργοποιημένο"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "Επιτάχυνση"
#define MSG_JERK                            "Jerk"
#define MSG_VX_JERK                         "Vαντίδραση x"
#define MSG_VY_JERK                         "Vαντίδραση y"
#define MSG_VZ_JERK                         "Vαντίδραση z"
#define MSG_VE_JERK                         "Vαντίδραση e"
#define MSG_VMAX                            "V Μέγιστο"
#define MSG_VMIN                            "V Ελάχιστο"
#define MSG_VTRAV_MIN                       "Vελάχ. μετατόπιση"
#define MSG_ACCELERATION                    MSG_ACC
#define MSG_AMAX                            "Aμεγ "
#define MSG_A_RETRACT                       "Α-ανάσυρση"
#define MSG_A_TRAVEL                        "Α-μετατόπιση"
#define MSG_STEPS_PER_MM                    "Bήματα ανά μμ"
#define MSG_XSTEPS                          "Bήματα X ανά μμ"
#define MSG_YSTEPS                          "Bήματα Υ ανά μμ"
#define MSG_ZSTEPS                          "Bήματα Ζ ανά μμ"
#define MSG_ESTEPS                          "Bήματα Ε ανά μμ"
#define MSG_E1STEPS                         "Bήματα Ε1 ανά μμ"
#define MSG_E2STEPS                         "Bήματα Ε2 ανά μμ"
#define MSG_E3STEPS                         "Bήματα Ε3 ανά μμ"
#define MSG_E4STEPS                         "Bήματα Ε4 ανά μμ"
#define MSG_E5STEPS                         "Bήματα Ε5 ανά μμ"
#define MSG_TEMPERATURE                     "Θερμοκρασία"
#define MSG_MOTION                          "Κίνηση"
#define MSG_FILAMENT                        "Νήμα"
#define MSG_VOLUMETRIC_ENABLED              "Ε σε μμ3"
#define MSG_FILAMENT_DIAM                   "Διάμετρος νήματος"
#define MSG_CONTRAST                        "Κοντράστ LCD"
#define MSG_STORE_EEPROM                    "Αποθήκευση"
#define MSG_LOAD_EEPROM                     "Φόρτωση"
#define MSG_RESTORE_FAILSAFE                "Επαναφορά ασφαλούς αντιγράφου" //SHORTEN
#define MSG_REFRESH                         "Ανανέωση"
#define MSG_WATCH                           "Οθόνη πληροφόρησης"
#define MSG_PREPARE                         "Προετοιμασία"
#define MSG_TUNE                            "Συντονισμός"
#define MSG_PAUSE_PRINT                     "Παύση εκτύπωσης"
#define MSG_RESUME_PRINT                    "Συνέχιση εκτύπωσης"
#define MSG_STOP_PRINT                      "Διακοπή εκτύπωσης"
#define MSG_CARD_MENU                       "Εκτύπωση από SD"
#define MSG_NO_CARD                         "Δεν βρέθηκε SD"
#define MSG_DWELL                           "Αναστολή λειτουργίας"
#define MSG_USERWAIT                        "Αναμονή για χρήστη"
#define MSG_RESUMING                        "Συνεχίζεται η εκτύπωση" //SHORTEN
#define MSG_PRINT_ABORTED                   "Διακόπτεται η εκτύπωση" //SHORTEN
#define MSG_NO_MOVE                         "Καμία κίνηση."
#define MSG_KILLED                          "ΤΕΡΜΑΤΙΣΜΟΣ. "
#define MSG_STOPPED                         "ΔΙΑΚΟΠΗ. "
#define MSG_CONTROL_RETRACT                 "Ανάσυρση μμ"
#define MSG_CONTROL_RETRACT_SWAP            "Εναλλαγή ανάσυρσης μμ"  //SHORTEN
#define MSG_CONTROL_RETRACTF                "Ανάσυρση V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Μεταπήδηση μμ"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "Αυτόματη ανάσυρση"
#define MSG_FILAMENTCHANGE                  "Αλλαγή νήματος"
#define MSG_INIT_SDCARD                     "Προετοιμασία κάρτας SD"  //SHORTEN
#define MSG_CNG_SDCARD                      "Αλλαγή κάρτας SD"
#define MSG_ZPROBE_OUT                      "Διερεύνηση Z εκτός Επ.Εκτύπωσης" //SHORTEN
#define MSG_YX_UNHOMED                      "Επαναφορά Χ/Υ πριν από Ζ" //SHORTEN
#define MSG_XYZ_UNHOMED                     "Επαναφορά ΧΥΖ πρώτα"
#define MSG_ZPROBE_ZOFFSET                  "Μετατόπιση Ζ"
#define MSG_BABYSTEP_X                      "Μικρό βήμα Χ"
#define MSG_BABYSTEP_Y                      "Μικρό βήμα Υ"
#define MSG_BABYSTEP_Z                      "Μικρό βήμα Ζ"
#define MSG_ENDSTOP_ABORT                   "Ακύρωση endstop "
#define MSG_HEATING_FAILED_LCD              "Ανεπιτυχής θέρμανση"
#define MSG_ERR_REDUNDANT_TEMP              "ΠΛΕΟΝΑΖΟΥΣΑ ΘΕΡΜΟΤΗΤΑ"
#define MSG_THERMAL_RUNAWAY                 "ΔΙΑΦΥΓΗ ΘΕΡΜΟΚΡΑΣΙΑΣ"
#define MSG_ERR_MAXTEMP                     "ΠΕΡΙΤΗ ΘΕΡΜΟΚΡΑΣΙΑ"
#define MSG_ERR_MINTEMP                     "ΜΗ ΕΠΑΡΚΗΣ ΘΕΡΜΟΚΡΑΣΙΑΣ" //SHORTEN
#define MSG_ERR_MAXTEMP_BED                 "ΜΕΓΙΣΤΗ ΘΕΡΜΟΚΡΑΣΙΑΣ ΕΠ. ΕΚΤΥΠΩΣΗΣ" //SHORTEN
#define MSG_ERR_MINTEMP_BED                 "ΕΛΑΧΙΣΤΗ ΘΕΡΜΟΚΡΑΣΙΑΣ ΕΠ. ΕΚΤΥΠΩΣΗΣ" //SHORTEN
#define MSG_HALTED                          "H εκτύπωση διακόπηκε"
#define MSG_PLEASE_RESET                    "PLEASE RESET" //TRANSLATE
#define MSG_HEATING                         "Θερμαίνεται…"
#define MSG_HEATING_COMPLETE                "Η θέρμανση ολοκληρώθηκε." //SHORTEN
#define MSG_BED_HEATING                     "Θέρμανση ΕΠ. Εκτύπωσης" //SHORTEN
#define MSG_BED_DONE                        "Η Επ. Εκτύπωσης ολοκληρώθηκε" //SHORTEN
#define MSG_DELTA_CALIBRATE                 "Βαθμονόμηση Delta"
#define MSG_DELTA_CALIBRATE_X               "Βαθμονόμηση X"
#define MSG_DELTA_CALIBRATE_Y               "Βαθμονόμηση Y"
#define MSG_DELTA_CALIBRATE_Z               "Βαθμονόμηση Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Βαθμονόμηση κέντρου"

#define MSG_INFO_MENU                       "About Printer"
#define MSG_INFO_PRINTER_MENU               "Printer Info"
#define MSG_INFO_STATS_MENU                 "Printer Stats"
#define MSG_INFO_BOARD_MENU                 "Board Info"
#define MSG_INFO_THERMISTOR_MENU            "Thermistors"
#define MSG_INFO_EXTRUDERS                  "Extruders"
#define MSG_INFO_BAUDRATE                   "Baud"
#define MSG_INFO_PROTOCOL                   "Protocol"

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Print Count"
  #define MSG_INFO_COMPLETED_PRINTS         "Completed  "
  #define MSG_INFO_PRINT_TIME               "Total Time "
#else
  #define MSG_INFO_PRINT_COUNT              "Prints   "
  #define MSG_INFO_COMPLETED_PRINTS         "Completed"
  #define MSG_INFO_PRINT_TIME               "Duration "
#endif
#define MSG_INFO_MIN_TEMP                   "Min Temp"
#define MSG_INFO_MAX_TEMP                   "Max Temp"
#define MSG_INFO_PSU                        "PSU"

#define MSG_FILAMENT_CHANGE_HEADER          "CHANGE FILAMENT"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Extrude more"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Resume print"

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Wait for start"
  #define MSG_FILAMENT_CHANGE_INIT_2          "of the filament"
  #define MSG_FILAMENT_CHANGE_INIT_3          "change"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Wait for"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "filament unload"
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Insert filament"
  #define MSG_FILAMENT_CHANGE_INSERT_2        "and press button"
  #define MSG_FILAMENT_CHANGE_INSERT_3        "to continue..."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Wait for"
  #define MSG_FILAMENT_CHANGE_LOAD_2          "filament load"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Wait for"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "filament extrude"
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Wait for print"
  #define MSG_FILAMENT_CHANGE_RESUME_2        "to resume"
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Please wait..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Ejecting..."
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Insert and Click"
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Loading..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Extruding..."
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Resuming..."
#endif

#endif // LANGUAGE_EL_H
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
 * Greek (Greece)
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_EL_GR_H
#define LANGUAGE_EL_GR_H

#define MAPPER_CECF
#define UTF8_MAPPER CECF
#define DISPLAY_CHARSET_ISO10646_GREEK

#define WELCOME_MSG                         MACHINE_NAME " έτοιμο."
#define MSG_SD_INSERTED                     "Εισαγωγή κάρτας"
#define MSG_SD_REMOVED                      "Αφαίρεση κάρτας"
#define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters
#define MSG_MAIN                            "Βασική Οθόνη"
#define MSG_AUTOSTART                       "Αυτόματη εκκίνηση"
#define MSG_DISABLE_STEPPERS                "Απενεργοποίηση βηματιστή"
#define MSG_AUTO_HOME                       "Αυτομ. επαναφορά στο αρχικό σημείο"
#define MSG_AUTO_HOME_X                     "Αρχικό σημείο X"
#define MSG_AUTO_HOME_Y                     "Αρχικό σημείο Y"
#define MSG_AUTO_HOME_Z                     "Αρχικό σημείο Z"
#define MSG_LEVEL_BED_HOMING                "Επαναφορά στο αρχικό σημείο ΧΥΖ"
#define MSG_LEVEL_BED_WAITING               "Κάντε κλικ για να ξεκινήσετε"
#define MSG_LEVEL_BED_NEXT_POINT            "Επόμενο σημείο"
#define MSG_LEVEL_BED_DONE                  "Ολοκλήρωση επιπεδοποίησης!"
#define MSG_SET_HOME_OFFSETS                "Ορισμός βασικών μετατοπίσεων"
#define MSG_HOME_OFFSETS_APPLIED            "Εφαρμόστηκαν οι μετατοπίσεις"
#define MSG_SET_ORIGIN                      "Ορισμός προέλευσης"
#define MSG_PREHEAT_1                       "Προθέρμανση PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " όλα"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " κλίνη"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " επιβεβαίωση"
#define MSG_PREHEAT_2                       "Προθέρμανση ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " όλα"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " Bed"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " επιβεβαίωση"
#define MSG_COOLDOWN                        "Μειωση θερμοκρασιας"
#define MSG_SWITCH_PS_ON                    "Ενεργοποίηση"
#define MSG_SWITCH_PS_OFF                   "Απενεργοποίηση"
#define MSG_EXTRUDE                         "Εξώθηση"
#define MSG_RETRACT                         "Ανάσυρση"
#define MSG_MOVE_AXIS                       "Μετακίνηση άξονα"
#define MSG_BED_LEVELING                    "Επιπεδοποίηση κλίνης"
#define MSG_LEVEL_BED                       "Επιπεδοποίηση κλίνης"
#define MSG_MOVE_X                          "Μετακίνηση X"
#define MSG_MOVE_Y                          "Μετακίνηση Y"
#define MSG_MOVE_Z                          "Μετακίνηση Z"
#define MSG_MOVE_E                          "Εξωθητήρας"
#define MSG_MOVE_01MM                       "Μετακίνηση 0,1 μμ"
#define MSG_MOVE_1MM                        "Μετακίνηση 1 μμ"
#define MSG_MOVE_10MM                       "Μετακίνηση 10 μμ"
#define MSG_SPEED                           "Ταχύτητα"
#define MSG_BED_Z                           "Κλίνη Z"
#define MSG_NOZZLE                          "Ακροφύσιο"
#define MSG_BED                             "Κλίνη"
#define MSG_FAN_SPEED                       "Ταχύτητα ανεμιστήρα"
#define MSG_FLOW                            "Ροή"
#define MSG_CONTROL                         "Έλεγχος"
#define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "Αυτομ. ρύθμιση θερμοκρασίας"
#define MSG_ON                              "Ενεργοποιημένο"
#define MSG_OFF                             "Απενεργοποιημένο"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "Επιτάχυνση"
#define MSG_JERK                            "Vαντίδραση"
#define MSG_VX_JERK                         "Vαντίδραση x"
#define MSG_VY_JERK                         "Vαντίδραση y"
#define MSG_VZ_JERK                         "Vαντίδραση z"
#define MSG_VE_JERK                         "Vαντίδραση e"
#define MSG_VMAX                            "Vμεγ "
#define MSG_VMIN                            "Vελαχ"
#define MSG_VTRAV_MIN                       "Vελάχ. μετατόπιση"
#define MSG_ACCELERATION                    MSG_ACC
#define MSG_AMAX                            "Aμεγ "
#define MSG_A_RETRACT                       "Α-ανάσυρση"
#define MSG_A_TRAVEL                        "Α-μετατόπιση"
#define MSG_STEPS_PER_MM                    "Bήματα ανά μμ"
#define MSG_XSTEPS                          "Bήματα X ανά μμ"
#define MSG_YSTEPS                          "Bήματα Υ ανά μμ"
#define MSG_ZSTEPS                          "Bήματα Ζ ανά μμ"
#define MSG_ESTEPS                          "Bήματα Ε ανά μμ"
#define MSG_E1STEPS                         "Bήματα Ε1 ανά μμ"
#define MSG_E2STEPS                         "Bήματα Ε2 ανά μμ"
#define MSG_E3STEPS                         "Bήματα Ε3 ανά μμ"
#define MSG_E4STEPS                         "Bήματα Ε4 ανά μμ"
#define MSG_E5STEPS                         "Bήματα Ε5 ανά μμ"
#define MSG_TEMPERATURE                     "Θερμοκρασία"
#define MSG_MOTION                          "Κίνηση"
#define MSG_FILAMENT                        "Νήμα"
#define MSG_VOLUMETRIC_ENABLED              "Ε σε μμ3"
#define MSG_FILAMENT_DIAM                   "Διάμετρος νήματος"
#define MSG_CONTRAST                        "Κοντράστ LCD"
#define MSG_STORE_EEPROM                    "Αποθήκευση"
#define MSG_LOAD_EEPROM                     "Φόρτωση"
#define MSG_RESTORE_FAILSAFE                "Επαναφορά ασφαλούς αντιγράφου"
#define MSG_REFRESH                         "Ανανέωση"
#define MSG_WATCH                           "Οθόνη πληροφόρησης"
#define MSG_PREPARE                         "Προετοιμασία"
#define MSG_TUNE                            "Συντονισμός"
#define MSG_PAUSE_PRINT                     "Παύση εκτύπωσης"
#define MSG_RESUME_PRINT                    "Συνέχιση εκτύπωσης"
#define MSG_STOP_PRINT                      "Διακοπή εκτύπωσης"
#define MSG_CARD_MENU                       "Εκτύπωση από SD"
#define MSG_NO_CARD                         "Δεν βρέθηκε SD"
#define MSG_DWELL                           "Αναστολή λειτουργίας..."
#define MSG_USERWAIT                        "Αναμονή για χρήστη…"
#define MSG_RESUMING                        "Συνεχίζεται η εκτύπωση"
#define MSG_PRINT_ABORTED                   "Διακόπτεται η εκτύπωση"
#define MSG_NO_MOVE                         "Καμία κίνηση."
#define MSG_KILLED                          "ΤΕΡΜΑΤΙΣΜΟΣ. "
#define MSG_STOPPED                         "ΔΙΑΚΟΠΗ. "
#define MSG_CONTROL_RETRACT                 "Ανάσυρση μμ"
#define MSG_CONTROL_RETRACT_SWAP            "Εναλλαγή ανάσυρσης μμ"
#define MSG_CONTROL_RETRACTF                "Ανάσυρση V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Μεταπήδηση μμ"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "Αυτόματη ανάσυρση"
#define MSG_FILAMENTCHANGE                  "Αλλαγή νήματος"
#define MSG_INIT_SDCARD                     "Προετοιμασία κάρτας SD"
#define MSG_CNG_SDCARD                      "Αλλαγή κάρτας SD"
#define MSG_ZPROBE_OUT                      "Διερεύνηση Z εκτός κλίνης"
#define MSG_YX_UNHOMED                      "Επαναφορά Χ/Υ πριν από Ζ"
#define MSG_XYZ_UNHOMED                     "Επαναφορά ΧΥΖ πρώτα"
#define MSG_ZPROBE_ZOFFSET                  "Μετατόπιση Ζ"
#define MSG_BABYSTEP_X                      "Μικρό βήμα Χ"
#define MSG_BABYSTEP_Y                      "Μικρό βήμα Υ"
#define MSG_BABYSTEP_Z                      "Μικρό βήμα Ζ"
#define MSG_ENDSTOP_ABORT                   "Ματαίωση endstop "
#define MSG_HEATING_FAILED_LCD              "Ανεπιτυχής θέρμανση"
#define MSG_ERR_REDUNDANT_TEMP              "Λάθος: ΠΛΕΟΝΑΖΟΥΣΑ ΘΕΡΜΟΤΗΤΑ"
#define MSG_THERMAL_RUNAWAY                 "ΔΙΑΦΥΓΗ ΘΕΡΜΟΤΗΤΑΣ"
#define MSG_ERR_MAXTEMP                     "Λάθος: ΜΕΓΙΣΤΗ ΘΕΡΜΟΤΗΤΑ"
#define MSG_ERR_MINTEMP                     "Λάθος: ΕΛΑΧΙΣΤΗ ΘΕΡΜΟΤΗΤΑ"
#define MSG_ERR_MAXTEMP_BED                 "Λάθος: ΜΕΓΙΣΤΗ ΘΕΡΜΟΤΗΤΑ ΚΛΙΝΗΣ"
#define MSG_ERR_MINTEMP_BED                 "Λάθος: ΕΛΑΧΙΣΤΗ ΘΕΡΜΟΤΗΤΑ ΚΛΙΝΗΣ"
#define MSG_HEATING                         "Θερμαίνεται…"
#define MSG_HEATING_COMPLETE                "Η θέρμανση ολοκληρώθηκε."
#define MSG_BED_HEATING                     "Θέρμανση κλίνης."
#define MSG_BED_DONE                        "Η κλίνη ολοκληρώθηκε."
#define MSG_DELTA_CALIBRATE                 "Βαθμονόμηση Delta"
#define MSG_DELTA_CALIBRATE_X               "Βαθμονόμηση X"
#define MSG_DELTA_CALIBRATE_Y               "Βαθμονόμηση Y"
#define MSG_DELTA_CALIBRATE_Z               "Βαθμονόμηση Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Βαθμονόμηση κέντρου"

#endif // LANGUAGE_EL_GR_H
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
 * English
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_EN_H
#define LANGUAGE_EN_H

#ifndef LANGUAGE_FALBACK
  #define DISPLAY_CHARSET_ASCII
#endif

#ifndef WELCOME_MSG
  #define WELCOME_MSG                         MACHINE_NAME " ready."
#endif
#ifndef MSG_BACK
  #define MSG_BACK                            "Back"
#endif
#ifndef MSG_SD_INSERTED
  #define MSG_SD_INSERTED                     "Card inserted"
#endif
#ifndef MSG_SD_REMOVED
  #define MSG_SD_REMOVED                      "Card removed"
#endif
#ifndef MSG_LCD_ENDSTOPS
  #define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters
#endif
#ifndef MSG_MAIN
  #define MSG_MAIN                            "Main"
#endif
#ifndef MSG_AUTOSTART
  #define MSG_AUTOSTART                       "Autostart"
#endif
#ifndef MSG_DISABLE_STEPPERS
  #define MSG_DISABLE_STEPPERS                "Disable steppers"
#endif
#ifndef MSG_DEBUG_MENU
  #define MSG_DEBUG_MENU                      "Debug Menu"
#endif
#ifndef MSG_PROGRESS_BAR_TEST
  #define MSG_PROGRESS_BAR_TEST               "Progress Bar Test"
#endif
#ifndef MSG_AUTO_HOME
  #define MSG_AUTO_HOME                       "Auto home"
#endif
#ifndef MSG_AUTO_HOME_X
  #define MSG_AUTO_HOME_X                     "Home X"
#endif
#ifndef MSG_AUTO_HOME_Y
  #define MSG_AUTO_HOME_Y                     "Home Y"
#endif
#ifndef MSG_AUTO_HOME_Z
  #define MSG_AUTO_HOME_Z                     "Home Z"
#endif
#ifndef MSG_LEVEL_BED_HOMING
  #define MSG_LEVEL_BED_HOMING                "Homing XYZ"
#endif
#ifndef MSG_LEVEL_BED_WAITING
  #define MSG_LEVEL_BED_WAITING               "Click to Begin"
#endif
#ifndef MSG_LEVEL_BED_NEXT_POINT
  #define MSG_LEVEL_BED_NEXT_POINT            "Next Point"
#endif
#ifndef MSG_LEVEL_BED_DONE
  #define MSG_LEVEL_BED_DONE                  "Leveling Done!"
#endif
#ifndef MSG_Z_FADE_HEIGHT
  #define MSG_Z_FADE_HEIGHT                   "Fade Height"
#endif
#ifndef MSG_SET_HOME_OFFSETS
  #define MSG_SET_HOME_OFFSETS                "Set home offsets"
#endif
#ifndef MSG_HOME_OFFSETS_APPLIED
  #define MSG_HOME_OFFSETS_APPLIED            "Offsets applied"
#endif
#ifndef MSG_SET_ORIGIN
  #define MSG_SET_ORIGIN                      "Set origin"
#endif
#ifndef MSG_PREHEAT_1
  #define MSG_PREHEAT_1                       "Preheat PLA"
#endif
#ifndef MSG_PREHEAT_1_N
  #define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#endif
#ifndef MSG_PREHEAT_1_ALL
  #define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " All"
#endif
#ifndef MSG_PREHEAT_1_END
  #define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 " End"
#endif
#ifndef MSG_PREHEAT_1_BEDONLY
  #define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " Bed"
#endif
#ifndef MSG_PREHEAT_1_SETTINGS
  #define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " conf"
#endif
#ifndef MSG_PREHEAT_2
  #define MSG_PREHEAT_2                       "Preheat ABS"
#endif
#ifndef MSG_PREHEAT_2_N
  #define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#endif
#ifndef MSG_PREHEAT_2_ALL
  #define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " All"
#endif
#ifndef MSG_PREHEAT_2_END
  #define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 " End"
#endif
#ifndef MSG_PREHEAT_2_BEDONLY
  #define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " Bed"
#endif
#ifndef MSG_PREHEAT_2_SETTINGS
  #define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " conf"
#endif
#ifndef MSG_COOLDOWN
  #define MSG_COOLDOWN                        "Cooldown"
#endif
#ifndef MSG_SWITCH_PS_ON
  #define MSG_SWITCH_PS_ON                    "Switch power on"
#endif
#ifndef MSG_SWITCH_PS_OFF
  #define MSG_SWITCH_PS_OFF                   "Switch power off"
#endif
#ifndef MSG_EXTRUDE
  #define MSG_EXTRUDE                         "Extrude"
#endif
#ifndef MSG_RETRACT
  #define MSG_RETRACT                         "Retract"
#endif
#ifndef MSG_MOVE_AXIS
  #define MSG_MOVE_AXIS                       "Move axis"
#endif
#ifndef MSG_BED_LEVELING
  #define MSG_BED_LEVELING                    "Bed Leveling"
#endif
#ifndef MSG_LEVEL_BED
  #define MSG_LEVEL_BED                       "Level bed"
#endif
#ifndef MSG_LEVEL_CORNERS
  #define MSG_LEVEL_CORNERS                   "Level corners"
#endif
#ifndef MSG_NEXT_CORNER
  #define MSG_NEXT_CORNER                     "Next corner"
#endif
#ifndef MSG_EDITING_STOPPED
  #define MSG_EDITING_STOPPED                 "Mesh Editing Stopped"
#endif
#ifndef MSG_USER_MENU
  #define MSG_USER_MENU                       "Custom Commands"
#endif

#ifndef MSG_UBL_DOING_G29
  #define MSG_UBL_DOING_G29                   "Doing G29"
#endif
#ifndef MSG_UBL_UNHOMED
  #define MSG_UBL_UNHOMED                     "Home XYZ first"
#endif
#ifndef MSG_UBL_TOOLS
  #define MSG_UBL_TOOLS                       "UBL Tools"
#endif
#ifndef MSG_UBL_LEVEL_BED
  #define MSG_UBL_LEVEL_BED                   "Unified Bed Leveling"
#endif
#ifndef MSG_UBL_MANUAL_MESH
  #define MSG_UBL_MANUAL_MESH                 "Manually Build Mesh"
#endif
#ifndef MSG_UBL_BC_INSERT
  #define MSG_UBL_BC_INSERT                   "Place shim & measure"
#endif
#ifndef MSG_UBL_BC_INSERT2
  #define MSG_UBL_BC_INSERT2                  "Measure"
#endif
#ifndef MSG_UBL_BC_REMOVE
  #define MSG_UBL_BC_REMOVE                   "Remove & measure bed"
#endif
#ifndef MSG_UBL_MOVING_TO_NEXT
  #define MSG_UBL_MOVING_TO_NEXT              "Moving to next"
#endif
#ifndef MSG_UBL_ACTIVATE_MESH
  #define MSG_UBL_ACTIVATE_MESH               "Activate UBL"
#endif
#ifndef MSG_UBL_DEACTIVATE_MESH
  #define MSG_UBL_DEACTIVATE_MESH             "Deactivate UBL"
#endif
#ifndef MSG_UBL_SET_BED_TEMP
  #define MSG_UBL_SET_BED_TEMP                "Bed Temp"
#endif
#ifndef MSG_UBL_CUSTOM_BED_TEMP
  #define MSG_UBL_CUSTOM_BED_TEMP             MSG_UBL_SET_BED_TEMP
#endif
#ifndef MSG_UBL_SET_HOTEND_TEMP
  #define MSG_UBL_SET_HOTEND_TEMP             "Hotend Temp"
#endif
#ifndef MSG_UBL_CUSTOM_HOTEND_TEMP
  #define MSG_UBL_CUSTOM_HOTEND_TEMP          MSG_UBL_SET_HOTEND_TEMP
#endif
#ifndef MSG_UBL_MESH_EDIT
  #define MSG_UBL_MESH_EDIT                   "Mesh Edit"
#endif
#ifndef MSG_UBL_EDIT_CUSTOM_MESH
  #define MSG_UBL_EDIT_CUSTOM_MESH            "Edit Custom Mesh"
#endif
#ifndef MSG_UBL_FINE_TUNE_MESH
  #define MSG_UBL_FINE_TUNE_MESH              "Fine Tuning Mesh"
#endif
#ifndef MSG_UBL_DONE_EDITING_MESH
  #define MSG_UBL_DONE_EDITING_MESH           "Done Editing Mesh"
#endif
#ifndef MSG_UBL_BUILD_CUSTOM_MESH
  #define MSG_UBL_BUILD_CUSTOM_MESH           "Build Custom Mesh"
#endif
#ifndef MSG_UBL_BUILD_MESH_MENU
  #define MSG_UBL_BUILD_MESH_MENU             "Build Mesh"
#endif
#ifndef MSG_UBL_BUILD_PLA_MESH
  #define MSG_UBL_BUILD_PLA_MESH              "Build PLA Mesh"
#endif
#ifndef MSG_UBL_BUILD_ABS_MESH
  #define MSG_UBL_BUILD_ABS_MESH              "Build ABS Mesh"
#endif
#ifndef MSG_UBL_BUILD_COLD_MESH
  #define MSG_UBL_BUILD_COLD_MESH             "Build Cold Mesh"
#endif
#ifndef MSG_UBL_MESH_HEIGHT_ADJUST
  #define MSG_UBL_MESH_HEIGHT_ADJUST          "Adjust Mesh Height"
#endif
#ifndef MSG_UBL_MESH_HEIGHT_AMOUNT
  #define MSG_UBL_MESH_HEIGHT_AMOUNT          "Height Amount"
#endif
#ifndef MSG_UBL_VALIDATE_MESH_MENU
  #define MSG_UBL_VALIDATE_MESH_MENU          "Validate Mesh"
#endif
#ifndef MSG_UBL_VALIDATE_PLA_MESH
  #define MSG_UBL_VALIDATE_PLA_MESH           "Validate PLA Mesh"
#endif
#ifndef MSG_UBL_VALIDATE_ABS_MESH
  #define MSG_UBL_VALIDATE_ABS_MESH           "Validate ABS Mesh"
#endif
#ifndef MSG_UBL_VALIDATE_CUSTOM_MESH
  #define MSG_UBL_VALIDATE_CUSTOM_MESH        "Validate Custom Mesh"
#endif
#ifndef MSG_UBL_CONTINUE_MESH
  #define MSG_UBL_CONTINUE_MESH               "Continue Bed Mesh"
#endif
#ifndef MSG_UBL_MESH_LEVELING
  #define MSG_UBL_MESH_LEVELING               "Mesh Leveling"
#endif
#ifndef MSG_UBL_3POINT_MESH_LEVELING
  #define MSG_UBL_3POINT_MESH_LEVELING        "3-Point Leveling"
#endif
#ifndef MSG_UBL_GRID_MESH_LEVELING
  #define MSG_UBL_GRID_MESH_LEVELING          "Grid Mesh Leveling"
#endif
#ifndef MSG_UBL_MESH_LEVEL
  #define MSG_UBL_MESH_LEVEL                  "Level Mesh"
#endif
#ifndef MSG_UBL_SIDE_POINTS
  #define MSG_UBL_SIDE_POINTS                 "Side Points"
#endif
#ifndef MSG_UBL_MAP_TYPE
  #define MSG_UBL_MAP_TYPE                    "Map Type"
#endif
#ifndef MSG_UBL_OUTPUT_MAP
  #define MSG_UBL_OUTPUT_MAP                  "Output Mesh Map"
#endif
#ifndef MSG_UBL_OUTPUT_MAP_HOST
  #define MSG_UBL_OUTPUT_MAP_HOST             "Output for Host"
#endif
#ifndef MSG_UBL_OUTPUT_MAP_CSV
  #define MSG_UBL_OUTPUT_MAP_CSV              "Output for CSV"
#endif
#ifndef MSG_UBL_OUTPUT_MAP_BACKUP
  #define MSG_UBL_OUTPUT_MAP_BACKUP           "Off Printer Backup"
#endif
#ifndef MSG_UBL_INFO_UBL
  #define MSG_UBL_INFO_UBL                    "Output UBL Info"
#endif
#ifndef MSG_UBL_EDIT_MESH_MENU
  #define MSG_UBL_EDIT_MESH_MENU              "Edit Mesh"
#endif
#ifndef MSG_UBL_FILLIN_AMOUNT
  #define MSG_UBL_FILLIN_AMOUNT               "Fill-in Amount"
#endif
#ifndef MSG_UBL_MANUAL_FILLIN
  #define MSG_UBL_MANUAL_FILLIN               "Manual Fill-in"
#endif
#ifndef MSG_UBL_SMART_FILLIN
  #define MSG_UBL_SMART_FILLIN                "Smart Fill-in"
#endif
#ifndef MSG_UBL_FILLIN_MESH
  #define MSG_UBL_FILLIN_MESH                 "Fill-in Mesh"
#endif
#ifndef MSG_UBL_INVALIDATE_ALL
  #define MSG_UBL_INVALIDATE_ALL              "Invalidate All"
#endif
#ifndef MSG_UBL_INVALIDATE_CLOSEST
  #define MSG_UBL_INVALIDATE_CLOSEST          "Invalidate Closest"
#endif
#ifndef MSG_UBL_FINE_TUNE_ALL
  #define MSG_UBL_FINE_TUNE_ALL               "Fine Tune All"
#endif
#ifndef MSG_UBL_FINE_TUNE_CLOSEST
  #define MSG_UBL_FINE_TUNE_CLOSEST           "Fine Tune Closest"
#endif
#ifndef MSG_UBL_STORAGE_MESH_MENU
  #define MSG_UBL_STORAGE_MESH_MENU           "Mesh Storage"
#endif
#ifndef MSG_UBL_STORAGE_SLOT
  #define MSG_UBL_STORAGE_SLOT                "Memory Slot"
#endif
#ifndef MSG_UBL_LOAD_MESH
  #define MSG_UBL_LOAD_MESH                   "Load Bed Mesh"
#endif
#ifndef MSG_UBL_SAVE_MESH
  #define MSG_UBL_SAVE_MESH                   "Save Bed Mesh"
#endif
#ifndef MSG_MESH_LOADED
  #define MSG_MESH_LOADED                     "Mesh %i loaded"
#endif
#ifndef MSG_MESH_SAVED
  #define MSG_MESH_SAVED                      "Mesh %i saved"
#endif
#ifndef MSG_NO_STORAGE
  #define MSG_NO_STORAGE                      "No storage"
#endif
#ifndef MSG_UBL_SAVE_ERROR
  #define MSG_UBL_SAVE_ERROR                  "Err: UBL Save"
#endif
#ifndef MSG_UBL_RESTORE_ERROR
  #define MSG_UBL_RESTORE_ERROR               "Err: UBL Restore"
#endif
#ifndef MSG_UBL_Z_OFFSET_STOPPED
  #define MSG_UBL_Z_OFFSET_STOPPED            "Z-Offset Stopped"
#endif
#ifndef MSG_UBL_STEP_BY_STEP_MENU
  #define MSG_UBL_STEP_BY_STEP_MENU           "Step-By-Step UBL"
#endif

#ifndef MSG_MOVING
  #define MSG_MOVING                          "Moving..."
#endif
#ifndef MSG_FREE_XY
  #define MSG_FREE_XY                         "Free XY"
#endif
#ifndef MSG_MOVE_X
  #define MSG_MOVE_X                          "Move X"
#endif
#ifndef MSG_MOVE_Y
  #define MSG_MOVE_Y                          "Move Y"
#endif
#ifndef MSG_MOVE_Z
  #define MSG_MOVE_Z                          "Move Z"
#endif
#ifndef MSG_MOVE_E
  #define MSG_MOVE_E                          "Extruder"
#endif
#ifndef MSG_MOVE_01MM
  #define MSG_MOVE_01MM                       "Move 0.1mm"
#endif
#ifndef MSG_MOVE_1MM
  #define MSG_MOVE_1MM                        "Move 1mm"
#endif
#ifndef MSG_MOVE_10MM
  #define MSG_MOVE_10MM                       "Move 10mm"
#endif
#ifndef MSG_SPEED
  #define MSG_SPEED                           "Speed"
#endif
#ifndef MSG_BED_Z
  #define MSG_BED_Z                           "Bed Z"
#endif
#ifndef MSG_NOZZLE
  #define MSG_NOZZLE                          "Nozzle"
#endif
#ifndef MSG_BED
  #define MSG_BED                             "Bed"
#endif
#ifndef MSG_FAN_SPEED
  #define MSG_FAN_SPEED                       "Fan speed"
#endif
#ifndef MSG_EXTRA_FAN_SPEED
  #define MSG_EXTRA_FAN_SPEED                 "Extra fan speed"
#endif
#ifndef MSG_FLOW
  #define MSG_FLOW                            "Flow"
#endif
#ifndef MSG_CONTROL
  #define MSG_CONTROL                         "Control"
#endif
#ifndef MSG_MIN
  #define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"
#endif
#ifndef MSG_MAX
  #define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"
#endif
#ifndef MSG_FACTOR
  #define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Fact"
#endif
#ifndef MSG_AUTOTEMP
  #define MSG_AUTOTEMP                        "Autotemp"
#endif
#ifndef MSG_ON
  #define MSG_ON                              "On "
#endif
#ifndef MSG_OFF
  #define MSG_OFF                             "Off"
#endif
#ifndef MSG_PID_P
  #define MSG_PID_P                           "PID-P"
#endif
#ifndef MSG_PID_I
  #define MSG_PID_I                           "PID-I"
#endif
#ifndef MSG_PID_D
  #define MSG_PID_D                           "PID-D"
#endif
#ifndef MSG_PID_C
  #define MSG_PID_C                           "PID-C"
#endif
#ifndef MSG_SELECT
  #define MSG_SELECT                          "Select"
#endif
#ifndef MSG_ACC
  #define MSG_ACC                             "Accel"
#endif
#ifndef MSG_JERK
  #define MSG_JERK                            "Jerk"
#endif
#ifndef MSG_VX_JERK
  #define MSG_VX_JERK                         "Vx-jerk"
#endif
#ifndef MSG_VY_JERK
  #define MSG_VY_JERK                         "Vy-jerk"
#endif
#ifndef MSG_VZ_JERK
  #define MSG_VZ_JERK                         "Vz-jerk"
#endif
#ifndef MSG_VE_JERK
  #define MSG_VE_JERK                         "Ve-jerk"
#endif
#ifndef MSG_VELOCITY
  #define MSG_VELOCITY                        "Velocity"
#endif
#ifndef MSG_VMAX
  #define MSG_VMAX                            "Vmax "
#endif
#ifndef MSG_VMIN
  #define MSG_VMIN                            "Vmin"
#endif
#ifndef MSG_VTRAV_MIN
  #define MSG_VTRAV_MIN                       "VTrav min"
#endif
#ifndef MSG_ACCELERATION
  #define MSG_ACCELERATION                    "Acceleration"
#endif
#ifndef MSG_AMAX
  #define MSG_AMAX                            "Amax "
#endif
#ifndef MSG_A_RETRACT
  #define MSG_A_RETRACT                       "A-retract"
#endif
#ifndef MSG_A_TRAVEL
  #define MSG_A_TRAVEL                        "A-travel"
#endif
#ifndef MSG_STEPS_PER_MM
  #define MSG_STEPS_PER_MM                    "Steps/mm"
#endif
#ifndef MSG_XSTEPS
  #define MSG_XSTEPS                          "Xsteps/mm"
#endif
#ifndef MSG_YSTEPS
  #define MSG_YSTEPS                          "Ysteps/mm"
#endif
#ifndef MSG_ZSTEPS
  #define MSG_ZSTEPS                          "Zsteps/mm"
#endif
#ifndef MSG_ESTEPS
  #define MSG_ESTEPS                          "Esteps/mm"
#endif
#ifndef MSG_E1STEPS
  #define MSG_E1STEPS                         "E1steps/mm"
#endif
#ifndef MSG_E2STEPS
  #define MSG_E2STEPS                         "E2steps/mm"
#endif
#ifndef MSG_E3STEPS
  #define MSG_E3STEPS                         "E3steps/mm"
#endif
#ifndef MSG_E4STEPS
  #define MSG_E4STEPS                         "E4steps/mm"
#endif
#ifndef MSG_E5STEPS
  #define MSG_E5STEPS                         "E5steps/mm"
#endif
#ifndef MSG_TEMPERATURE
  #define MSG_TEMPERATURE                     "Temperature"
#endif
#ifndef MSG_MOTION
  #define MSG_MOTION                          "Motion"
#endif
#ifndef MSG_FILAMENT
  #define MSG_FILAMENT                        "Filament"
#endif
#ifndef MSG_VOLUMETRIC_ENABLED
  #define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#endif
#ifndef MSG_FILAMENT_DIAM
  #define MSG_FILAMENT_DIAM                   "Fil. Dia."
#endif
#ifndef MSG_ADVANCE_K
  #define MSG_ADVANCE_K                       "Advance K"
#endif
#ifndef MSG_CONTRAST
  #define MSG_CONTRAST                        "LCD contrast"
#endif
#ifndef MSG_STORE_EEPROM
  #define MSG_STORE_EEPROM                    "Store settings"
#endif
#ifndef MSG_LOAD_EEPROM
  #define MSG_LOAD_EEPROM                     "Load settings"
#endif
#ifndef MSG_RESTORE_FAILSAFE
  #define MSG_RESTORE_FAILSAFE                "Restore failsafe"
#endif
#ifndef MSG_INIT_EEPROM
  #define MSG_INIT_EEPROM                     "Initialize EEPROM"
#endif
#ifndef MSG_REFRESH
  #define MSG_REFRESH                         "Refresh"
#endif
#ifndef MSG_WATCH
  #define MSG_WATCH                           "Info screen"
#endif
#ifndef MSG_PREPARE
  #define MSG_PREPARE                         "Prepare"
#endif
#ifndef MSG_TUNE
  #define MSG_TUNE                            "Tune"
#endif
#ifndef MSG_PAUSE_PRINT
  #define MSG_PAUSE_PRINT                     "Pause print"
#endif
#ifndef MSG_RESUME_PRINT
  #define MSG_RESUME_PRINT                    "Resume print"
#endif
#ifndef MSG_STOP_PRINT
  #define MSG_STOP_PRINT                      "Stop print"
#endif
#ifndef MSG_CARD_MENU
  #define MSG_CARD_MENU                       "Print from SD"
#endif
#ifndef MSG_NO_CARD
  #define MSG_NO_CARD                         "No SD card"
#endif
#ifndef MSG_DWELL
  #define MSG_DWELL                           "Sleep..."
#endif
#ifndef MSG_USERWAIT
  #define MSG_USERWAIT                        "Click to resume..."
#endif
#ifndef MSG_PRINT_PAUSED
  #define MSG_PRINT_PAUSED                    "Print paused"
#endif
#ifndef MSG_RESUMING
  #define MSG_RESUMING                        "Resuming print"
#endif
#ifndef MSG_PRINT_ABORTED
  #define MSG_PRINT_ABORTED                   "Print aborted"
#endif
#ifndef MSG_NO_MOVE
  #define MSG_NO_MOVE                         "No move."
#endif
#ifndef MSG_KILLED
  #define MSG_KILLED                          "KILLED. "
#endif
#ifndef MSG_STOPPED
  #define MSG_STOPPED                         "STOPPED. "
#endif
#ifndef MSG_CONTROL_RETRACT
  #define MSG_CONTROL_RETRACT                 "Retract mm"
#endif
#ifndef MSG_CONTROL_RETRACT_SWAP
  #define MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"
#endif
#ifndef MSG_CONTROL_RETRACTF
  #define MSG_CONTROL_RETRACTF                "Retract  V"
#endif
#ifndef MSG_CONTROL_RETRACT_ZLIFT
  #define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"
#endif
#ifndef MSG_CONTROL_RETRACT_RECOVER
  #define MSG_CONTROL_RETRACT_RECOVER         "UnRet mm"
#endif
#ifndef MSG_CONTROL_RETRACT_RECOVER_SWAP
  #define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet mm"
#endif
#ifndef MSG_CONTROL_RETRACT_RECOVERF
  #define MSG_CONTROL_RETRACT_RECOVERF        "UnRet V"
#endif
#ifndef MSG_CONTROL_RETRACT_RECOVER_SWAPF
  #define MSG_CONTROL_RETRACT_RECOVER_SWAPF   "S UnRet V"
#endif
#ifndef MSG_AUTORETRACT
  #define MSG_AUTORETRACT                     "AutoRetr."
#endif
#ifndef MSG_FILAMENTCHANGE
  #define MSG_FILAMENTCHANGE                  "Change filament"
#endif
#ifndef MSG_INIT_SDCARD
  #define MSG_INIT_SDCARD                     "Init. SD card"
#endif
#ifndef MSG_CNG_SDCARD
  #define MSG_CNG_SDCARD                      "Change SD card"
#endif
#ifndef MSG_ZPROBE_OUT
  #define MSG_ZPROBE_OUT                      "Z probe out. bed"
#endif
#ifndef MSG_BLTOUCH
  #define MSG_BLTOUCH                         "BLTouch"
#endif
#ifndef MSG_BLTOUCH_SELFTEST
  #define MSG_BLTOUCH_SELFTEST                "BLTouch Self-Test"
#endif
#ifndef MSG_BLTOUCH_RESET
  #define MSG_BLTOUCH_RESET                   "Reset BLTouch"
#endif
#ifndef MSG_BLTOUCH_DEPLOY
  #define MSG_BLTOUCH_DEPLOY                  "Deploy BLTouch"
#endif
#ifndef MSG_BLTOUCH_STOW
  #define MSG_BLTOUCH_STOW                    "Stow BLTouch"
#endif
#ifndef MSG_HOME
  #define MSG_HOME                            "Home" // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#endif
#ifndef MSG_FIRST
  #define MSG_FIRST                           "first"
#endif
#ifndef MSG_ZPROBE_ZOFFSET
  #define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#endif
#ifndef MSG_BABYSTEP_X
  #define MSG_BABYSTEP_X                      "Babystep X"
#endif
#ifndef MSG_BABYSTEP_Y
  #define MSG_BABYSTEP_Y                      "Babystep Y"
#endif
#ifndef MSG_BABYSTEP_Z
  #define MSG_BABYSTEP_Z                      "Babystep Z"
#endif
#ifndef MSG_ENDSTOP_ABORT
  #define MSG_ENDSTOP_ABORT                   "Endstop abort"
#endif
#ifndef MSG_HEATING_FAILED_LCD
  #define MSG_HEATING_FAILED_LCD              "Heating failed"
#endif
#ifndef MSG_ERR_REDUNDANT_TEMP
  #define MSG_ERR_REDUNDANT_TEMP              "Err: REDUNDANT TEMP"
#endif
#ifndef MSG_THERMAL_RUNAWAY
  #define MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
#endif
#ifndef MSG_ERR_MAXTEMP
  #define MSG_ERR_MAXTEMP                     "Err: MAXTEMP"
#endif
#ifndef MSG_ERR_MINTEMP
  #define MSG_ERR_MINTEMP                     "Err: MINTEMP"
#endif
#ifndef MSG_ERR_MAXTEMP_BED
  #define MSG_ERR_MAXTEMP_BED                 "Err: MAXTEMP BED"
#endif
#ifndef MSG_ERR_MINTEMP_BED
  #define MSG_ERR_MINTEMP_BED                 "Err: MINTEMP BED"
#endif
#ifndef MSG_ERR_Z_HOMING
  #define MSG_ERR_Z_HOMING                    "G28 Z Forbidden"
#endif
#ifndef MSG_HALTED
  #define MSG_HALTED                          "PRINTER HALTED"
#endif
#ifndef MSG_PLEASE_RESET
  #define MSG_PLEASE_RESET                    "Please reset"
#endif
#ifndef MSG_SHORT_DAY
  #define MSG_SHORT_DAY                       "d" // One character only
#endif
#ifndef MSG_SHORT_HOUR
  #define MSG_SHORT_HOUR                      "h" // One character only
#endif
#ifndef MSG_SHORT_MINUTE
  #define MSG_SHORT_MINUTE                    "m" // One character only
#endif
#ifndef MSG_HEATING
  #define MSG_HEATING                         "Heating..."
#endif
#ifndef MSG_HEATING_COMPLETE
  #define MSG_HEATING_COMPLETE                "Heating done."
#endif
#ifndef MSG_BED_HEATING
  #define MSG_BED_HEATING                     "Bed Heating."
#endif
#ifndef MSG_BED_DONE
  #define MSG_BED_DONE                        "Bed done."
#endif
#ifndef MSG_DELTA_CALIBRATE
  #define MSG_DELTA_CALIBRATE                 "Delta Calibration"
#endif
#ifndef MSG_DELTA_CALIBRATE_X
  #define MSG_DELTA_CALIBRATE_X               "Calibrate X"
#endif
#ifndef MSG_DELTA_CALIBRATE_Y
  #define MSG_DELTA_CALIBRATE_Y               "Calibrate Y"
#endif
#ifndef MSG_DELTA_CALIBRATE_Z
  #define MSG_DELTA_CALIBRATE_Z               "Calibrate Z"
#endif
#ifndef MSG_DELTA_CALIBRATE_CENTER
  #define MSG_DELTA_CALIBRATE_CENTER          "Calibrate Center"
#endif
#ifndef MSG_DELTA_SETTINGS
  #define MSG_DELTA_SETTINGS                  "Delta Settings"
#endif
#ifndef MSG_DELTA_AUTO_CALIBRATE
  #define MSG_DELTA_AUTO_CALIBRATE            "Auto Calibration"
#endif
#ifndef MSG_DELTA_HEIGHT_CALIBRATE
  #define MSG_DELTA_HEIGHT_CALIBRATE          "Set Delta Height"
#endif
#ifndef MSG_DELTA_DIAG_ROG
  #define MSG_DELTA_DIAG_ROG                  "Diag Rod"
#endif
#ifndef MSG_DELTA_HEIGHT
  #define MSG_DELTA_HEIGHT                    "Height"
#endif
#ifndef MSG_DELTA_RADIUS
  #define MSG_DELTA_RADIUS                    "Radius"
#endif
#ifndef MSG_INFO_MENU
  #define MSG_INFO_MENU                       "About Printer"
#endif
#ifndef MSG_INFO_PRINTER_MENU
  #define MSG_INFO_PRINTER_MENU               "Printer Info"
#endif
#ifndef MSG_3POINT_LEVELING
  #define MSG_3POINT_LEVELING                 "3-Point Leveling"
#endif
#ifndef MSG_LINEAR_LEVELING
  #define MSG_LINEAR_LEVELING                 "Linear Leveling"
#endif
#ifndef MSG_BILINEAR_LEVELING
  #define MSG_BILINEAR_LEVELING               "Bilinear Leveling"
#endif
#ifndef MSG_UBL_LEVELING
  #define MSG_UBL_LEVELING                    "Unified Bed Leveling"
#endif
#ifndef MSG_MESH_LEVELING
  #define MSG_MESH_LEVELING                   "Mesh Leveling"
#endif
#ifndef MSG_INFO_STATS_MENU
  #define MSG_INFO_STATS_MENU                 "Printer Stats"
#endif
#ifndef MSG_INFO_BOARD_MENU
  #define MSG_INFO_BOARD_MENU                 "Board Info"
#endif
#ifndef MSG_INFO_THERMISTOR_MENU
  #define MSG_INFO_THERMISTOR_MENU            "Thermistors"
#endif
#ifndef MSG_INFO_EXTRUDERS
  #define MSG_INFO_EXTRUDERS                  "Extruders"
#endif
#ifndef MSG_INFO_BAUDRATE
  #define MSG_INFO_BAUDRATE                   "Baud"
#endif
#ifndef MSG_INFO_PROTOCOL
  #define MSG_INFO_PROTOCOL                   "Protocol"
#endif
#ifndef MSG_CASE_LIGHT
  #define MSG_CASE_LIGHT                      "Case light"
#endif
#ifndef MSG_CASE_LIGHT_BRIGHTNESS
  #define MSG_CASE_LIGHT_BRIGHTNESS           "Light BRIGHTNESS"
#endif
#if LCD_WIDTH >= 20
  #ifndef MSG_INFO_PRINT_COUNT
    #define MSG_INFO_PRINT_COUNT              "Print Count"
  #endif
  #ifndef MSG_INFO_COMPLETED_PRINTS
    #define MSG_INFO_COMPLETED_PRINTS         "Completed"
  #endif
  #ifndef MSG_INFO_PRINT_TIME
    #define MSG_INFO_PRINT_TIME               "Total print time"
  #endif
  #ifndef MSG_INFO_PRINT_LONGEST
    #define MSG_INFO_PRINT_LONGEST            "Longest job time"
  #endif
  #ifndef MSG_INFO_PRINT_FILAMENT
    #define MSG_INFO_PRINT_FILAMENT           "Extruded total"
  #endif
#else
  #ifndef MSG_INFO_PRINT_COUNT
    #define MSG_INFO_PRINT_COUNT              "Prints"
  #endif
  #ifndef MSG_INFO_COMPLETED_PRINTS
    #define MSG_INFO_COMPLETED_PRINTS         "Completed"
  #endif
  #ifndef MSG_INFO_PRINT_TIME
    #define MSG_INFO_PRINT_TIME               "Total"
  #endif
  #ifndef MSG_INFO_PRINT_LONGEST
    #define MSG_INFO_PRINT_LONGEST            "Longest"
  #endif
  #ifndef MSG_INFO_PRINT_FILAMENT
    #define MSG_INFO_PRINT_FILAMENT           "Extruded"
  #endif
#endif

#ifndef MSG_INFO_MIN_TEMP
  #define MSG_INFO_MIN_TEMP                   "Min Temp"
#endif
#ifndef MSG_INFO_MAX_TEMP
  #define MSG_INFO_MAX_TEMP                   "Max Temp"
#endif
#ifndef MSG_INFO_PSU
  #define MSG_INFO_PSU                        "PSU"
#endif
#ifndef MSG_DRIVE_STRENGTH
  #define MSG_DRIVE_STRENGTH                  "Drive Strength"
#endif
#ifndef MSG_DAC_PERCENT
  #define MSG_DAC_PERCENT                     "Driver %"
#endif
#ifndef MSG_DAC_EEPROM_WRITE
  #define MSG_DAC_EEPROM_WRITE                "DAC EEPROM Write"
#endif
#ifndef MSG_FILAMENT_CHANGE_HEADER
  #define MSG_FILAMENT_CHANGE_HEADER          "PRINT PAUSED"
#endif
#ifndef MSG_FILAMENT_CHANGE_OPTION_HEADER
  #define MSG_FILAMENT_CHANGE_OPTION_HEADER   "RESUME OPTIONS:"
#endif
#ifndef MSG_FILAMENT_CHANGE_OPTION_EXTRUDE
  #define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Extrude more"
#endif
#ifndef MSG_FILAMENT_CHANGE_OPTION_RESUME
  #define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Resume print"
#endif
#ifndef MSG_FILAMENT_CHANGE_MINTEMP
  #define MSG_FILAMENT_CHANGE_MINTEMP         "Minimum Temp is "
#endif
#ifndef MSG_FILAMENT_CHANGE_NOZZLE
  #define MSG_FILAMENT_CHANGE_NOZZLE          "  Nozzle: "
#endif
#ifndef MSG_ERR_HOMING_FAILED
  #define MSG_ERR_HOMING_FAILED               "Homing failed"
#endif
#ifndef MSG_ERR_PROBING_FAILED
  #define MSG_ERR_PROBING_FAILED              "Probing failed"
#endif

//
// Filament Change screens show up to 3 lines on a 4-line display
//                        ...or up to 2 lines on a 3-line display
//
#if LCD_HEIGHT >= 4
  #ifndef MSG_FILAMENT_CHANGE_INIT_1
    #define MSG_FILAMENT_CHANGE_INIT_1          "Wait for start"
    #define MSG_FILAMENT_CHANGE_INIT_2          "of the filament"
    #define MSG_FILAMENT_CHANGE_INIT_3          "change"
  #endif
  #ifndef MSG_FILAMENT_CHANGE_UNLOAD_1
    #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Wait for"
    #define MSG_FILAMENT_CHANGE_UNLOAD_2        "filament unload"
  #endif
  #ifndef MSG_FILAMENT_CHANGE_INSERT_1
    #define MSG_FILAMENT_CHANGE_INSERT_1        "Insert filament"
    #define MSG_FILAMENT_CHANGE_INSERT_2        "and press button"
    #define MSG_FILAMENT_CHANGE_INSERT_3        "to continue..."
  #endif
  #ifndef MSG_FILAMENT_CHANGE_HEAT_1
    #define MSG_FILAMENT_CHANGE_HEAT_1          "Press button to"
    #define MSG_FILAMENT_CHANGE_HEAT_2          "heat nozzle."
  #endif
  #ifndef MSG_FILAMENT_CHANGE_HEATING_1
    #define MSG_FILAMENT_CHANGE_HEATING_1       "Heating nozzle"
    #define MSG_FILAMENT_CHANGE_HEATING_2       "Please wait..."
  #endif
  #ifndef MSG_FILAMENT_CHANGE_LOAD_1
    #define MSG_FILAMENT_CHANGE_LOAD_1          "Wait for"
    #define MSG_FILAMENT_CHANGE_LOAD_2          "filament load"
  #endif
  #ifndef MSG_FILAMENT_CHANGE_EXTRUDE_1
    #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Wait for"
    #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "filament extrude"
  #endif
  #ifndef MSG_FILAMENT_CHANGE_RESUME_1
    #define MSG_FILAMENT_CHANGE_RESUME_1        "Wait for print"
    #define MSG_FILAMENT_CHANGE_RESUME_2        "to resume"
  #endif
#else // LCD_HEIGHT < 4
  #ifndef MSG_FILAMENT_CHANGE_INIT_1
    #define MSG_FILAMENT_CHANGE_INIT_1          "Please wait..."
  #endif
  #ifndef MSG_FILAMENT_CHANGE_UNLOAD_1
    #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Ejecting..."
  #endif
  #ifndef MSG_FILAMENT_CHANGE_INSERT_1
    #define MSG_FILAMENT_CHANGE_INSERT_1        "Insert and Click"
  #endif
  #ifndef MSG_FILAMENT_CHANGE_HEATING_1
    #define MSG_FILAMENT_CHANGE_HEATING_1       "Heating..."
  #endif
  #ifndef MSG_FILAMENT_CHANGE_LOAD_1
    #define MSG_FILAMENT_CHANGE_LOAD_1          "Loading..."
  #endif
  #ifndef MSG_FILAMENT_CHANGE_EXTRUDE_1
    #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Extruding..."
  #endif
  #ifndef MSG_FILAMENT_CHANGE_RESUME_1
    #define MSG_FILAMENT_CHANGE_RESUME_1        "Resuming..."
  #endif
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_EN_H
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
 * Spanish
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_ES_H
#define LANGUAGE_ES_H


#define DISPLAY_CHARSET_ASCII

#define WELCOME_MSG                         MACHINE_NAME " lista."
#define MSG_BACK                            "Atras"
#define MSG_SD_INSERTED                     "Tarjeta colocada"
#define MSG_SD_REMOVED                      "Tarjeta retirada"
#define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters
#define MSG_MAIN                            "Menu principal"
#define MSG_AUTOSTART                       "Inicio automatico"
#define MSG_DISABLE_STEPPERS                "Apagar motores"
#define MSG_DEBUG_MENU                      "Menu depurar"
#define MSG_PROGRESS_BAR_TEST               "Prueba barra avance"
#define MSG_AUTO_HOME                       "Llevar al origen"
#define MSG_AUTO_HOME_X                     "Origen X"
#define MSG_AUTO_HOME_Y                     "Origen Y"
#define MSG_AUTO_HOME_Z                     "Origen Z"
#define MSG_LEVEL_BED_HOMING                "Origen XYZ"
#define MSG_LEVEL_BED_WAITING               "Iniciar (Presione)"
#define MSG_LEVEL_BED_NEXT_POINT            "Siguiente punto"
#define MSG_LEVEL_BED_DONE                  "Nivelacion lista!"
#define MSG_SET_HOME_OFFSETS                "Ajustar desfases"
#define MSG_HOME_OFFSETS_APPLIED            "Desfase aplicado"
#define MSG_SET_ORIGIN                      "Establecer origen"
#define MSG_PREHEAT_1                       "Precalentar PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 "Todo"
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 " End"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 "Plataforma"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 "Config"
#define MSG_PREHEAT_2                       "Precalentar ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 "Todo"
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 " End"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 "Plataforma"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 "Config"
#define MSG_COOLDOWN                        "Enfriar"
#define MSG_SWITCH_PS_ON                    "Encender"
#define MSG_SWITCH_PS_OFF                   "Apagar"
#define MSG_EXTRUDE                         "Extruir"
#define MSG_RETRACT                         "Retraer"
#define MSG_MOVE_AXIS                       "Mover ejes"
#define MSG_BED_LEVELING                    "Nivelar plataforma"
#define MSG_LEVEL_BED                       "Nivelar plataforma"
#define MSG_MOVING                          "Moviendo..."
#define MSG_FREE_XY                         "Libre XY"
#define MSG_MOVE_X                          "Mover X"
#define MSG_MOVE_Y                          "Mover Y"
#define MSG_MOVE_Z                          "Mover Z"
#define MSG_MOVE_E                          "Extrusor"
#define MSG_MOVE_01MM                       "Mover 0.1mm"
#define MSG_MOVE_1MM                        "Mover 1mm"
#define MSG_MOVE_10MM                       "Mover 10mm"
#define MSG_SPEED                           "Velocidad"
#define MSG_BED_Z                           "Plataforma Z"
#define MSG_NOZZLE                          "Boquilla"
#define MSG_BED                             "Plataforma"
#define MSG_FAN_SPEED                       "Ventilador"
#define MSG_FLOW                            "Flujo"
#define MSG_CONTROL                         "Control"
#define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "Temperatura Auto."
#define MSG_ON                              "Encender"
#define MSG_OFF                             "Apagar"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Seleccionar"
#define MSG_ACC                             "Aceleracion"
#define MSG_JERK                            "Jerk"
#define MSG_VX_JERK                         "Vx-jerk"
#define MSG_VY_JERK                         "Vy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "Vel. viaje min"
#define MSG_ACCELERATION                    MSG_ACC
#define MSG_AMAX                            "Acel. max"
#define MSG_A_RETRACT                       "Acel. retrac."
#define MSG_A_TRAVEL                        "Acel. Viaje"
#define MSG_STEPS_PER_MM                    "Pasos/mm"
#define MSG_XSTEPS                          "X pasos/mm"
#define MSG_YSTEPS                          "Y pasos/mm"
#define MSG_ZSTEPS                          "Z pasos/mm"
#define MSG_ESTEPS                          "E pasos/mm"
#define MSG_E1STEPS                         "E1 pasos/mm"
#define MSG_E2STEPS                         "E2 pasos/mm"
#define MSG_E3STEPS                         "E3 pasos/mm"
#define MSG_E4STEPS                         "E4 pasos/mm"
#define MSG_E5STEPS                         "E5 pasos/mm"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Movimiento"
#define MSG_FILAMENT                        "Filamento"
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define MSG_FILAMENT_DIAM                   "Fil. Dia."
#define MSG_ADVANCE_K                       "Avance K"
#define MSG_CONTRAST                        "Contraste"
#define MSG_STORE_EEPROM                    "Guardar memoria"
#define MSG_LOAD_EEPROM                     "Cargar memoria"
#define MSG_RESTORE_FAILSAFE                "Restaurar memoria"
#define MSG_REFRESH                         "Volver a cargar"
#define MSG_WATCH                           "Informacion"
#define MSG_PREPARE                         "Preparar"
#define MSG_TUNE                            "Ajustar"
#define MSG_PAUSE_PRINT                     "Pausar impresion"
#define MSG_RESUME_PRINT                    "Reanudar impresion"
#define MSG_STOP_PRINT                      "Detener impresion"
#define MSG_CARD_MENU                       "Menu de SD"
#define MSG_NO_CARD                         "No hay tarjeta SD"
#define MSG_DWELL                           "Reposo..."
#define MSG_USERWAIT                        "Esperando ordenes"
#define MSG_RESUMING                        "Resumiendo impre."
#define MSG_PRINT_ABORTED                   "Impresion cancelada"
#define MSG_NO_MOVE                         "Sin movimiento"
#define MSG_KILLED                          "Parada de emergencia"
#define MSG_STOPPED                         "Detenida"
#define MSG_CONTROL_RETRACT                 "Retraer mm"
#define MSG_CONTROL_RETRACT_SWAP            "Interc. Retraer mm"
#define MSG_CONTROL_RETRACTF                "Retraer  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Levantar mm"
#define MSG_CONTROL_RETRACT_RECOVER         "DesRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Interc. DesRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "DesRet V"
#define MSG_AUTORETRACT                     "Retraccion Auto."
#define MSG_FILAMENTCHANGE                  "Cambiar filamento"
#define MSG_INIT_SDCARD                     "Iniciando tarjeta"
#define MSG_CNG_SDCARD                      "Cambiar tarjeta"
#define MSG_ZPROBE_OUT                      "Sonda Z fuera"
#define MSG_BLTOUCH_SELFTEST                "BLTouch Auto-Prueba"
#define MSG_BLTOUCH_RESET                   "Reiniciar BLTouch"
#define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "inic."
#define MSG_ZPROBE_ZOFFSET                  "Desfase Z"
#define MSG_BABYSTEP_X                      "Micropaso X"
#define MSG_BABYSTEP_Y                      "Micropaso Y"
#define MSG_BABYSTEP_Z                      "Micropaso Z"
#define MSG_ENDSTOP_ABORT                   "Cancelado - Endstop"
#define MSG_HEATING_FAILED_LCD              "Error: al calentar"
#define MSG_ERR_REDUNDANT_TEMP              "Error: temperatura"
#define MSG_THERMAL_RUNAWAY                 "Error: temperatura"
#define MSG_ERR_MAXTEMP                     "Error: Temp Maxima"
#define MSG_ERR_MINTEMP                     "Error: Temp Minima"
#define MSG_ERR_MAXTEMP_BED                 "Error: Temp Max Plat"
#define MSG_ERR_MINTEMP_BED                 "Error: Temp Min Plat"
#define MSG_ERR_Z_HOMING                    "G28 Z Prohibido"
#define MSG_HALTED                          "IMPRESORA PARADA"
#define MSG_PLEASE_RESET                    "Por favor, reinicie"
#define MSG_SHORT_DAY                       "d" // One character only
#define MSG_SHORT_HOUR                      "h" // One character only
#define MSG_SHORT_MINUTE                    "m" // One character only
#define MSG_HEATING                         "Calentando..."
#define MSG_HEATING_COMPLETE                "Calentamiento listo"
#define MSG_BED_HEATING                     "Calentando Plat..."
#define MSG_BED_DONE                        "Plataforma Caliente"
#define MSG_DELTA_CALIBRATE                 "Calibracion Delta"
#define MSG_DELTA_CALIBRATE_X               "Calibrar X"
#define MSG_DELTA_CALIBRATE_Y               "Calibrar Y"
#define MSG_DELTA_CALIBRATE_Z               "Calibrar Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Calibrar Centro"
#define MSG_DELTA_AUTO_CALIBRATE            "Auto Calibracion"
#define MSG_DELTA_HEIGHT_CALIBRATE          "Est. Altura Delta"
#define MSG_INFO_MENU                       "Inf. Impresora"
#define MSG_INFO_PRINTER_MENU               "Inf. Impresora"
#define MSG_INFO_STATS_MENU                 "Estadisticas Imp."
#define MSG_INFO_BOARD_MENU                 "Inf. Controlador"
#define MSG_INFO_THERMISTOR_MENU            "Termistores"
#define MSG_INFO_EXTRUDERS                  "Extrusores"
#define MSG_INFO_BAUDRATE                   "Baudios"
#define MSG_INFO_PROTOCOL                   "Protocolo"
#define MSG_CASE_LIGHT                      "Luz cabina"

#if LCD_WIDTH > 19
  #define MSG_INFO_PRINT_COUNT              "Conteo de impresion"
  #define MSG_INFO_COMPLETED_PRINTS         "Completadas"
  #define MSG_INFO_PRINT_TIME               "Tiempo total de imp."
  #define MSG_INFO_PRINT_LONGEST            "Impresion mas larga"
  #define MSG_INFO_PRINT_FILAMENT           "Total de Extrusion"
#else
  #define MSG_INFO_PRINT_COUNT              "Impresiones"
  #define MSG_INFO_COMPLETED_PRINTS         "Completadas"
  #define MSG_INFO_PRINT_TIME               "Total"
  #define MSG_INFO_PRINT_LONGEST            "Mas larga"
  #define MSG_INFO_PRINT_FILAMENT           "Extrusion"
#endif

#define MSG_INFO_MIN_TEMP                   "Temperatura minima"
#define MSG_INFO_MAX_TEMP                   "Temperatura maxima"
#define MSG_INFO_PSU                        "Fuente de poder"
#define MSG_DRIVE_STRENGTH                  "Potencia driver"
#define MSG_DAC_PERCENT                     "Driver %"
#define MSG_DAC_EEPROM_WRITE                "Escribe DAC EEPROM"

#define MSG_FILAMENT_CHANGE_HEADER          "IMPR. PAUSADA"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "OPC. REINICIO:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Extruir mas"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Resumir imp."

#define MSG_FILAMENT_CHANGE_MINTEMP         "Temp Minima es "
#define MSG_FILAMENT_CHANGE_NOZZLE          "  Boquilla: "

#define MSG_FILAMENT_CHANGE_INIT_1          "Esperando iniciar"

#define MSG_FILAMENT_CHANGE_INSERT_1        "Inserte filamento"
#define MSG_FILAMENT_CHANGE_INSERT_2        "y presione el boton"

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_2        "del filamento"
  #define MSG_FILAMENT_CHANGE_INIT_3        "cambiar"
  #define MSG_FILAMENT_CHANGE_INSERT_3      "para continuar..."
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_2        "del fil. cambiar"
  #define MSG_FILAMENT_CHANGE_INSERT_1      "Inserte filamento"
#endif // LCD_HEIGHT < 4

#define MSG_FILAMENT_CHANGE_UNLOAD_1        "Esperado por"
#define MSG_FILAMENT_CHANGE_UNLOAD_2        "filamento expulsado"
#define MSG_FILAMENT_CHANGE_LOAD_1          "Esperado por"
#define MSG_FILAMENT_CHANGE_LOAD_2          "Cargar filamento"
#define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Esperado por"
#define MSG_FILAMENT_CHANGE_EXTRUDE_2       "Extruir filamento"
#define MSG_FILAMENT_CHANGE_RESUME_1        "Esperando imp."
#define MSG_FILAMENT_CHANGE_RESUME_2        "para resumir"
#define MSG_FILAMENT_CHANGE_HEAT_1          "Oprima boton para"
#define MSG_FILAMENT_CHANGE_HEAT_2          "Calentar la boquilla"
#define MSG_FILAMENT_CHANGE_HEATING_1       "Calentando boquilla"
#define MSG_FILAMENT_CHANGE_HEATING_2       "Espere por favor"

#endif // LANGUAGE_ES_H
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
 * Finnish
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_FI_H
#define LANGUAGE_FI_H

#define MAPPER_C2C3
#define UTF8_MAPPER C2C3
#define DISPLAY_CHARSET_ISO10646_1

#define WELCOME_MSG                         MACHINE_NAME " valmis."
#define MSG_SD_INSERTED                     "Kortti asetettu"
#define MSG_SD_REMOVED                      "Kortti poistettu"
#define MSG_MAIN                            "Palaa"
#define MSG_AUTOSTART                       "Automaatti"
#define MSG_DISABLE_STEPPERS                "Vapauta moottorit"
#define MSG_AUTO_HOME                       "Aja referenssiin"
#define MSG_LEVEL_BED_HOMING                "Homing XYZ"
#define MSG_LEVEL_BED_WAITING               "Click to Begin"
#define MSG_LEVEL_BED_DONE                  "Leveling Done!"
#define MSG_SET_HOME_OFFSETS                "Set home offsets"
#define MSG_HOME_OFFSETS_APPLIED            "Offsets applied"
#define MSG_SET_ORIGIN                      "Aseta origo"
#define MSG_PREHEAT_1                       "Esilämmitä PLA"
#define MSG_PREHEAT_1_N                     "Esilämmitä PLA "
#define MSG_PREHEAT_1_ALL                   "Esilä. PLA Kaikki"
#define MSG_PREHEAT_1_BEDONLY               "Esilä. PLA Alusta"
#define MSG_PREHEAT_1_SETTINGS              "Esilämm. PLA konf"
#define MSG_PREHEAT_2                       "Esilämmitä ABS"
#define MSG_PREHEAT_2_N                     "Esilämmitä ABS "
#define MSG_PREHEAT_2_ALL                   "Esilä. ABS Kaikki"
#define MSG_PREHEAT_2_BEDONLY               "Esilä. ABS Alusta"
#define MSG_PREHEAT_2_SETTINGS              "Esilämm. ABS konf"
#define MSG_COOLDOWN                        "Jäähdytä"
#define MSG_SWITCH_PS_ON                    "Virta päälle"
#define MSG_SWITCH_PS_OFF                   "Virta pois"
#define MSG_EXTRUDE                         "Pursota"
#define MSG_RETRACT                         "Vedä takaisin"
#define MSG_MOVE_AXIS                       "Liikuta akseleita"
#define MSG_MOVE_X                          "Liikuta X"
#define MSG_MOVE_Y                          "Liikuta Y"
#define MSG_MOVE_Z                          "Liikuta Z"
#define MSG_MOVE_E                          "Extruder"
#define MSG_MOVE_01MM                       "Liikuta 0.1mm"
#define MSG_MOVE_1MM                        "Liikuta 1mm"
#define MSG_MOVE_10MM                       "Liikuta 10mm"
#define MSG_SPEED                           "Nopeus"
#define MSG_NOZZLE                          "Suutin"
#define MSG_BED                             "Alusta"
#define MSG_FAN_SPEED                       "Tuul. nopeus"
#define MSG_FLOW                            "Virtaus"
#define MSG_CONTROL                         "Kontrolli"
#define MSG_MIN                             LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Kerr"
#define MSG_AUTOTEMP                        "Autotemp"
#define MSG_ON                              "On "
#define MSG_OFF                             "Off"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "Kiihtyv"
#define MSG_JERK                            "Jerk"
#define MSG_VX_JERK                         "Vx-jerk"
#define MSG_VY_JERK                         "Vy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VLiike min"
#define MSG_ACCELERATION                    MSG_ACC
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-peruuta"
#define MSG_STEPS_PER_MM                    "Steps/mm"
#define MSG_XSTEPS                          "Xsteps/mm"
#define MSG_YSTEPS                          "Ysteps/mm"
#define MSG_ZSTEPS                          "Zsteps/mm"
#define MSG_ESTEPS                          "Esteps/mm"
#define MSG_E1STEPS                         "E1steps/mm"
#define MSG_E2STEPS                         "E2steps/mm"
#define MSG_E3STEPS                         "E3steps/mm"
#define MSG_E4STEPS                         "E4steps/mm"
#define MSG_E5STEPS                         "E5steps/mm"
#define MSG_TEMPERATURE                     "Lämpötila"
#define MSG_MOTION                          "Liike"
#define MSG_FILAMENT                        "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E in mm³"
#define MSG_FILAMENT_DIAM                   "Fil. Dia."
#define MSG_CONTRAST                        "LCD kontrasti"
#define MSG_STORE_EEPROM                    "Tallenna muistiin"
#define MSG_LOAD_EEPROM                     "Lataa muistista"
#define MSG_RESTORE_FAILSAFE                "Palauta oletus"
#define MSG_REFRESH                         "Päivitä"
#define MSG_WATCH                           "Seuraa"
#define MSG_PREPARE                         "Valmistele"
#define MSG_TUNE                            "Säädä"
#define MSG_PAUSE_PRINT                     "Keskeytä tulostus"
#define MSG_RESUME_PRINT                    "Jatka tulostusta"
#define MSG_STOP_PRINT                      "Pysäytä tulostus"
#define MSG_CARD_MENU                       "Korttivalikko"
#define MSG_NO_CARD                         "Ei korttia"
#define MSG_DWELL                           "Nukkumassa..."
#define MSG_USERWAIT                        "Odotet. valintaa"
#define MSG_RESUMING                        "Jatke. tulostusta"
#define MSG_PRINT_ABORTED                   "Print aborted"
#define MSG_NO_MOVE                         "Ei liiketta."
#define MSG_KILLED                          "KILLED. "
#define MSG_STOPPED                         "STOPPED. "
#define MSG_CONTROL_RETRACT                 "Vedä mm"
#define MSG_CONTROL_RETRACT_SWAP            "Va. Vedä mm"
#define MSG_CONTROL_RETRACTF                "Vedä V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Z mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Va. UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoVeto."
#define MSG_FILAMENTCHANGE                  "Change filament"
#define MSG_INIT_SDCARD                     "Init. SD-Card"
#define MSG_CNG_SDCARD                      "Change SD-Card"
#define MSG_ZPROBE_OUT                      "Z probe out. bed"
#define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "first"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"
#define MSG_DELTA_CALIBRATE                 "Delta Kalibrointi"
#define MSG_DELTA_CALIBRATE_X               "Kalibroi X"
#define MSG_DELTA_CALIBRATE_Y               "Kalibroi Y"
#define MSG_DELTA_CALIBRATE_Z               "Kalibroi Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Kalibroi Center"

#endif // LANGUAGE_FI_H
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
 * French
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_FR_H
#define LANGUAGE_FR_H

#define MAPPER_NON
#define DISPLAY_CHARSET_ASCII

#define WELCOME_MSG                         MACHINE_NAME " prete."
#define MSG_BACK                            "Retour"
#define MSG_SD_INSERTED                     "Carte inseree"
#define MSG_SD_REMOVED                      "Carte retiree"
#define MSG_LCD_ENDSTOPS                    "Butees" // Max length 8 characters
#define MSG_MAIN                            "Menu principal"
#define MSG_AUTOSTART                       "Demarrage auto"
#define MSG_DISABLE_STEPPERS                "Arreter moteurs"
#define MSG_DEBUG_MENU                      "Menu debug"
#define MSG_PROGRESS_BAR_TEST               "Test barre progress."
#define MSG_AUTO_HOME                       "Origine auto."
#define MSG_AUTO_HOME_X                     "Origine X Auto."
#define MSG_AUTO_HOME_Y                     "Origine Y Auto."
#define MSG_AUTO_HOME_Z                     "Origine Z Auto."
#define MSG_LEVEL_BED_HOMING                "Origine XYZ"
#define MSG_LEVEL_BED_WAITING               "Clic pour commencer"
#define MSG_LEVEL_BED_NEXT_POINT            "Point suivant"
#define MSG_LEVEL_BED_DONE                  "Mise a niveau OK!"
#define MSG_Z_FADE_HEIGHT                   "Adoucir hauteur"
#define MSG_SET_HOME_OFFSETS                "Regl. decal. origine"
#define MSG_HOME_OFFSETS_APPLIED            "Decalages appliques"
#define MSG_SET_ORIGIN                      "Regler origine"
#define MSG_PREHEAT_1                       "Prechauffage PLA"
#define MSG_PREHEAT_1_N                     "Prechauff. PLA "
#define MSG_PREHEAT_1_ALL                   "Prech. PLA Tout"
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 " fini"
#define MSG_PREHEAT_1_BEDONLY               "Prech. PLA lit"
#define MSG_PREHEAT_1_SETTINGS              "Regl. prech. PLA"
#define MSG_PREHEAT_2                       "Prechauffage ABS"
#define MSG_PREHEAT_2_N                     "Prechauff. ABS "
#define MSG_PREHEAT_2_ALL                   "Prech. ABS Tout"
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 " fini"
#define MSG_PREHEAT_2_BEDONLY               "Prech. ABS lit"
#define MSG_PREHEAT_2_SETTINGS              "Regl. prech. ABS"
#define MSG_COOLDOWN                        "Refroidir"
#define MSG_SWITCH_PS_ON                    "Allumer alim."
#define MSG_SWITCH_PS_OFF                   "eteindre alim."
#define MSG_EXTRUDE                         "extrusion"
#define MSG_RETRACT                         "Retraction"
#define MSG_MOVE_AXIS                       "Deplacer un axe"
#define MSG_BED_LEVELING                    "Regl. Niv. lit"
#define MSG_LEVEL_BED                       "Regl. Niv. lit"
#define MSG_EDITING_STOPPED                 "Arret edit. maillage"
#define MSG_USER_MENU                       "Commandes perso"

#define MSG_UBL_DOING_G29                   "G29 en cours"
#define MSG_UBL_UNHOMED                     "Origine XYZ d'abord"
#define MSG_UBL_TOOLS                       "Outils UBL"
#define MSG_UBL_LEVEL_BED                   "Niveau lit unifie"
#define MSG_UBL_MANUAL_MESH                 "Maillage manuel"
#define MSG_UBL_BC_INSERT                   "Poser cale & mesurer"
#define MSG_UBL_BC_INSERT2                  "Mesure"
#define MSG_UBL_BC_REMOVE                   "oter et mesurer lit"
#define MSG_UBL_MOVING_TO_NEXT              "Aller au suivant"
#define MSG_UBL_ACTIVATE_MESH               "Activer l'UBL"
#define MSG_UBL_DEACTIVATE_MESH             "Desactiver l'UBL"
#define MSG_UBL_SET_BED_TEMP                "Temperature lit"
#define MSG_UBL_CUSTOM_BED_TEMP             MSG_UBL_SET_BED_TEMP
#define MSG_UBL_SET_HOTEND_TEMP             "Temperature buse"
#define MSG_UBL_CUSTOM_HOTEND_TEMP          MSG_UBL_SET_HOTEND_TEMP
#define MSG_UBL_EDIT_CUSTOM_MESH            "Editer maille perso"
#define MSG_UBL_FINE_TUNE_MESH              "Reglage fin maille"
#define MSG_UBL_DONE_EDITING_MESH           "Termier maille"
#define MSG_UBL_BUILD_CUSTOM_MESH           "Creer maille perso"
#define MSG_UBL_BUILD_MESH_MENU             "Creer maille"
#define MSG_UBL_BUILD_PLA_MESH              "Creer maille PLA"
#define MSG_UBL_BUILD_ABS_MESH              "Creer maille ABS"
#define MSG_UBL_BUILD_COLD_MESH             "Creer maille froide"
#define MSG_UBL_MESH_HEIGHT_ADJUST          "Ajuster haut. maille"
#define MSG_UBL_MESH_HEIGHT_AMOUNT          "Hauteur"
#define MSG_UBL_VALIDATE_MESH_MENU          "Valider maille"
#define MSG_UBL_VALIDATE_PLA_MESH           "Valider maille PLA"
#define MSG_UBL_VALIDATE_ABS_MESH           "Valider maille ABS"
#define MSG_UBL_VALIDATE_CUSTOM_MESH        "Valider maille perso"
#define MSG_UBL_CONTINUE_MESH               "Continuer maille"
#define MSG_UBL_MESH_LEVELING               "Niveau par maille"
#define MSG_UBL_3POINT_MESH_LEVELING        "Niveau a 3 points"
#define MSG_UBL_GRID_MESH_LEVELING          "Niveau grille"
#define MSG_UBL_MESH_LEVEL                  "Maille de niveau"
#define MSG_UBL_SIDE_POINTS                 "Point lateral"
#define MSG_UBL_MAP_TYPE                    "Type de carte"
#define MSG_UBL_OUTPUT_MAP                  "Voir maille"
#define MSG_UBL_OUTPUT_MAP_HOST             "Voir pour hote"
#define MSG_UBL_OUTPUT_MAP_CSV              "Voir pour CSV"
#define MSG_UBL_OUTPUT_MAP_BACKUP           "Off Printer Backup"
#define MSG_UBL_INFO_UBL                    "Voir info UBL"
#define MSG_UBL_EDIT_MESH_MENU              "Modifier maille"
#define MSG_UBL_FILLIN_AMOUNT               "Taux de remplissage"
#define MSG_UBL_MANUAL_FILLIN               "Remplissage manuel"
#define MSG_UBL_SMART_FILLIN                "Remplissage auto"
#define MSG_UBL_FILLIN_MESH                 "Maille remplissage"
#define MSG_UBL_INVALIDATE_ALL              "Annuler tout"
#define MSG_UBL_INVALIDATE_CLOSEST          "Annuler le plus pres"
#define MSG_UBL_FINE_TUNE_ALL               "Reglage fin (tous)"
#define MSG_UBL_FINE_TUNE_CLOSEST           "Reglage fin (proche)"
#define MSG_UBL_STORAGE_MESH_MENU           "Stockage maille"
#define MSG_UBL_STORAGE_SLOT                "Slot memoire"
#define MSG_UBL_LOAD_MESH                   "Charger maille"
#define MSG_UBL_SAVE_MESH                   "Sauver maille"
#define MSG_UBL_SAVE_ERROR                  "Err: Enreg. UBL"
#define MSG_UBL_RESTORE_ERROR               "Err: Ouvrir UBL"
#define MSG_UBL_Z_OFFSET_STOPPED            "Offset Z arrete"


#define MSG_MOVING                          "Deplacement..."
#define MSG_FREE_XY                         "Debloquer XY"
#define MSG_MOVE_X                          "Depl. X"
#define MSG_MOVE_Y                          "Depl. Y"
#define MSG_MOVE_Z                          "Depl. Z"
#define MSG_MOVE_E                          "Extruder"
#define MSG_MOVE_01MM                       "Depl. 0.1mm"
#define MSG_MOVE_1MM                        "Depl. 1mm"
#define MSG_MOVE_10MM                       "Depl. 10mm"
#define MSG_SPEED                           " Vitesse"
#define MSG_BED_Z                           "Lit Z"
#define MSG_NOZZLE                          "Buse"
#define MSG_BED                             "Lit"
#define MSG_FAN_SPEED                       "Vitesse ventil."
#define MSG_FLOW                            "Flux"
#define MSG_CONTROL                         "Controler"
#define MSG_MIN                             LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Facteur"
#define MSG_AUTOTEMP                        "Temp. Auto."
#define MSG_ON                              "Marche"
#define MSG_OFF                             "Arret"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Selectionner"
#define MSG_ACC                             "Acceleration"
#define MSG_JERK                            "Jerk"
#define MSG_VX_JERK                         "Vx-jerk"
#define MSG_VY_JERK                         "Vy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VELOCITY                        "Velocite"
#define MSG_VMAX                            "Vmax"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "Vdepl min"
#define MSG_ACCELERATION                    "Acceleration"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract"
#define MSG_A_TRAVEL                        "A-Depl."
#define MSG_STEPS_PER_MM                    "Pas/mm"
#define MSG_XSTEPS                          "Xpas/mm"
#define MSG_YSTEPS                          "Ypas/mm"
#define MSG_ZSTEPS                          "Zpas/mm"
#define MSG_ESTEPS                          "Epas/mm"
#define MSG_E1STEPS                         "E1pas/mm"
#define MSG_E2STEPS                         "E2pas/mm"
#define MSG_E3STEPS                         "E3pas/mm"
#define MSG_E4STEPS                         "E4pas/mm"
#define MSG_E5STEPS                         "E5pas/mm"
#define MSG_TEMPERATURE                     "Temperature"
#define MSG_MOTION                          "Mouvement"
#define MSG_FILAMENT                        "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E en mm3"
#define MSG_FILAMENT_DIAM                   "Diam. Fil."
#define MSG_ADVANCE_K                       "Advance K"
#define MSG_CONTRAST                        "Contraste LCD"
#define MSG_STORE_EEPROM                    "Sauver config"
#define MSG_LOAD_EEPROM                     "Lire config"
#define MSG_RESTORE_FAILSAFE                "Restaurer defauts"
#define MSG_INIT_EEPROM                     "Initialiser EEPROM"
#define MSG_REFRESH                         "Actualiser"
#define MSG_WATCH                           "Surveiller"
#define MSG_PREPARE                         "Preparer"
#define MSG_TUNE                            "Regler"
#define MSG_PAUSE_PRINT                     "Interrompre impr."
#define MSG_RESUME_PRINT                    "Reprendre impr."
#define MSG_STOP_PRINT                      "Arreter impr."
#define MSG_CARD_MENU                       "Impr. depuis SD"
#define MSG_NO_CARD                         "Pas de carte"
#define MSG_DWELL                           "Repos..."
#define MSG_USERWAIT                        "Atten. de l'util."
#define MSG_PRINT_PAUSED                    "Impr. en pause"
#define MSG_RESUMING                        "Repri. de l'impr."
#define MSG_PRINT_ABORTED                   "Impr. Annulee"
#define MSG_NO_MOVE                         "Moteurs bloques."
#define MSG_KILLED                          "MORT."
#define MSG_STOPPED                         "STOPPe."
#define MSG_CONTROL_RETRACT                 "Retraction mm"
#define MSG_CONTROL_RETRACT_SWAP            "Ech. Retr. mm"
#define MSG_CONTROL_RETRACTF                "Retraction V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Saut Z mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Ech. UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet V"
#define MSG_CONTROL_RETRACT_RECOVER_SWAPF   "Ech. Retr. V"
#define MSG_AUTORETRACT                     "Retract. Auto."
#define MSG_FILAMENTCHANGE                  "Changer filament"
#define MSG_INIT_SDCARD                     "Init. la carte SD"
#define MSG_CNG_SDCARD                      "Changer de carte"
#define MSG_ZPROBE_OUT                      "Z sonde exte. lit"
#define MSG_BLTOUCH                         "BLTouch"
#define MSG_BLTOUCH_SELFTEST                "Autotest BLTouch"
#define MSG_BLTOUCH_RESET                   "RaZ BLTouch"
#define MSG_BLTOUCH_DEPLOY                  "Deployer BLTouch"
#define MSG_BLTOUCH_STOW                    "Ranger BLTouch"
#define MSG_HOME                            "Origine"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "Premier"
#define MSG_ZPROBE_ZOFFSET                  "Decalage Z"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Butee abandon"
#define MSG_HEATING_FAILED_LCD              "Erreur de chauffe"
#define MSG_ERR_REDUNDANT_TEMP              "Err: TEMP. REDONDANT"
#define MSG_THERMAL_RUNAWAY                 "EMBALLEMENT THERM."
#define MSG_ERR_MAXTEMP                     "Err: TEMP. MAX"
#define MSG_ERR_MINTEMP                     "Err: TEMP. MIN"
#define MSG_ERR_MAXTEMP_BED                 "Err: TEMP. MAX LIT"
#define MSG_ERR_MINTEMP_BED                 "Err: TEMP. MIN LIT"
#define MSG_ERR_Z_HOMING                    "G28 Z interdit"

#define MSG_HALTED                          "IMPR. STOPPeE"
#define MSG_PLEASE_RESET                    "RaZ. SVP"
#define MSG_SHORT_DAY                       "j" // One character only
#define MSG_SHORT_HOUR                      "h" // One character only
#define MSG_SHORT_MINUTE                    "m" // One character only

#define MSG_HEATING                         "En chauffe..."
#define MSG_HEATING_COMPLETE                "Chauffe terminee"
#define MSG_BED_HEATING                     "Lit en chauffe.."
#define MSG_BED_DONE                        "Chauffe lit terminee"
#define MSG_DELTA_CALIBRATE                 "Calibration Delta"
#define MSG_DELTA_CALIBRATE_X               "Calibrer X"
#define MSG_DELTA_CALIBRATE_Y               "Calibrer Y"
#define MSG_DELTA_CALIBRATE_Z               "Calibrer Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Calibrer centre"
#define MSG_DELTA_AUTO_CALIBRATE            "Calibration Auto"
#define MSG_DELTA_HEIGHT_CALIBRATE          "Hauteur Delta"

#define MSG_INFO_MENU                       "Infos imprimante"
#define MSG_INFO_PRINTER_MENU               "Infos imprimante"
#define MSG_3POINT_LEVELING                 "Niveau a 3 points"
#define MSG_LINEAR_LEVELING                 "Niveau lineaire"
#define MSG_BILINEAR_LEVELING               "Niveau bilineaire"
#define MSG_UBL_LEVELING                    "Niveau lit unifie"
#define MSG_MESH_LEVELING                   "Niveau maillage"
#define MSG_INFO_STATS_MENU                 "Stats. imprimante"
#define MSG_INFO_BOARD_MENU                 "Infos carte"
#define MSG_INFO_THERMISTOR_MENU            "Thermistors"
#define MSG_INFO_EXTRUDERS                  "Extrudeurs"
#define MSG_INFO_BAUDRATE                   "Baud"
#define MSG_INFO_PROTOCOL                   "Protocole"
#define MSG_CASE_LIGHT                      "Lumiere caisson"
#define MSG_CASE_LIGHT_BRIGHTNESS           "Luminosite"

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Nbre impressions"
  #define MSG_INFO_COMPLETED_PRINTS         "Terminees"
  #define MSG_INFO_PRINT_TIME               "Tps impr. total"
  #define MSG_INFO_PRINT_LONGEST            "Impr. la + longue"
  #define MSG_INFO_PRINT_FILAMENT           "Total filament"
#else
  #define MSG_INFO_PRINT_COUNT              "Impressions"
  #define MSG_INFO_COMPLETED_PRINTS         "Terminees"
  #define MSG_INFO_PRINT_TIME               "Total"
  #define MSG_INFO_PRINT_LONGEST            "+ long"
  #define MSG_INFO_PRINT_FILAMENT           "Filament"
#endif

#define MSG_INFO_MIN_TEMP                   "Temp Min"
#define MSG_INFO_MAX_TEMP                   "Temp Max"
#define MSG_INFO_PSU                        "Alimentation"
#define MSG_DRIVE_STRENGTH                  "Puiss. moteur "
#define MSG_DAC_PERCENT                     "Driver %"
#define MSG_DAC_EEPROM_WRITE                "DAC EEPROM sauv."

#define MSG_FILAMENT_CHANGE_HEADER          "PRINT PAUSED"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "RESUME OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "+ extrusion"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Reprendre impr."
#define MSG_FILAMENT_CHANGE_MINTEMP         "La temp. minimum est "
#define MSG_FILAMENT_CHANGE_NOZZLE          "  Buse: "

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1        "Attente Demarrage"
  #define MSG_FILAMENT_CHANGE_INIT_2        "du filament"
  #define MSG_FILAMENT_CHANGE_INIT_3        "changer"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      "attente de"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2      "decharger filament"
  #define MSG_FILAMENT_CHANGE_INSERT_1      "inserer filament"
  #define MSG_FILAMENT_CHANGE_INSERT_2      "et app. bouton"
  #define MSG_FILAMENT_CHANGE_INSERT_3      "pour continuer..."
  #define MSG_FILAMENT_CHANGE_HEAT_1        "Presser le bouton..."
  #define MSG_FILAMENT_CHANGE_HEAT_2        "Pr chauffer la buse"
  #define MSG_FILAMENT_CHANGE_HEATING_1     "Buse en chauffe"
  #define MSG_FILAMENT_CHANGE_HEATING_2     "Patientez SVP..."
  #define MSG_FILAMENT_CHANGE_LOAD_1        "attente de"
  #define MSG_FILAMENT_CHANGE_LOAD_2        "chargement filament"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1     "attente de"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2     "extrusion filament"
  #define MSG_FILAMENT_CHANGE_RESUME_1      "attente impression"
  #define MSG_FILAMENT_CHANGE_RESUME_2      "pour reprendre"
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1        "Patientez..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      "Ejection..."
  #define MSG_FILAMENT_CHANGE_INSERT_1      "Inserer et clic"
  #define MSG_FILAMENT_CHANGE_LOAD_1        "Chargement..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1     "Extrusion..."
  #define MSG_FILAMENT_CHANGE_RESUME_1      "Reprise..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_FR_H
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
 * French
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_FR_UTF_H
#define LANGUAGE_FR_UTF_H

#define MAPPER_C2C3
#define UTF8_MAPPER C2C3
#define DISPLAY_CHARSET_ISO10646_1

#define WELCOME_MSG                         MACHINE_NAME " prête."
#define MSG_BACK                            "Retour"
#define MSG_SD_INSERTED                     "Carte insérée"
#define MSG_SD_REMOVED                      "Carte retirée"
#define MSG_LCD_ENDSTOPS                    "Butées" // Max length 8 characters
#define MSG_MAIN                            "Menu principal"
#define MSG_AUTOSTART                       "Demarrage auto"
#define MSG_DISABLE_STEPPERS                "Arrêter moteurs"
#define MSG_DEBUG_MENU                      "Menu debug"
#define MSG_PROGRESS_BAR_TEST               "Test barre progress."
#define MSG_AUTO_HOME                       "Origine auto."
#define MSG_AUTO_HOME_X                     "Origine X Auto."
#define MSG_AUTO_HOME_Y                     "Origine Y Auto."
#define MSG_AUTO_HOME_Z                     "Origine Z Auto."
#define MSG_LEVEL_BED_HOMING                "Origine XYZ"
#define MSG_LEVEL_BED_WAITING               "Clic pour commencer"
#define MSG_LEVEL_BED_NEXT_POINT            "Point suivant"
#define MSG_LEVEL_BED_DONE                  "Mise à niveau OK!"
#define MSG_Z_FADE_HEIGHT                   "Adoucir hauteur"
#define MSG_SET_HOME_OFFSETS                "Regl. décal. origine"
#define MSG_HOME_OFFSETS_APPLIED            "Décalages appliqués"
#define MSG_SET_ORIGIN                      "Régler origine"
#define MSG_PREHEAT_1                       "Préchauffage PLA"
#define MSG_PREHEAT_1_N                     "Préchauff. PLA "
#define MSG_PREHEAT_1_ALL                   "Préch. PLA Tout"
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 " fini"
#define MSG_PREHEAT_1_BEDONLY               "Préch. PLA lit"
#define MSG_PREHEAT_1_SETTINGS              "Regl. prech. PLA"
#define MSG_PREHEAT_2                       "Préchauffage ABS"
#define MSG_PREHEAT_2_N                     "Préchauff. ABS "
#define MSG_PREHEAT_2_ALL                   "Préch. ABS Tout"
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 " fini"
#define MSG_PREHEAT_2_BEDONLY               "Préch. ABS lit"
#define MSG_PREHEAT_2_SETTINGS              "Regl. prech. ABS"
#define MSG_COOLDOWN                        "Refroidir"
#define MSG_SWITCH_PS_ON                    "Allumer alim."
#define MSG_SWITCH_PS_OFF                   "Éteindre alim."
#define MSG_EXTRUDE                         "Éxtrusion"
#define MSG_RETRACT                         "Rétraction"
#define MSG_MOVE_AXIS                       "Déplacer un axe"
#define MSG_BED_LEVELING                    "Règl. Niv. lit"
#define MSG_LEVEL_BED                       "Règl. Niv. lit"
#define MSG_EDITING_STOPPED                 "Arrêt edit. maillage"
#define MSG_USER_MENU                       "Commandes perso"

#define MSG_UBL_DOING_G29                   "G29 en cours"
#define MSG_UBL_UNHOMED                     "Origine XYZ d'abord"
#define MSG_UBL_TOOLS                       "Outils UBL"
#define MSG_UBL_LEVEL_BED                   "Niveau lit unifié"
#define MSG_UBL_MANUAL_MESH                 "Maillage manuel"
#define MSG_UBL_BC_INSERT                   "Poser câle & mesurer"
#define MSG_UBL_BC_INSERT2                  "Mesure"
#define MSG_UBL_BC_REMOVE                   "ôter et mesurer lit"
#define MSG_UBL_MOVING_TO_NEXT              "Aller au suivant"
#define MSG_UBL_ACTIVATE_MESH               "Activer l'UBL"
#define MSG_UBL_DEACTIVATE_MESH             "Désactiver l'UBL"
#define MSG_UBL_SET_BED_TEMP                "Température lit"
#define MSG_UBL_CUSTOM_BED_TEMP             MSG_UBL_SET_BED_TEMP
#define MSG_UBL_SET_HOTEND_TEMP             "Température buse"
#define MSG_UBL_CUSTOM_HOTEND_TEMP          MSG_UBL_SET_HOTEND_TEMP
#define MSG_UBL_EDIT_CUSTOM_MESH            "Editer maille perso"
#define MSG_UBL_FINE_TUNE_MESH              "Réglage fin maille"
#define MSG_UBL_DONE_EDITING_MESH           "Termier maille"
#define MSG_UBL_BUILD_CUSTOM_MESH           "Créer maille perso"
#define MSG_UBL_BUILD_MESH_MENU             "Créer maille"
#define MSG_UBL_BUILD_PLA_MESH              "Créer maille PLA"
#define MSG_UBL_BUILD_ABS_MESH              "Créer maille ABS"
#define MSG_UBL_BUILD_COLD_MESH             "Créer maille froide"
#define MSG_UBL_MESH_HEIGHT_ADJUST          "Ajuster haut. maille"
#define MSG_UBL_MESH_HEIGHT_AMOUNT          "Hauteur"
#define MSG_UBL_VALIDATE_MESH_MENU          "Valider maille"
#define MSG_UBL_VALIDATE_PLA_MESH           "Valider maille PLA"
#define MSG_UBL_VALIDATE_ABS_MESH           "Valider maille ABS"
#define MSG_UBL_VALIDATE_CUSTOM_MESH        "Valider maille perso"
#define MSG_UBL_CONTINUE_MESH               "Continuer maille"
#define MSG_UBL_MESH_LEVELING               "Niveau par maille"
#define MSG_UBL_3POINT_MESH_LEVELING        "Niveau à 3 points"
#define MSG_UBL_GRID_MESH_LEVELING          "Niveau grille"
#define MSG_UBL_MESH_LEVEL                  "Maille de niveau"
#define MSG_UBL_SIDE_POINTS                 "Point latéral"
#define MSG_UBL_MAP_TYPE                    "Type de carte"
#define MSG_UBL_OUTPUT_MAP                  "Voir maille"
#define MSG_UBL_OUTPUT_MAP_HOST             "Voir pour hôte"
#define MSG_UBL_OUTPUT_MAP_CSV              "Voir pour CSV"
#define MSG_UBL_OUTPUT_MAP_BACKUP           "Off Printer Backup"
#define MSG_UBL_INFO_UBL                    "Voir info UBL"
#define MSG_UBL_EDIT_MESH_MENU              "Modifier maille"
#define MSG_UBL_FILLIN_AMOUNT               "Taux de remplissage"
#define MSG_UBL_MANUAL_FILLIN               "Remplissage manuel"
#define MSG_UBL_SMART_FILLIN                "Remplissage auto"
#define MSG_UBL_FILLIN_MESH                 "Maille remplissage"
#define MSG_UBL_INVALIDATE_ALL              "Annuler tout"
#define MSG_UBL_INVALIDATE_CLOSEST          "Annuler le plus près"
#define MSG_UBL_FINE_TUNE_ALL               "Réglage fin (tous)"
#define MSG_UBL_FINE_TUNE_CLOSEST           "Réglage fin (proche)"
#define MSG_UBL_STORAGE_MESH_MENU           "Stockage maille"
#define MSG_UBL_STORAGE_SLOT                "Slot mémoire"
#define MSG_UBL_LOAD_MESH                   "Charger maille"
#define MSG_UBL_SAVE_MESH                   "Sauver maille"
#define MSG_UBL_SAVE_ERROR                  "Err: Enreg. UBL"
#define MSG_UBL_RESTORE_ERROR               "Err: Ouvrir UBL"
#define MSG_UBL_Z_OFFSET_STOPPED            "Offset Z arrêté"


#define MSG_MOVING                          "Déplacement..."
#define MSG_FREE_XY                         "Débloquer XY"
#define MSG_MOVE_X                          "Dépl. X"
#define MSG_MOVE_Y                          "Dépl. Y"
#define MSG_MOVE_Z                          "Dépl. Z"
#define MSG_MOVE_E                          "Extruder"
#define MSG_MOVE_01MM                       "Dépl. 0.1mm"
#define MSG_MOVE_1MM                        "Dépl. 1mm"
#define MSG_MOVE_10MM                       "Dépl. 10mm"
#define MSG_SPEED                           " Vitesse"
#define MSG_BED_Z                           "Lit Z"
#define MSG_NOZZLE                          "Buse"
#define MSG_BED                             "Lit"
#define MSG_FAN_SPEED                       "Vitesse ventil."
#define MSG_FLOW                            "Flux"
#define MSG_CONTROL                         "Contrôler"
#define MSG_MIN                             LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Facteur"
#define MSG_AUTOTEMP                        "Temp. Auto."
#define MSG_ON                              "Marche "
#define MSG_OFF                             "Arrêt"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Sélectionner"
#define MSG_ACC                             "Accélération"
#define MSG_JERK                            "Jerk"
#define MSG_VX_JERK                         "Vx-jerk"
#define MSG_VY_JERK                         "Vy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VELOCITY                        "Vélocité"
#define MSG_VMAX                            "Vmax"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "Vdepl min"
#define MSG_ACCELERATION                    "Accélération"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract"
#define MSG_A_TRAVEL                        "A-Dépl."
#define MSG_STEPS_PER_MM                    "Pas/mm"
#define MSG_XSTEPS                          "Xpas/mm"
#define MSG_YSTEPS                          "Ypas/mm"
#define MSG_ZSTEPS                          "Zpas/mm"
#define MSG_ESTEPS                          "Epas/mm"
#define MSG_E1STEPS                         "E1pas/mm"
#define MSG_E2STEPS                         "E2pas/mm"
#define MSG_E3STEPS                         "E3pas/mm"
#define MSG_E4STEPS                         "E4pas/mm"
#define MSG_E5STEPS                         "E5pas/mm"
#define MSG_TEMPERATURE                     "Température"
#define MSG_MOTION                          "Mouvement"
#define MSG_FILAMENT                        "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E en mm3"
#define MSG_FILAMENT_DIAM                   "Diam. Fil."
#define MSG_ADVANCE_K                       "Advance K"
#define MSG_CONTRAST                        "Contraste LCD"
#define MSG_STORE_EEPROM                    "Sauver config"
#define MSG_LOAD_EEPROM                     "Lire config"
#define MSG_RESTORE_FAILSAFE                "Restaurer défauts"
#define MSG_INIT_EEPROM                     "Initialiser EEPROM"
#define MSG_REFRESH                         "Actualiser"
#define MSG_WATCH                           "Surveiller"
#define MSG_PREPARE                         "Préparer"
#define MSG_TUNE                            "Régler"
#define MSG_PAUSE_PRINT                     "Interrompre impr."
#define MSG_RESUME_PRINT                    "Reprendre impr."
#define MSG_STOP_PRINT                      "Arrêter impr."
#define MSG_CARD_MENU                       "Impr. depuis SD"
#define MSG_NO_CARD                         "Pas de carte"
#define MSG_DWELL                           "Repos..."
#define MSG_USERWAIT                        "Atten. de l'util."
#define MSG_PRINT_PAUSED                    "Impr. en pause"
#define MSG_RESUMING                        "Repri. de l'impr."
#define MSG_PRINT_ABORTED                   "Impr. Annulée"
#define MSG_NO_MOVE                         "Moteurs bloqués."
#define MSG_KILLED                          "MORT."
#define MSG_STOPPED                         "STOPPÉ."
#define MSG_CONTROL_RETRACT                 "Retraction mm"
#define MSG_CONTROL_RETRACT_SWAP            "Ech. Retr. mm"
#define MSG_CONTROL_RETRACTF                "Rétraction V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Saut Z mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Ech. UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet V"
#define MSG_AUTORETRACT                     "Rétract. Auto."
#define MSG_FILAMENTCHANGE                  "Changer filament"
#define MSG_INIT_SDCARD                     "Init. la carte SD"
#define MSG_CNG_SDCARD                      "Changer de carte"
#define MSG_ZPROBE_OUT                      "Z sonde extè. lit"
#define MSG_BLTOUCH                         "BLTouch"
#define MSG_BLTOUCH_SELFTEST                "Autotest BLTouch"
#define MSG_BLTOUCH_RESET                   "RaZ BLTouch"
#define MSG_BLTOUCH_DEPLOY                  "Déployer BLTouch"
#define MSG_BLTOUCH_STOW                    "Ranger BLTouch"
#define MSG_HOME                            "Origine"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "Premier"
#define MSG_ZPROBE_ZOFFSET                  "Décalage Z"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Butée abandon"
#define MSG_HEATING_FAILED_LCD              "Erreur de chauffe"
#define MSG_ERR_REDUNDANT_TEMP              "Err: TEMP. REDONDANT"
#define MSG_THERMAL_RUNAWAY                 "EMBALLEMENT THERM."
#define MSG_ERR_MAXTEMP                     "Err: TEMP. MAX"
#define MSG_ERR_MINTEMP                     "Err: TEMP. MIN"
#define MSG_ERR_MAXTEMP_BED                 "Err: TEMP. MAX LIT"
#define MSG_ERR_MINTEMP_BED                 "Err: TEMP. MIN LIT"
#define MSG_ERR_Z_HOMING                    "G28 Z interdit"

#define MSG_HALTED                          "IMPR. STOPPÉE"
#define MSG_PLEASE_RESET                    "RaZ. SVP"
#define MSG_SHORT_DAY                       "j" // One character only
#define MSG_SHORT_HOUR                      "h" // One character only
#define MSG_SHORT_MINUTE                    "m" // One character only

#define MSG_HEATING                         "En chauffe..."
#define MSG_HEATING_COMPLETE                "Chauffe terminée"
#define MSG_BED_HEATING                     "Lit en chauffe.."
#define MSG_BED_DONE                        "Chauffe lit terminée"
#define MSG_DELTA_CALIBRATE                 "Calibration Delta"
#define MSG_DELTA_CALIBRATE_X               "Calibrer X"
#define MSG_DELTA_CALIBRATE_Y               "Calibrer Y"
#define MSG_DELTA_CALIBRATE_Z               "Calibrer Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Calibrer centre"
#define MSG_DELTA_AUTO_CALIBRATE            "Calibration Auto"
#define MSG_DELTA_HEIGHT_CALIBRATE          "Hauteur Delta"

#define MSG_INFO_MENU                       "Infos imprimante"
#define MSG_INFO_PRINTER_MENU               "Infos imprimante"
#define MSG_3POINT_LEVELING                 "Niveau à 3 points"
#define MSG_LINEAR_LEVELING                 "Niveau linéaire"
#define MSG_BILINEAR_LEVELING               "Niveau bilinéaire"
#define MSG_UBL_LEVELING                    "Niveau lit unifié"
#define MSG_MESH_LEVELING                   "Niveau maillage"
#define MSG_INFO_STATS_MENU                 "Stats. imprimante"
#define MSG_INFO_BOARD_MENU                 "Infos carte"
#define MSG_INFO_THERMISTOR_MENU            "Thermistors"
#define MSG_INFO_EXTRUDERS                  "Extrudeurs"
#define MSG_INFO_BAUDRATE                   "Baud"
#define MSG_INFO_PROTOCOL                   "Protocole"
#define MSG_CASE_LIGHT                      "Lumière caisson"
#define MSG_CASE_LIGHT_BRIGHTNESS           "Luminosité"

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Nbre impressions"
  #define MSG_INFO_COMPLETED_PRINTS         "Terminées"
  #define MSG_INFO_PRINT_TIME               "Tps impr. total"
  #define MSG_INFO_PRINT_LONGEST            "Impr. la + longue"
  #define MSG_INFO_PRINT_FILAMENT           "Total filament"
#else
  #define MSG_INFO_PRINT_COUNT              "Impressions"
  #define MSG_INFO_COMPLETED_PRINTS         "Terminées"
  #define MSG_INFO_PRINT_TIME               "Total"
  #define MSG_INFO_PRINT_LONGEST            "+ long"
  #define MSG_INFO_PRINT_FILAMENT           "Filament"
#endif

#define MSG_INFO_MIN_TEMP                   "Temp Min"
#define MSG_INFO_MAX_TEMP                   "Temp Max"
#define MSG_INFO_PSU                        "Alimentation"
#define MSG_DRIVE_STRENGTH                  "Puiss. moteur "
#define MSG_DAC_PERCENT                     "Driver %"
#define MSG_DAC_EEPROM_WRITE                "DAC EEPROM sauv."

#define MSG_FILAMENT_CHANGE_HEADER          "PRINT PAUSED"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "RESUME OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "+ extrusion"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Reprendre impr."
#define MSG_FILAMENT_CHANGE_MINTEMP         "La temp. minimum est "
#define MSG_FILAMENT_CHANGE_NOZZLE          "  Buse: "

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1        "Attente Démarrage"
  #define MSG_FILAMENT_CHANGE_INIT_2        "du filament"
  #define MSG_FILAMENT_CHANGE_INIT_3        "changer"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      "attente de"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2      "décharger filament"
  #define MSG_FILAMENT_CHANGE_INSERT_1      "insérer filament"
  #define MSG_FILAMENT_CHANGE_INSERT_2      "et app. bouton"
  #define MSG_FILAMENT_CHANGE_INSERT_3      "pour continuer..."
  #define MSG_FILAMENT_CHANGE_HEAT_1        "Presser le bouton..."
  #define MSG_FILAMENT_CHANGE_HEAT_2        "Pr chauffer la buse"
  #define MSG_FILAMENT_CHANGE_HEATING_1     "Buse en chauffe"
  #define MSG_FILAMENT_CHANGE_HEATING_2     "Patientez SVP..."
  #define MSG_FILAMENT_CHANGE_LOAD_1        "attente de"
  #define MSG_FILAMENT_CHANGE_LOAD_2        "chargement filament"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1     "attente de"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2     "extrusion filament"
  #define MSG_FILAMENT_CHANGE_RESUME_1      "attente impression"
  #define MSG_FILAMENT_CHANGE_RESUME_2      "pour reprendre"
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1        "Patientez..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      "Ejection..."
  #define MSG_FILAMENT_CHANGE_INSERT_1      "Insérer et clic"
  #define MSG_FILAMENT_CHANGE_LOAD_1        "Chargement..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1     "Extrusion..."
  #define MSG_FILAMENT_CHANGE_RESUME_1      "Reprise..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_FR_UTF_H
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
 * Galician language (ISO "gl"
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_GL_H
#define LANGUAGE_GL_H

#define MAPPER_C2C3
#define UTF8_MAPPER C2C3
#define DISPLAY_CHARSET_ISO10646_1
#define NOT_EXTENDED_ISO10646_1_5X7

#define WELCOME_MSG                         MACHINE_NAME " lista."
#define MSG_SD_INSERTED                     "Tarxeta inserida"
#define MSG_SD_REMOVED                      "Tarxeta retirada"
#define MSG_LCD_ENDSTOPS                    "FinCarro"
#define MSG_MAIN                            "Menu principal"
#define MSG_AUTOSTART                       "Autoarranque"
#define MSG_DISABLE_STEPPERS                "Apagar motores"
#define MSG_AUTO_HOME                       "Ir a orixe"
#define MSG_AUTO_HOME_X                     "Ir orixe X"
#define MSG_AUTO_HOME_Y                     "Ir orixe Y"
#define MSG_AUTO_HOME_Z                     "Ir orixe Z"
#define MSG_LEVEL_BED_HOMING                "Ir orixes XYZ"
#define MSG_LEVEL_BED_WAITING               "Prema pulsador"
#define MSG_LEVEL_BED_NEXT_POINT            "Seguinte punto"
#define MSG_LEVEL_BED_DONE                  "Nivelado feito"
#define MSG_SET_HOME_OFFSETS                "Offsets na orixe"
#define MSG_HOME_OFFSETS_APPLIED            "Offsets fixados"
#define MSG_SET_ORIGIN                      "Fixar orixe"
#define MSG_PREHEAT_1                       "Prequentar PLA"
#define MSG_PREHEAT_1_N                     "Prequentar PLA "
#define MSG_PREHEAT_1_ALL                   "Preque. PLA Todo"
#define MSG_PREHEAT_1_BEDONLY               "Preque. PLA Cama"
#define MSG_PREHEAT_1_SETTINGS              "Preque. PLA conf"
#define MSG_PREHEAT_2                       "Prequentar ABS"
#define MSG_PREHEAT_2_N                     "Prequentar ABS "
#define MSG_PREHEAT_2_ALL                   "Preque. ABS Todo"
#define MSG_PREHEAT_2_BEDONLY               "Preque. ABS Cama"
#define MSG_PREHEAT_2_SETTINGS              "Preque. ABS conf"
#define MSG_COOLDOWN                        "Arrefriar"
#define MSG_SWITCH_PS_ON                    "Acender"
#define MSG_SWITCH_PS_OFF                   "Apagar"
#define MSG_EXTRUDE                         "Extrudir"
#define MSG_RETRACT                         "Retraer"
#define MSG_MOVE_AXIS                       "Mover eixe"
#define MSG_BED_LEVELING                    "Nivelar cama"
#define MSG_LEVEL_BED                       "Nivelar cama"
#define MSG_MOVE_X                          "Mover X"
#define MSG_MOVE_Y                          "Mover Y"
#define MSG_MOVE_Z                          "Mover Z"
#define MSG_MOVE_E                          "Extrusor"
#define MSG_MOVE_01MM                       "Mover 0.1mm"
#define MSG_MOVE_1MM                        "Mover 1mm"
#define MSG_MOVE_10MM                       "Mover 10mm"
#define MSG_SPEED                           "Velocidade"
#define MSG_BED_Z                           "Cama Z"
#define MSG_NOZZLE                          "Bico"
#define MSG_BED                             "Cama"
#define MSG_FAN_SPEED                       "Velocidade vent."
#define MSG_FLOW                            "Fluxo"
#define MSG_CONTROL                         "Control"
#define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "Autotemp"
#define MSG_ON                              "On "
#define MSG_OFF                             "Off"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Escolla"
#define MSG_ACC                             "Acel"
#define MSG_JERK                            "Jerk"
#define MSG_VX_JERK                         "Vx-jerk"
#define MSG_VY_JERK                         "Vy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract"
#define MSG_A_TRAVEL                        "A-travel"
#define MSG_STEPS_PER_MM                    "Pasos/mm"
#define MSG_XSTEPS                          "Xpasos/mm"
#define MSG_YSTEPS                          "Ypasos/mm"
#define MSG_ZSTEPS                          "Zpasos/mm"
#define MSG_ESTEPS                          "Epasos/mm"
#define MSG_E1STEPS                         "E1pasos/mm"
#define MSG_E2STEPS                         "E2pasos/mm"
#define MSG_E3STEPS                         "E3pasos/mm"
#define MSG_E4STEPS                         "E4pasos/mm"
#define MSG_E5STEPS                         "E5pasos/mm"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Movemento"
#define MSG_FILAMENT                        "Filamento"
#define MSG_VOLUMETRIC_ENABLED              "E en mm3"
#define MSG_FILAMENT_DIAM                   "Diam. fil."
#define MSG_CONTRAST                        "Constraste LCD"
#define MSG_STORE_EEPROM                    "Gardar en memo."
#define MSG_LOAD_EEPROM                     "Cargar de memo."
#define MSG_RESTORE_FAILSAFE                "Cargar de firm."
#define MSG_REFRESH                         "Volver a cargar"
#define MSG_WATCH                           "Monitorizacion"
#define MSG_PREPARE                         "Preparar"
#define MSG_TUNE                            "Axustar"
#define MSG_PAUSE_PRINT                     "Pausar impres."
#define MSG_RESUME_PRINT                    "Seguir impres."
#define MSG_STOP_PRINT                      "Deter impres."
#define MSG_CARD_MENU                       "Tarxeta SD"
#define MSG_NO_CARD                         "Sen tarxeta SD"
#define MSG_DWELL                           "En repouso..."
#define MSG_USERWAIT                        "A espera..."
#define MSG_RESUMING                        "Imprimindo..."
#define MSG_PRINT_ABORTED                   "Impre. cancelada"
#define MSG_NO_MOVE                         "Sen movemento."
#define MSG_KILLED                          "PROGRAMA MORTO"
#define MSG_STOPPED                         "PROGRAMA PARADO"
#define MSG_CONTROL_RETRACT                 "Retraccion mm"
#define MSG_CONTROL_RETRACT_SWAP            "Cambio retra. mm"
#define MSG_CONTROL_RETRACTF                "Retraccion V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Alzar Z mm"
#define MSG_CONTROL_RETRACT_RECOVER         "Recup. retra. mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Cambio recup. mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "Recuperacion V"
#define MSG_AUTORETRACT                     "Retraccion auto."
#define MSG_FILAMENTCHANGE                  "Cambiar filamen."
#define MSG_INIT_SDCARD                     "Iniciando SD"
#define MSG_CNG_SDCARD                      "Cambiar SD"
#define MSG_ZPROBE_OUT                      "Sonda-Z sen cama"
#define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_BLTOUCH_SELFTEST                "Comprobar BLTouch"
#define MSG_BLTOUCH_RESET                   "Iniciar BLTouch"
#define MSG_FIRST                           "first"
#define MSG_ZPROBE_ZOFFSET                  "Offset Z"
#define MSG_BABYSTEP_X                      "Micropaso X"
#define MSG_BABYSTEP_Y                      "Micropaso Y"
#define MSG_BABYSTEP_Z                      "Micropaso Z"
#define MSG_ENDSTOP_ABORT                   "Erro fin carro"
#define MSG_HEATING_FAILED_LCD              "Fallo quentando"
#define MSG_ERR_REDUNDANT_TEMP              "Erro temperatura"
#define MSG_THERMAL_RUNAWAY                 "Temp. excesiva"
#define MSG_ERR_MAXTEMP                     "Err: temp. max."
#define MSG_ERR_MINTEMP                     "Err: temp. min."
#define MSG_ERR_MAXTEMP_BED                 "Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                 "Err: MINTEMP BED"
#define MSG_ERR_Z_HOMING                    "G28 Z impedido"
#define MSG_HALTED                          "SISTEMA MORTO"
#define MSG_PLEASE_RESET                    "Debe reiniciar!"
#define MSG_SHORT_DAY                       "d" // One character only
#define MSG_SHORT_HOUR                      "h" // One character only
#define MSG_SHORT_MINUTE                    "m" // One character only
#define MSG_HEATING                         "Quentando..."
#define MSG_HEATING_COMPLETE                "Xa esta quente"
#define MSG_BED_HEATING                     "Quentando cama"
#define MSG_BED_DONE                        "Cama esta quente"
#define MSG_DELTA_CALIBRATE                 "Calibracion Delta"
#define MSG_DELTA_CALIBRATE_X               "Calibrar X"
#define MSG_DELTA_CALIBRATE_Y               "Calibrar Y"
#define MSG_DELTA_CALIBRATE_Z               "Calibrar Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Calibrar Centro"
#define MSG_INFO_MENU                       "Acerca de..."
#define MSG_INFO_PRINTER_MENU               "Informacion"
#define MSG_INFO_STATS_MENU                 "Estadisticas"
#define MSG_INFO_BOARD_MENU                 "Placa nai"
#define MSG_INFO_THERMISTOR_MENU            "Termistores"
#define MSG_INFO_EXTRUDERS                  "Extrusores"
#define MSG_INFO_BAUDRATE                   "Baudios"
#define MSG_INFO_PROTOCOL                   "Protocolo"
#define MSG_CASE_LIGHT                      "Luz"
#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Total traballos"
  #define MSG_INFO_COMPLETED_PRINTS         "Total completos"
  #define MSG_INFO_PRINT_TIME               "Tempo impresion"
  #define MSG_INFO_PRINT_LONGEST            "Traballo +longo"
  #define MSG_INFO_PRINT_FILAMENT           "Total extruido"
#else
  #define MSG_INFO_PRINT_COUNT              "Traballos"
  #define MSG_INFO_COMPLETED_PRINTS         "Completos"
  #define MSG_INFO_PRINT_TIME               "Tempo"
  #define MSG_INFO_PRINT_LONGEST            "O +longo"
  #define MSG_INFO_PRINT_FILAMENT           "Extruido"
#endif
#define MSG_INFO_MIN_TEMP                   "Min Temp"
#define MSG_INFO_MAX_TEMP                   "Max Temp"
#define MSG_INFO_PSU                        "Fonte alime."
#define MSG_DRIVE_STRENGTH                  "Potencia motor"
#define MSG_DAC_PERCENT                     "Motor %"
#define MSG_DAC_EEPROM_WRITE                "Garda DAC EEPROM"

#define MSG_FILAMENT_CHANGE_HEADER          "PRINT PAUSED"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "RESUME OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Extruir mais"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Segue traballo"

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Agarde para"
  #define MSG_FILAMENT_CHANGE_INIT_2          "iniciar troco"
  #define MSG_FILAMENT_CHANGE_INIT_3          "de filamento"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Agarde pola"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "descarga do"
  #define MSG_FILAMENT_CHANGE_UNLOAD_3        "filamento"
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Introduza o"
  #define MSG_FILAMENT_CHANGE_INSERT_2        "filamento e"
  #define MSG_FILAMENT_CHANGE_INSERT_3        "faga click"
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Agarde pola"
  #define MSG_FILAMENT_CHANGE_LOAD_2          "carga do"
  #define MSG_FILAMENT_CHANGE_LOAD_3          "filamento"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Agarde pola"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "extrusion do"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_3       "filamento"
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Agarde para"
  #define MSG_FILAMENT_CHANGE_RESUME_2        "seguir co"
  #define MSG_FILAMENT_CHANGE_RESUME_3        "traballo"
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Agarde..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Descargando..."
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Introduza e click"
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Cargando..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Extruindo..."
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Seguindo..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_GL_H

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
 * Croatian (Hrvatski)
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_HR_H
#define LANGUAGE_HR_H

#define DISPLAY_CHARSET_ISO10646_1

#define WELCOME_MSG                         MACHINE_NAME " spreman."
#define MSG_SD_INSERTED                     "SD kartica umetnuta"
#define MSG_SD_REMOVED                      "SD kartica uklonjena"
#define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters
#define MSG_MAIN                            "Main"
#define MSG_AUTOSTART                       "Auto pokretanje"
#define MSG_DISABLE_STEPPERS                "Ugasi steppere"
#define MSG_AUTO_HOME                       "Automatski homing"
#define MSG_AUTO_HOME_X                     "Home-aj X"
#define MSG_AUTO_HOME_Y                     "Home-aj Y"
#define MSG_AUTO_HOME_Z                     "Home-aj Z"
#define MSG_LEVEL_BED_HOMING                "Home-aj XYZ"
#define MSG_LEVEL_BED_WAITING               "Klikni za početak"
#define MSG_LEVEL_BED_NEXT_POINT            "Sljedeća točka"
#define MSG_LEVEL_BED_DONE                  "Niveliranje gotovo!"
#define MSG_SET_HOME_OFFSETS                "Postavi home offsete"
#define MSG_HOME_OFFSETS_APPLIED            "Offsets postavljeni"
#define MSG_SET_ORIGIN                      "Postavi ishodište"
#define MSG_PREHEAT_1                       "Predgrij PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " Sve"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " Bed"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " conf"
#define MSG_PREHEAT_2                       "Predgrij ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " Sve"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " Bed"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " conf"
#define MSG_COOLDOWN                        "Hlađenje"
#define MSG_SWITCH_PS_ON                    "Uključi napajanje"
#define MSG_SWITCH_PS_OFF                   "Isključi napajanje"
#define MSG_EXTRUDE                         "Extrude"
#define MSG_RETRACT                         "Retract"
#define MSG_MOVE_AXIS                       "Miči os"
#define MSG_BED_LEVELING                    "Niveliraj bed"
#define MSG_LEVEL_BED                       "Niveliraj bed"
#define MSG_MOVE_X                          "Miči X"
#define MSG_MOVE_Y                          "Miči Y"
#define MSG_MOVE_Z                          "Miči Z"
#define MSG_MOVE_E                          "Extruder"
#define MSG_MOVE_01MM                       "Miči 0.1mm"
#define MSG_MOVE_1MM                        "Miči 1mm"
#define MSG_MOVE_10MM                       "Miči 10mm"
#define MSG_SPEED                           "Brzina"
#define MSG_BED_Z                           "Bed Z"
#define MSG_NOZZLE                          "Dizna"
#define MSG_BED                             "Bed"
#define MSG_FAN_SPEED                       "Brzina ventilatora"
#define MSG_FLOW                            "Flow"
#define MSG_CONTROL                         "Control"
#define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "Autotemp"
#define MSG_ON                              "On "
#define MSG_OFF                             "Off"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Odaberi"
#define MSG_ACC                             "Accel"
#define MSG_JERK                            "Jerk"
#define MSG_VX_JERK                         "Vx-jerk"
#define MSG_VY_JERK                         "Vy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract"
#define MSG_A_TRAVEL                        "A-travel"
#define MSG_STEPS_PER_MM                    "Steps/mm"
#define MSG_XSTEPS                          "Xsteps/mm"
#define MSG_YSTEPS                          "Ysteps/mm"
#define MSG_ZSTEPS                          "Zsteps/mm"
#define MSG_ESTEPS                          "Esteps/mm"
#define MSG_E1STEPS                         "E1steps/mm"
#define MSG_E2STEPS                         "E2steps/mm"
#define MSG_E3STEPS                         "E3steps/mm"
#define MSG_E4STEPS                         "E4steps/mm"
#define MSG_E5STEPS                         "E5steps/mm"
#define MSG_TEMPERATURE                     "Temperature"
#define MSG_MOTION                          "Gibanje"
#define MSG_FILAMENT                        "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define MSG_FILAMENT_DIAM                   "Fil. Dia."
#define MSG_CONTRAST                        "Kontrast LCD-a"
#define MSG_STORE_EEPROM                    "Pohrani u memoriju"
#define MSG_LOAD_EEPROM                     "Učitaj memoriju"
#define MSG_RESTORE_FAILSAFE                "Učitaj failsafe"
#define MSG_REFRESH                         "Osvježi"
#define MSG_WATCH                           "Info screen"
#define MSG_PREPARE                         "Pripremi"
#define MSG_TUNE                            "Tune"
#define MSG_PAUSE_PRINT                     "Pauziraj print"
#define MSG_RESUME_PRINT                    "Nastavi print"
#define MSG_STOP_PRINT                      "Zaustavi print"
#define MSG_CARD_MENU                       "Printaj s SD kartice"
#define MSG_NO_CARD                         "Nema SD kartice"
#define MSG_DWELL                           "Sleep..."
#define MSG_USERWAIT                        "Čekaj korisnika..."
#define MSG_RESUMING                        "Nastavljam print"
#define MSG_PRINT_ABORTED                   "Print otkazan"
#define MSG_NO_MOVE                         "No move."
#define MSG_KILLED                          "KILLED. "
#define MSG_STOPPED                         "ZAUSTAVLJEN. "
#define MSG_CONTROL_RETRACT                 "Retract mm"
#define MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"
#define MSG_CONTROL_RETRACTF                "Retract  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Promijeni filament"
#define MSG_INIT_SDCARD                     "Init. SD karticu"
#define MSG_CNG_SDCARD                      "Promijeni SD karticu"
#define MSG_ZPROBE_OUT                      "Z probe out. bed"
#define MSG_BLTOUCH_SELFTEST                "BLTouch Self-Test"
#define MSG_BLTOUCH_RESET                   "Reset BLTouch"
#define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "first"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"
#define MSG_HEATING_FAILED_LCD              "Grijanje neuspješno"
#define MSG_ERR_REDUNDANT_TEMP              "Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     "Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     "Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 "Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                 "Err: MINTEMP BED"
#define MSG_ERR_Z_HOMING                    "G28 Z Forbidden"
#define MSG_HALTED                          "PRINTER HALTED"
#define MSG_PLEASE_RESET                    "Please reset"
#define MSG_SHORT_DAY                       "d" // One character only
#define MSG_SHORT_HOUR                      "h" // One character only
#define MSG_SHORT_MINUTE                    "m" // One character only
#define MSG_HEATING                         "Grijanje..."
#define MSG_HEATING_COMPLETE                "Grijanje gotovo."
#define MSG_BED_HEATING                     "Grijanje Bed-a."
#define MSG_BED_DONE                        "Bed gotov."
#define MSG_DELTA_CALIBRATE                 "Delta Kalibracija"
#define MSG_DELTA_CALIBRATE_X               "Kalibriraj X"
#define MSG_DELTA_CALIBRATE_Y               "Kalibriraj Y"
#define MSG_DELTA_CALIBRATE_Z               "Kalibriraj Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Kalibriraj Središte"
#define MSG_INFO_MENU                       "O printeru"
#define MSG_INFO_PRINTER_MENU               "Podaci o printeru"
#define MSG_INFO_STATS_MENU                 "Statistika printera"
#define MSG_INFO_BOARD_MENU                 "Podaci o elektronici"
#define MSG_INFO_THERMISTOR_MENU            "Termistori"
#define MSG_INFO_EXTRUDERS                  "Extruderi"
#define MSG_INFO_BAUDRATE                   "Baud"
#define MSG_INFO_PROTOCOL                   "Protokol"
#define MSG_CASE_LIGHT                      "Osvjetljenje"

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Broj printova"
  #define MSG_INFO_COMPLETED_PRINTS         "Završeni"
  #define MSG_INFO_PRINT_TIME               "Ukupno printanja"
  #define MSG_INFO_PRINT_LONGEST            "Najduži print"
  #define MSG_INFO_PRINT_FILAMENT           "Extrudirano ukupno"
#else
  #define MSG_INFO_PRINT_COUNT              "Printovi"
  #define MSG_INFO_COMPLETED_PRINTS         "Završeni"
  #define MSG_INFO_PRINT_TIME               "Ukupno"
  #define MSG_INFO_PRINT_LONGEST            "Najduži"
  #define MSG_INFO_PRINT_FILAMENT           "Extrudirano"
#endif

#define MSG_INFO_MIN_TEMP                   "Min Temp"
#define MSG_INFO_MAX_TEMP                   "Max Temp"
#define MSG_INFO_PSU                        "Napajanje"
#define MSG_DRIVE_STRENGTH                  "Drive Strength"
#define MSG_DAC_PERCENT                     "Driver %"
#define MSG_DAC_EEPROM_WRITE                "DAC EEPROM Write"

#define MSG_FILAMENT_CHANGE_HEADER          "PRINT PAUSED"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "RESUME OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Extrudiraj više"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Nastavi print"

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Čekaj početak"
  #define MSG_FILAMENT_CHANGE_INIT_2          "filamenta"
  #define MSG_FILAMENT_CHANGE_INIT_3          "promijeni"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Čekaj"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "filament unload"
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Umetni filament"
  #define MSG_FILAMENT_CHANGE_INSERT_2        "i pritisni tipku"
  #define MSG_FILAMENT_CHANGE_INSERT_3        "za nastavak..."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Pričekaj"
  #define MSG_FILAMENT_CHANGE_LOAD_2          "filament load"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Pričekaj"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "filament extrude"
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Wait for print"
  #define MSG_FILAMENT_CHANGE_RESUME_2        "to resume"
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Pričekaj..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Ejecting..."
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Insert and Click"
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Loading..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Extrudiranje..."
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Nastavljam..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_HR_H
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
 * Italian
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_IT_H
#define LANGUAGE_IT_H

#define MAPPER_C2C3
#define UTF8_MAPPER C2C3
#define DISPLAY_CHARSET_ISO10646_1

#define WELCOME_MSG                         MACHINE_NAME " pronto."
#define MSG_BACK                            "Indietro"
#define MSG_SD_INSERTED                     "SD Card inserita"
#define MSG_SD_REMOVED                      "SD Card rimossa"
#define MSG_LCD_ENDSTOPS                    "Endstop"
#define MSG_MAIN                            "Menu principale"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Disabilita Motori"
#define MSG_DEBUG_MENU                      "Menu di debug"
#define MSG_PROGRESS_BAR_TEST               "Test barra avanzamento"
#define MSG_AUTO_HOME                       "Auto Home"
#define MSG_AUTO_HOME_X                     "Home asse X"
#define MSG_AUTO_HOME_Y                     "Home asse Y"
#define MSG_AUTO_HOME_Z                     "Home asse Z"
#define MSG_LEVEL_BED_HOMING                "Home assi XYZ"
#define MSG_LEVEL_BED_WAITING               "Premi per iniziare"
#define MSG_LEVEL_BED_NEXT_POINT            "Punto successivo"
#define MSG_LEVEL_BED_DONE                  "Livel. terminato!"
#define MSG_Z_FADE_HEIGHT                   "Fade Height"
#define MSG_SET_HOME_OFFSETS                "Imp. offset home"
#define MSG_HOME_OFFSETS_APPLIED            "Offset applicato"
#define MSG_SET_ORIGIN                      "Imposta Origine"
#define MSG_PREHEAT_1                       "Preriscalda PLA"
#define MSG_PREHEAT_1_N                     "Prerisc.PLA "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1_N "Tutto"
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1_N "Ugello"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1_N "Piatto"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1_N "conf"
#define MSG_PREHEAT_2                       "Preriscalda ABS"
#define MSG_PREHEAT_2_N                     "Prerisc.ABS "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2_N "Tutto"
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2_N "Ugello"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2_N "Piatto"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2_N "conf"
#define MSG_COOLDOWN                        "Raffredda"
#define MSG_SWITCH_PS_ON                    "Accendi aliment."
#define MSG_SWITCH_PS_OFF                   "Spegni aliment."
#define MSG_EXTRUDE                         "Estrudi"
#define MSG_RETRACT                         "Ritrai"
#define MSG_MOVE_AXIS                       "Muovi Asse"
#define MSG_BED_LEVELING                    "Livella piano"
#define MSG_LEVEL_BED                       "Livella piano"
#define MSG_EDITING_STOPPED                 "Modifica Mesh Fermata"
#define MSG_USER_MENU                       "Comandi Utente"

#define MSG_UBL_DOING_G29                   "G29 in corso"
#define MSG_UBL_UNHOMED                     "Home XYZ prima"
#define MSG_UBL_TOOLS                       "Strumenti UBL"
#define MSG_UBL_LEVEL_BED                   "Unified Bed Leveling"
#define MSG_UBL_MANUAL_MESH                 "Mesh Manuale"
#define MSG_UBL_BC_INSERT                   "Metti spessore & misura"
#define MSG_UBL_BC_INSERT2                  "Misura"
#define MSG_UBL_BC_REMOVE                   "Rimuovi & misura piatto"
#define MSG_UBL_MOVING_TO_NEXT              "Spostamento sucessivo"
#define MSG_UBL_ACTIVATE_MESH               "Attiva UBL"
#define MSG_UBL_DEACTIVATE_MESH             "Disattiva UBL"
#define MSG_UBL_SET_BED_TEMP                "Temp Piatto"
#define MSG_UBL_CUSTOM_BED_TEMP             MSG_UBL_SET_BED_TEMP
#define MSG_UBL_SET_HOTEND_TEMP             "Temp Ugello"
#define MSG_UBL_CUSTOM_HOTEND_TEMP          MSG_UBL_SET_HOTEND_TEMP
#define MSG_UBL_EDIT_CUSTOM_MESH            "Modif Custom Mesh"
#define MSG_UBL_FINE_TUNE_MESH              "Ritocca Mesh"
#define MSG_UBL_DONE_EDITING_MESH           "Done Editing Mesh"
#define MSG_UBL_BUILD_CUSTOM_MESH           "Crea Custom Mesh"
#define MSG_UBL_BUILD_MESH_MENU             "Crea Mesh"
#define MSG_UBL_BUILD_PLA_MESH              "Crea PLA Mesh"
#define MSG_UBL_BUILD_ABS_MESH              "Crea ABS Mesh"
#define MSG_UBL_BUILD_COLD_MESH             "Crea Cold Mesh"
#define MSG_UBL_MESH_HEIGHT_ADJUST          "Aggiusta Altezza Mesh"
#define MSG_UBL_MESH_HEIGHT_AMOUNT          "Altezza"
#define MSG_UBL_VALIDATE_MESH_MENU          "Valida Mesh"
#define MSG_UBL_VALIDATE_PLA_MESH           "Valida PLA Mesh"
#define MSG_UBL_VALIDATE_ABS_MESH           "Valida ABS Mesh"
#define MSG_UBL_VALIDATE_CUSTOM_MESH        "Valida Custom Mesh"
#define MSG_UBL_CONTINUE_MESH               "Continua Mesh"
#define MSG_UBL_MESH_LEVELING               "Livell. Mesh"
#define MSG_UBL_3POINT_MESH_LEVELING        "Livell. 3 Punti"
#define MSG_UBL_GRID_MESH_LEVELING          "Livell. Griglia Mesh"
#define MSG_UBL_MESH_LEVEL                  "Livella Mesh"
#define MSG_UBL_SIDE_POINTS                 "Punti laterali"
#define MSG_UBL_MAP_TYPE                    "Tipo di Mappa"
#define MSG_UBL_OUTPUT_MAP                  "Esporta Mappa"
#define MSG_UBL_OUTPUT_MAP_HOST             "Esporta per Host"
#define MSG_UBL_OUTPUT_MAP_CSV              "Esporta in CSV"
#define MSG_UBL_OUTPUT_MAP_BACKUP           "Backup esterno"
#define MSG_UBL_INFO_UBL                    "Esporta Info UBL"
#define MSG_UBL_EDIT_MESH_MENU              "Modifica Mesh"
#define MSG_UBL_FILLIN_AMOUNT               "Riempimento"
#define MSG_UBL_MANUAL_FILLIN               "Riempimento Manuale"
#define MSG_UBL_SMART_FILLIN                "Riempimento Smart"
#define MSG_UBL_FILLIN_MESH                 "Riempimento Mesh"
#define MSG_UBL_INVALIDATE_ALL              "Invalida Tutto"
#define MSG_UBL_INVALIDATE_CLOSEST          "Invalida Punto Vicino"
#define MSG_UBL_FINE_TUNE_ALL               "Ritocca All"
#define MSG_UBL_FINE_TUNE_CLOSEST           "Ritocca Punto Vicino"
#define MSG_UBL_STORAGE_MESH_MENU           "Mesh Salvate"
#define MSG_UBL_STORAGE_SLOT                "Slot di memoria"
#define MSG_UBL_LOAD_MESH                   "Carica Mesh Piatto"
#define MSG_UBL_SAVE_MESH                   "Salva Mesh Piatto"
#define MSG_UBL_SAVE_ERROR                  "Err: Salvataggio UBL"
#define MSG_UBL_RESTORE_ERROR               "Err: Ripristino UBL"
#define MSG_UBL_Z_OFFSET_STOPPED            "Z-Offset Fermato"
#define MSG_UBL_STEP_BY_STEP_MENU           "UBL passo passo"

#define MSG_MOVING                          "In movimento..."
#define MSG_FREE_XY                         "XY liberi"
#define MSG_MOVE_X                          "Muovi X"
#define MSG_MOVE_Y                          "Muovi Y"
#define MSG_MOVE_Z                          "Muovi Z"
#define MSG_MOVE_E                          "Estrusore"
#define MSG_MOVE_01MM                       "Muovi di 0.1mm"
#define MSG_MOVE_1MM                        "Muovi di   1mm"
#define MSG_MOVE_10MM                       "Muovi di  10mm"
#define MSG_SPEED                           "Velocità"
#define MSG_BED_Z                           "piatto Z"
#define MSG_NOZZLE                          "Ugello"
#define MSG_BED                             "Piatto"
#define MSG_FAN_SPEED                       "Velocità ventola"
#define MSG_FLOW                            "Flusso"
#define MSG_CONTROL                         "Controllo"
#define MSG_MIN                             LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "Autotemp"
#define MSG_ON                              "On "
#define MSG_OFF                             "Off"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Seleziona"
#define MSG_ACC                             "Accel"
#define MSG_JERK                            "Jerk"
#define MSG_VX_JERK                         "Vx-jerk"
#define MSG_VY_JERK                         "Vy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VELOCITY                        "Velocità"
#define MSG_VMAX                            "Vmax "
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_ACCELERATION                    "Accelerazione"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract"
#define MSG_A_TRAVEL                        "A-Spostamento"
#define MSG_STEPS_PER_MM                    "Passi/mm"
#define MSG_XSTEPS                          "Xpassi/mm"
#define MSG_YSTEPS                          "Ypassi/mm"
#define MSG_ZSTEPS                          "Zpassi/mm"
#define MSG_ESTEPS                          "Epassi/mm"
#define MSG_E1STEPS                         "E1passi/mm"
#define MSG_E2STEPS                         "E2passi/mm"
#define MSG_E3STEPS                         "E3passi/mm"
#define MSG_E4STEPS                         "E4passi/mm"
#define MSG_E5STEPS                         "E5passi/mm"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Movimento"
#define MSG_FILAMENT                        "Filamento"
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define MSG_FILAMENT_DIAM                   "Diam. filo"
#define MSG_ADVANCE_K                       "K Avanzamento"
#define MSG_CONTRAST                        "Contrasto LCD"
#define MSG_STORE_EEPROM                    "Salva in memoria"
#define MSG_LOAD_EEPROM                     "Carica da memoria"
#define MSG_RESTORE_FAILSAFE                "Ripristina imp."
#define MSG_INIT_EEPROM                     "Inizializza EEPROM"
#define MSG_REFRESH                         "Aggiorna"
#define MSG_WATCH                           "Guarda"
#define MSG_PREPARE                         "Prepara"
#define MSG_TUNE                            "Regola"
#define MSG_PAUSE_PRINT                     "Pausa"
#define MSG_RESUME_PRINT                    "Riprendi stampa"
#define MSG_STOP_PRINT                      "Arresta stampa"
#define MSG_CARD_MENU                       "Stampa da SD"
#define MSG_NO_CARD                         "SD non presente"
#define MSG_DWELL                           "Sospensione..."
#define MSG_USERWAIT                        "Premi tasto.."
#define MSG_PRINT_PAUSED                    "Stampa sospesa"
#define MSG_RESUMING                        "Riprendi Stampa"
#define MSG_PRINT_ABORTED                   "Stampa annullata"
#define MSG_NO_MOVE                         "Nessun Movimento"
#define MSG_KILLED                          "UCCISO. "
#define MSG_STOPPED                         "ARRESTATO. "
#define MSG_CONTROL_RETRACT                 "Ritrai mm"
#define MSG_CONTROL_RETRACT_SWAP            "Scamb. Ritrai mm"
#define MSG_CONTROL_RETRACTF                "Ritrai  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Salta mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Scamb. UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoRitrai"
#define MSG_FILAMENTCHANGE                  "Cambia filamento"
#define MSG_INIT_SDCARD                     "Iniz. SD-Card"
#define MSG_CNG_SDCARD                      "Cambia SD-Card"
#define MSG_ZPROBE_OUT                      "Z probe out. bed"
#define MSG_BLTOUCH                         "BLTouch"
#define MSG_BLTOUCH_SELFTEST                "Autotest BLTouch"
#define MSG_BLTOUCH_RESET                   "Resetta BLTouch"
#define MSG_BLTOUCH_DEPLOY                  "Estendi BLTouch"
#define MSG_BLTOUCH_STOW                    "Ritrai BLTouch"
#define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "prima"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Finecorsa abort"
#define MSG_HEATING_FAILED_LCD              "Riscald. Fallito"
#define MSG_ERR_REDUNDANT_TEMP              "Err: TEMP RIDONDANTI"
#define MSG_THERMAL_RUNAWAY                 "TEMP FUORI CONTROLLO"
#define MSG_ERR_MAXTEMP                     "Err: TEMP MASSIMA"
#define MSG_ERR_MINTEMP                     "Err: TEMP MINIMA"
#define MSG_ERR_MAXTEMP_BED                 "Err: TEMP MASSIMA PIATTO"
#define MSG_ERR_MINTEMP_BED                 "Err: TEMP MINIMA PIATTO"
#define MSG_ERR_Z_HOMING                    "G28 Z Vietato"
#define MSG_HALTED                          "STAMPANTE FERMATA"
#define MSG_PLEASE_RESET                    "Riavviare prego"
#define MSG_SHORT_DAY                       "g" // One character only
#define MSG_SHORT_HOUR                      "h" // One character only
#define MSG_SHORT_MINUTE                    "m" // One character only
#define MSG_HEATING                         "Riscaldamento.."
#define MSG_HEATING_COMPLETE                "Risc. completato"
#define MSG_BED_HEATING                     "Risc. Piatto.."
#define MSG_BED_DONE                        "Piatto Pronto"
#define MSG_DELTA_CALIBRATE                 "Calibraz. Delta"
#define MSG_DELTA_CALIBRATE_X               "Calibra X"
#define MSG_DELTA_CALIBRATE_Y               "Calibra Y"
#define MSG_DELTA_CALIBRATE_Z               "Calibra Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Calibra Center"
#define MSG_DELTA_AUTO_CALIBRATE            "Auto calibrazione"
#define MSG_DELTA_HEIGHT_CALIBRATE          "Imp. altezza Delta"
#define MSG_INFO_MENU                       "Riguardo stampante"
#define MSG_INFO_PRINTER_MENU               "Info. stampante"
#define MSG_3POINT_LEVELING                 "Livel. a 3 punti"
#define MSG_LINEAR_LEVELING                 "Livel. Lineare"
#define MSG_BILINEAR_LEVELING               "Livel. Biliniare"
#define MSG_UBL_LEVELING                    "Livel. UBL"
#define MSG_MESH_LEVELING                   "Livel. Mesh"
#define MSG_INFO_STATS_MENU                 "Statistiche"
#define MSG_INFO_BOARD_MENU                 "Info. scheda"
#define MSG_INFO_THERMISTOR_MENU            "Termistori"
#define MSG_INFO_EXTRUDERS                  "Estrusori"
#define MSG_INFO_BAUDRATE                   "Baud"
#define MSG_INFO_PROTOCOL                   "Protocollo"
#define MSG_CASE_LIGHT                      "Luci Case"
#define MSG_CASE_LIGHT_BRIGHTNESS           "Luminosità Luci"

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Contat. stampa"
  #define MSG_INFO_COMPLETED_PRINTS         "Completati"
  #define MSG_INFO_PRINT_TIME               "Tempo totale"
  #define MSG_INFO_PRINT_LONGEST            "Lavoro più lungo"
  #define MSG_INFO_PRINT_FILAMENT           "Totale estruso"
#else
  #define MSG_INFO_PRINT_COUNT              "Stampe"
  #define MSG_INFO_COMPLETED_PRINTS         "Completati"
  #define MSG_INFO_PRINT_TIME               "Durata"
  #define MSG_INFO_PRINT_LONGEST            "Più lungo"
  #define MSG_INFO_PRINT_FILAMENT           "Estruso"
#endif
#define MSG_INFO_MIN_TEMP                   "Temp min"
#define MSG_INFO_MAX_TEMP                   "Temp max"
#define MSG_INFO_PSU                        "Alimentatore"

#define MSG_DRIVE_STRENGTH                  "Potenza Drive"
#define MSG_DAC_PERCENT                     "Driver %"
#define MSG_DAC_EEPROM_WRITE                "Scrivi DAC EEPROM"

#define MSG_FILAMENT_CHANGE_HEADER          "STAMPA IN PAUSA"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "OPZIONI:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Estrudi ancora"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Riprendi stampa"
#define MSG_FILAMENT_CHANGE_MINTEMP         "Temp minima è "
#define MSG_FILAMENT_CHANGE_NOZZLE          "  Ugello: "

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1        "Attendere avvio"
  #define MSG_FILAMENT_CHANGE_INIT_2        "del cambio"
  #define MSG_FILAMENT_CHANGE_INIT_3        "di filamento"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      "Attendere"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2      "l'espulsione"
  #define MSG_FILAMENT_CHANGE_UNLOAD_3      "del filamento"
  #define MSG_FILAMENT_CHANGE_INSERT_1      "Inserisci il"
  #define MSG_FILAMENT_CHANGE_INSERT_2      "filamento e"
  #define MSG_FILAMENT_CHANGE_INSERT_3      "premi per cont"
  #define MSG_FILAMENT_CHANGE_HEAT_1        "Premi per"
  #define MSG_FILAMENT_CHANGE_HEAT_2        "riscald ugello."
  #define MSG_FILAMENT_CHANGE_HEATING_1     "Riscald. ugello"
  #define MSG_FILAMENT_CHANGE_HEATING_2     "Attendere..."
  #define MSG_FILAMENT_CHANGE_LOAD_1        "Attendere"
  #define MSG_FILAMENT_CHANGE_LOAD_2        "il caricamento"
  #define MSG_FILAMENT_CHANGE_LOAD_3        "del filamento"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1     "Attendere"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2     "l'estrusione"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_3     "del filamento"
  #define MSG_FILAMENT_CHANGE_RESUME_1      "Attendere"
  #define MSG_FILAMENT_CHANGE_RESUME_2      "la ripresa"
  #define MSG_FILAMENT_CHANGE_RESUME_3      "della stampa"
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1        "Attendere..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      "Espulsione..."
  #define MSG_FILAMENT_CHANGE_INSERT_1      "Inserisci e premi"
  #define MSG_FILAMENT_CHANGE_HEATING_1     "Riscaldamento..."
  #define MSG_FILAMENT_CHANGE_LOAD_1        "Caricamento..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1     "Estrusione..."
  #define MSG_FILAMENT_CHANGE_RESUME_1      "Ripresa..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_IT_H
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
 * Japanese (Kana)
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */

#ifndef LANGUAGE_KANA_H
#define LANGUAGE_KANA_H

#if ENABLED(DOGLCD)
  #include "language_kana_utf8.h"
#else
  // Only English comments please.
  #define WELCOME_MSG                         MACHINE_NAME " ready."
  #define MSG_SD_INSERTED                     "\xb6\xb0\xc4\xde\xb6\xde\xbf\xb3\xc6\xad\xb3\xbb\xda\xcf\xbc\xc0"
  #define MSG_SD_REMOVED                      "\xb6\xb0\xc4\xde\xb6\xde\xb1\xd8\xcf\xbe\xdd"
  #define MSG_LCD_ENDSTOPS                    "Endstops"
  #define MSG_MAIN                            "\xd2\xb2\xdd"
  #define MSG_AUTOSTART                       "\xbc\xde\xc4\xde\xb3\xb6\xb2\xbc"
  #define MSG_DISABLE_STEPPERS                "\xd3\xb0\xc0\xb0\xc3\xde\xdd\xb9\xde\xdd\x20\xb5\xcc"
  #define MSG_DEBUG_MENU                      "\xc3\xde\xca\xde\xaf\xb8\xde\xd2\xc6\xad\xb0"
  #define MSG_PROGRESS_BAR_TEST               "\xcc\xdf\xdb\xb8\xde\xda\xbd\xca\xde\xb0\x20\xc3\xbd\xc4"
  #define MSG_AUTO_HOME                       "\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7"
  #define MSG_AUTO_HOME_X                     "X\xbc\xde\xb8\x20\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7"
  #define MSG_AUTO_HOME_Y                     "Y\xbc\xde\xb8\x20\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7"
  #define MSG_AUTO_HOME_Z                     "Z\xbc\xde\xb8\x20\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7"
  #define MSG_LEVEL_BED_HOMING                "\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7\xc1\xad\xb3"
  #define MSG_LEVEL_BED_WAITING               "\xda\xcd\xde\xd8\xdd\xb8\xde\xb6\xb2\xbc"
  #define MSG_LEVEL_BED_NEXT_POINT            "\xc2\xb7\xde\xc9\xbf\xb8\xc3\xb2\xc3\xdd\xcd"
  #define MSG_LEVEL_BED_DONE                  "\xda\xcd\xde\xd8\xdd\xb8\xde\xb6\xdd\xd8\xae\xb3"
  #define MSG_SET_HOME_OFFSETS                "\xb7\xbc\xde\xad\xdd\xb5\xcc\xbe\xaf\xc4\xbe\xaf\xc3\xb2"
  #define MSG_HOME_OFFSETS_APPLIED            "\xb5\xcc\xbe\xaf\xc4\xb6\xde\xc3\xb7\xd6\xb3\xbb\xda\xcf\xbc\xc0"
  #define MSG_SET_ORIGIN                      "\xb7\xbc\xde\xad\xdd\xbe\xaf\xc4"
  #define MSG_PREHEAT_1                       "PLA \xd6\xc8\xc2"
  #define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
  #define MSG_PREHEAT_1_ALL                   "PLA \xbd\xcd\xde\xc3\xd6\xc8\xc2"
  #define MSG_PREHEAT_1_BEDONLY               "PLA \xcd\xde\xaf\xc4\xde\xd6\xc8\xc2"
  #define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 "\xbe\xaf\xc3\xb2"
  #define MSG_PREHEAT_2                       "ABS \xd6\xc8\xc2"
  #define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
  #define MSG_PREHEAT_2_ALL                   "ABS \xbd\xcd\xde\xc3\xd6\xc8\xc2"
  #define MSG_PREHEAT_2_BEDONLY               "ABS \xcd\xde\xaf\xc4\xde\xd6\xc8\xc2"
  #define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 "\xbe\xaf\xc3\xb2"
  #define MSG_COOLDOWN                        "\xb6\xc8\xc2\xc3\xb2\xbc"
  #define MSG_SWITCH_PS_ON                    "\xc3\xde\xdd\xb9\xde\xdd\x20\xb5\xdd"
  #define MSG_SWITCH_PS_OFF                   "\xc3\xde\xdd\xb9\xde\xdd\x20\xb5\xcc"
  #define MSG_EXTRUDE                         "\xb5\xbc\xc0\xde\xbc"
  #define MSG_RETRACT                         "\xcb\xb7\xba\xd0\xbe\xaf\xc3\xb2"
  #define MSG_MOVE_AXIS                       "\xbc\xde\xb8\xb2\xc4\xde\xb3"
  #define MSG_BED_LEVELING                    "\xcd\xde\xaf\xc4\xde\xda\xcd\xde\xd8\xdd\xb8\xde"
  #define MSG_LEVEL_BED                       "\xcd\xde\xaf\xc4\xde\xda\xcd\xde\xd8\xdd\xb8\xde"
  #define MSG_MOVING                          "\xb2\xc4\xde\xb3\xc1\xad\xb3"
  #define MSG_FREE_XY                         "XY\xbc\xde\xb8\x20\xb6\xb2\xce\xb3"
  #define MSG_MOVE_X                          "X\xbc\xde\xb8\x20\xb2\xc4\xde\xb3"
  #define MSG_MOVE_Y                          "Y\xbc\xde\xb8\x20\xb2\xc4\xde\xb3"
  #define MSG_MOVE_Z                          "Z\xbc\xde\xb8\x20\xb2\xc4\xde\xb3"
  #define MSG_MOVE_E                          "\xb4\xb8\xbd\xc4\xd9\xb0\xc0\xde\xb0"
  #define MSG_MOVE_01MM                       "0.1mm \xb2\xc4\xde\xb3"
  #define MSG_MOVE_1MM                        "  1mm \xb2\xc4\xde\xb3"
  #define MSG_MOVE_10MM                       " 10mm \xb2\xc4\xde\xb3"
  #define MSG_SPEED                           "\xbf\xb8\xc4\xde"
  #define MSG_BED_Z                           "Z\xb5\xcc\xbe\xaf\xc4"
  #define MSG_NOZZLE                          "\xc9\xbd\xde\xd9"
  #define MSG_BED                             "\xcd\xde\xaf\xc4\xde"
  #define MSG_FAN_SPEED                       "\xcc\xa7\xdd\xbf\xb8\xc4\xde"
  #define MSG_FLOW                            "\xc4\xbc\xad\xc2\xd8\xae\xb3"
  #define MSG_CONTROL                         "\xbe\xb2\xb7\xde\xae"
  #define MSG_MIN                             LCD_STR_THERMOMETER " \xbb\xb2\xc3\xb2"
  #define MSG_MAX                             LCD_STR_THERMOMETER " \xbb\xb2\xba\xb3"
  #define MSG_FACTOR                          LCD_STR_THERMOMETER " \xcc\xa7\xb8\xc0\xb0"
  #if LCD_WIDTH >= 20
    #define MSG_AUTOTEMP                      "\xbc\xde\xc4\xde\xb3\xb5\xdd\xc4\xde\xbe\xb2\xb7\xde\xae"
  #else
    #define MSG_AUTOTEMP                      "\xbc\xde\xc4\xde\xb3\xb5\xdd\xc4\xde"
  #endif
  #define MSG_ON                              "\xb5\xdd "
  #define MSG_OFF                             "\xb5\xcc "
  #define MSG_PID_P                           "PID-P"
  #define MSG_PID_I                           "PID-I"
  #define MSG_PID_D                           "PID-D"
  #define MSG_PID_C                           "PID-C"
  #define MSG_SELECT                          "\xbe\xdd\xc0\xb8"
  #if LCD_WIDTH >= 20
    #define MSG_ACC                           "\xb6\xbf\xb8\xc4\xde mm/s2"
    #define MSG_VX_JERK                       "X\xbc\xde\xb8\x20\xd4\xb8\xc4\xde mm/s"
    #define MSG_VY_JERK                       "Y\xbc\xde\xb8\x20\xd4\xb8\xc4\xde mm/s"
    #define MSG_VZ_JERK                       "Z\xbc\xde\xb8\x20\xd4\xb8\xc4\xde mm/s"
    #define MSG_VE_JERK                       "\xb4\xb8\xbd\xc4\xd9\xb0\xc0\xde\xb0\x20\xd4\xb8\xc4\xde"
    #define MSG_VMAX                          "\xbb\xb2\xc0\xde\xb2\xb5\xb8\xd8\xbf\xb8\xc4\xde "
    #define MSG_VMIN                          "\xbb\xb2\xbc\xae\xb3\xb5\xb8\xd8\xbf\xb8\xc4\xde"
    #define MSG_VTRAV_MIN                     "\xbb\xb2\xbc\xae\xb3\xb2\xc4\xde\xb3\xbf\xb8\xc4\xde"
    #define MSG_AMAX                          "\xbb\xb2\xc0\xde\xb2\xb6\xbf\xb8\xc4\xde "
  #else
    #define MSG_ACC                           "\xb6\xbf\xb8\xc4\xde"
    #define MSG_VX_JERK                       "X\xbc\xde\xb8\x20\xd4\xb8\xc4\xde"
    #define MSG_VY_JERK                       "Y\xbc\xde\xb8\x20\xd4\xb8\xc4\xde"
    #define MSG_VZ_JERK                       "Z\xbc\xde\xb8\x20\xd4\xb8\xc4\xde"
    #define MSG_VE_JERK                       "E\x20\xd4\xb8\xc4\xde"
    #define MSG_VMAX                          "max\xb5\xb8\xd8\xbf\xb8\xc4\xde "
    #define MSG_VMIN                          "min\xb5\xb8\xd8\xbf\xb8\xc4\xde"
    #define MSG_VTRAV_MIN                     "min\xb2\xc4\xde\xb3\xbf\xb8\xc4\xde"
    #define MSG_AMAX                          "max\xb6\xbf\xb8 "
  #endif
  #define MSG_A_RETRACT                       "\xcb\xb7\xba\xd0\xb6\xbf\xb8\xc4\xde"
  #define MSG_A_TRAVEL                        "\xb2\xc4\xde\xb3\xb6\xbf\xb8\xc4\xde"
  #if LCD_WIDTH >= 20
    #define MSG_STEPS_PER_MM                    "Steps/mm"
    #define MSG_XSTEPS                          "Xsteps/mm"
    #define MSG_YSTEPS                          "Ysteps/mm"
    #define MSG_ZSTEPS                          "Zsteps/mm"
    #define MSG_ESTEPS                          "Esteps/mm"
    #define MSG_E1STEPS                         "E1steps/mm"
    #define MSG_E2STEPS                         "E2steps/mm"
    #define MSG_E3STEPS                         "E3steps/mm"
    #define MSG_E4STEPS                         "E4steps/mm"
    #define MSG_E5STEPS                         "E5steps/mm"
  #else
    #define MSG_STEPS_PER_MM                    "Steps"
    #define MSG_XSTEPS                          "Xsteps"
    #define MSG_YSTEPS                          "Ysteps"
    #define MSG_ZSTEPS                          "Zsteps"
    #define MSG_ESTEPS                          "Esteps"
    #define MSG_E1STEPS                         "E1steps"
    #define MSG_E2STEPS                         "E2steps"
    #define MSG_E3STEPS                         "E3steps"
    #define MSG_E4STEPS                         "E4steps"
    #define MSG_E5STEPS                         "E5steps"
  #endif
  #define MSG_TEMPERATURE                     "\xb5\xdd\xc4\xde"
  #define MSG_MOTION                          "\xb3\xba\xde\xb7\xbe\xaf\xc3\xb2"
  #define MSG_FILAMENT                        "\xcc\xa8\xd7\xd2\xdd\xc4"
  #define MSG_VOLUMETRIC_ENABLED              "E in mm3"
  #if LCD_WIDTH >= 20
    #define MSG_FILAMENT_DIAM                 "\xcc\xa8\xd7\xd2\xdd\xc4\xc1\xae\xaf\xb9\xb2"
  #else
    #define MSG_FILAMENT_DIAM                 "\xcc\xa8\xd7\xd2\xdd\xc4\xb9\xb2"
  #endif
  #define MSG_CONTRAST                        "LCD\xba\xdd\xc4\xd7\xbd\xc4"
  #define MSG_STORE_EEPROM                    "\xd2\xd3\xd8\xcd\xb6\xb8\xc9\xb3"
  #define MSG_LOAD_EEPROM                     "\xd2\xd3\xd8\xb6\xd7\xd6\xd0\xba\xd0"
  #define MSG_RESTORE_FAILSAFE                "\xbe\xaf\xc3\xb2\xd8\xbe\xaf\xc4"
  #define MSG_REFRESH                         "\xd8\xcc\xda\xaf\xbc\xad"
  #define MSG_WATCH                           "\xbc\xde\xae\xb3\xce\xb3\xb6\xde\xd2\xdd"
  #define MSG_PREPARE                         "\xbc\xde\xad\xdd\xcb\xde\xbe\xaf\xc3\xb2"
  #define MSG_TUNE                            "\xc1\xae\xb3\xbe\xb2"
  #define MSG_PAUSE_PRINT                     "\xb2\xc1\xbc\xde\xc3\xb2\xbc"
  #define MSG_RESUME_PRINT                    "\xcc\xdf\xd8\xdd\xc4\xbb\xb2\xb6\xb2"
  #define MSG_STOP_PRINT                      "\xcc\xdf\xd8\xdd\xc4\xc3\xb2\xbc"
  #define MSG_CARD_MENU                       "SD\xb6\xb0\xc4\xde\xb6\xd7\xcc\xdf\xd8\xdd\xc4"
  #define MSG_NO_CARD                         "SD\xb6\xb0\xc4\xde\xb6\xde\xb1\xd8\xcf\xbe\xdd"
  #define MSG_DWELL                           "\xb7\xad\xb3\xbc"
  #define MSG_USERWAIT                        "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"
  #define MSG_RESUMING                        "\xcc\xdf\xd8\xdd\xc4\xbb\xb2\xb6\xb2"
  #define MSG_PRINT_ABORTED                   "\xcc\xdf\xd8\xdd\xc4\xb6\xde\xc1\xad\xb3\xbc\xbb\xda\xcf\xbc\xc0"
  #define MSG_NO_MOVE                         "\xb3\xba\xde\xb7\xcf\xbe\xdd"
  #define MSG_KILLED                          "\xcb\xbc\xde\xae\xb3\xc3\xb2\xbc"
  #define MSG_STOPPED                         "\xc3\xb2\xbc\xbc\xcf\xbc\xc0"
  #if LCD_WIDTH >= 20
    #define MSG_CONTROL_RETRACT               "\xcb\xb7\xba\xd0\xd8\xae\xb3 mm"
    #define MSG_CONTROL_RETRACT_SWAP          "\xcb\xb7\xba\xd0\xd8\xae\xb3S mm"
    #define MSG_CONTROL_RETRACTF              "\xcb\xb7\xba\xd0\xbf\xb8\xc4\xde mm/s"
    #define MSG_CONTROL_RETRACT_ZLIFT         "\xc9\xbd\xde\xd9\xc0\xb2\xcb mm"
    #define MSG_CONTROL_RETRACT_RECOVER       "\xce\xbc\xae\xb3\xd8\xae\xb3 mm"
    #define MSG_CONTROL_RETRACT_RECOVER_SWAP  "\xce\xbc\xae\xb3\xd8\xae\xb3S mm"
    #define MSG_CONTROL_RETRACT_RECOVERF      "\xce\xbc\xae\xb3\xbf\xb8\xc4\xde mm/s"
  #else
    #define MSG_CONTROL_RETRACT               "\xcb\xb7\xba\xd0\xd8\xae\xb3"
    #define MSG_CONTROL_RETRACT_SWAP          "\xcb\xb7\xba\xd0\xd8\xae\xb3S"
    #define MSG_CONTROL_RETRACTF              "\xcb\xb7\xba\xd0\xbf\xb8\xc4\xde"
    #define MSG_CONTROL_RETRACT_ZLIFT         "\xc9\xbd\xde\xd9\xc0\xb2\xcb"
    #define MSG_CONTROL_RETRACT_RECOVER       "\xce\xbc\xae\xb3\xd8\xae\xb3"
    #define MSG_CONTROL_RETRACT_RECOVER_SWAP  "\xce\xbc\xae\xb3\xd8\xae\xb3S"
    #define MSG_CONTROL_RETRACT_RECOVERF      "\xce\xbc\xae\xb3\xbf\xb8\xc4\xde"
  #endif
  #define MSG_AUTORETRACT                     "\xbc\xde\xc4\xde\xb3\xcb\xb7\xba\xd0"
  #define MSG_FILAMENTCHANGE                  "\xcc\xa8\xd7\xd2\xdd\xc4\xba\xb3\xb6\xdd"
  #define MSG_INIT_SDCARD                     "SD\xb6\xb0\xc4\xde\xbb\xb2\xd6\xd0\xba\xd0"
  #define MSG_CNG_SDCARD                      "SD\xb6\xb0\xc4\xde\xba\xb3\xb6\xdd"
  #define MSG_ZPROBE_OUT                      "Z\xcc\xdf\xdb\xb0\xcc\xde\x20\xcd\xde\xaf\xc4\xde\xb6\xde\xb2"
  #if LCD_WIDTH >= 20
    #define MSG_BLTOUCH_SELFTEST              "BLTouch \xbc\xde\xba\xbc\xdd\xc0\xde\xdd"
  #else
    #define MSG_BLTOUCH_SELFTEST              "BLTouch \xbe\xd9\xcc\xc3\xbd\xc4"
  #endif
  #define MSG_BLTOUCH_RESET                   "BLTouch \xd8\xbe\xaf\xc4"
  #define MSG_HOME                            "\xbb\xb7\xc6"
  #if LCD_WIDTH >= 20
    #define MSG_FIRST                         "\xa6\xcc\xaf\xb7\xbb\xbe\xc3\xb8\xc0\xde\xbb\xb2"
  #else
    #define MSG_FIRST                         "\xa6\xcc\xaf\xb7\xbb\xbe\xd6"
  #endif
  #define MSG_ZPROBE_ZOFFSET                  "Z\xb5\xcc\xbe\xaf\xc4"
  #define MSG_BABYSTEP_X                      "X\xbc\xde\xb8\x20\xcb\xde\xc4\xde\xb3"
  #define MSG_BABYSTEP_Y                      "Y\xbc\xde\xb8\x20\xcb\xde\xc4\xde\xb3"
  #define MSG_BABYSTEP_Z                      "Z\xbc\xde\xb8\x20\xcb\xde\xc4\xde\xb3"
  #if LCD_WIDTH >= 20
    #define MSG_ENDSTOP_ABORT                 "\xb2\xc4\xde\xb3\xb9\xde\xdd\xb6\xb2\xb9\xdd\xc1\xb7\xc9\xb3"
  #else
    #define MSG_ENDSTOP_ABORT                 "\xb2\xc4\xde\xb3\xb9\xde\xdd\xb6\xb2\xb9\xdd\xc1"
  #endif
  #define MSG_HEATING_FAILED_LCD              "\xb6\xc8\xc2\xbc\xaf\xca\xdf\xb2"
  #if LCD_WIDTH >= 20
    #define MSG_ERR_REDUNDANT_TEMP            "\xb4\xd7\xb0:\xbc\xde\xae\xb3\xc1\xae\xb3\xbb\xb0\xd0\xbd\xc0\xb0\xb7\xc9\xb3"
  #else
    #define MSG_ERR_REDUNDANT_TEMP            "\xb4\xd7\xb0:\xbc\xde\xae\xb3\xc1\xae\xb3\xbb\xb0\xd0\xbd\xc0"
  #endif
  #define MSG_THERMAL_RUNAWAY                 "\xc8\xc2\xce\xde\xb3\xbf\xb3"
  #define MSG_ERR_MAXTEMP                     "\xb4\xd7\xb0:\xbb\xb2\xba\xb3\xb5\xdd\xc1\xae\xb3\xb6"
  #define MSG_ERR_MINTEMP                     "\xb4\xd7\xb0:\xbb\xb2\xc3\xb2\xb5\xdd\xd0\xcf\xdd"
  #if LCD_WIDTH >= 20
    #define MSG_ERR_MAXTEMP_BED               "\xb4\xd7\xb0:\xcd\xde\xaf\xc4\xde\x20\xbb\xb2\xba\xb3\xb5\xdd\xc1\xae\xb3\xb6"
    #define MSG_ERR_MINTEMP_BED               "\xb4\xd7\xb0:\xcd\xde\xaf\xc4\xde\x20\xbb\xb2\xc3\xb2\xb5\xdd\xd0\xcf\xdd"
  #else
    #define MSG_ERR_MAXTEMP_BED               "\xb4\xd7\xb0:\xcd\xde\xaf\xc4\xde\x20\xbb\xb2\xba\xb3\xb5\xdd"
    #define MSG_ERR_MINTEMP_BED               "\xb4\xd7\xb0:\xcd\xde\xaf\xc4\xde\x20\xbb\xb2\xc3\xb2\xb5\xdd"
  #endif
  #define MSG_ERR_Z_HOMING                    MSG_HOME " " MSG_X MSG_Y " " MSG_FIRST
  #define MSG_HALTED                          "\xcc\xdf\xd8\xdd\xc0\xb0\xca\xc3\xb2\xbc\xbc\xcf\xbc\xc0"
  #define MSG_PLEASE_RESET                    "\xd8\xbe\xaf\xc4\xbc\xc3\xb8\xc0\xde\xbb\xb2"
  #define MSG_SHORT_DAY                       "d"
  #define MSG_SHORT_HOUR                      "h"
  #define MSG_SHORT_MINUTE                    "m"
  #define MSG_HEATING                         "\xb6\xc8\xc2\xc1\xad\xb3"
  #define MSG_HEATING_COMPLETE                "\xb6\xc8\xc2\xb6\xdd\xd8\xae\xb3"
  #define MSG_BED_HEATING                     "\xcd\xde\xaf\xc4\xde\x20\xb6\xc8\xc2\xc1\xad\xb3"
  #define MSG_BED_DONE                        "\xcd\xde\xaf\xc4\xde\x20\xb6\xc8\xc2\xb6\xdd\xd8\xae\xb3"
  #define MSG_DELTA_CALIBRATE                 "\xc3\xde\xd9\xc0\x20\xba\xb3\xbe\xb2"
  #define MSG_DELTA_CALIBRATE_X               "X\xbc\xde\xb8\x20\xba\xb3\xbe\xb2"
  #define MSG_DELTA_CALIBRATE_Y               "Y\xbc\xde\xb8\x20\xba\xb3\xbe\xb2"
  #define MSG_DELTA_CALIBRATE_Z               "Z\xbc\xde\xb8\x20\xba\xb3\xbe\xb2"
  #define MSG_DELTA_CALIBRATE_CENTER          "\xc1\xad\xb3\xbc\xdd\x20\xba\xb3\xbe\xb2"
  #define MSG_INFO_MENU                       "\xba\xc9\xcc\xdf\xd8\xdd\xc0\xb0\xc6\xc2\xb2\xc3"
  #define MSG_INFO_PRINTER_MENU               "\xcc\xdf\xd8\xdd\xc0\xb0\xbc\xde\xae\xb3\xce\xb3"
  #define MSG_INFO_STATS_MENU                 "\xcc\xdf\xd8\xdd\xc4\xbc\xde\xae\xb3\xb7\xae\xb3"
  #define MSG_INFO_BOARD_MENU                 "\xbe\xb2\xb7\xde\xae\xb9\xb2\xbc\xde\xae\xb3\xce\xb3"
  #define MSG_INFO_THERMISTOR_MENU            "\xbb\xb0\xd0\xbd\xc0\xb0"
  #define MSG_INFO_EXTRUDERS                  "\xb4\xb8\xbd\xc4\xd9\xb0\xc0\xde\xb0\xbd\xb3"
  #define MSG_INFO_BAUDRATE                   "\xce\xde\xb0\xda\xb0\xc4"
  #define MSG_INFO_PROTOCOL                   "\xcc\xdf\xdb\xc4\xba\xd9"
  #define MSG_CASE_LIGHT                      "\xb7\xae\xb3\xc0\xb2\xc5\xb2\xbc\xae\xb3\xd2\xb2"
  #define MSG_INFO_PRINT_COUNT                "\xcc\xdf\xd8\xdd\xc4\xbd\xb3"
  #define MSG_INFO_COMPLETED_PRINTS           "\xb6\xdd\xd8\xae\xb3\xbd\xb3"
  #define MSG_INFO_PRINT_TIME                 "\xcc\xdf\xd8\xdd\xc4\xbc\xde\xb6\xdd\xd9\xb2\xb9\xb2"
  #define MSG_INFO_PRINT_LONGEST              "\xbb\xb2\xc1\xae\xb3\xcc\xdf\xd8\xdd\xc4\xbc\xde\xb6\xdd"
  #if LCD_WIDTH >= 20
    #define MSG_INFO_PRINT_FILAMENT           "\xcc\xa8\xd7\xd2\xdd\xc4\xbc\xd6\xb3\xd8\xae\xb3\xd9\xb2\xb9\xb2"
  #else
    #define MSG_INFO_PRINT_FILAMENT           "\xcc\xa8\xd7\xd2\xdd\xc4\xbf\xb3\xbc\xd6\xb3\xd8\xae\xb3"
  #endif
  #define MSG_INFO_MIN_TEMP                   "\xbe\xaf\xc3\xb2\xbb\xb2\xc3\xb2\xb5\xdd"
  #define MSG_INFO_MAX_TEMP                   "\xbe\xaf\xc3\xb2\xbb\xb2\xba\xb3\xb5\xdd"
  #if LCD_WIDTH >= 20
    #define MSG_INFO_PSU                      "\xc3\xde\xdd\xb9\xde\xdd\xbc\xad\xcd\xde\xc2"
  #else
    #define MSG_INFO_PSU                      "\xc3\xde\xdd\xb9\xde\xdd"
  #endif
  #define MSG_DRIVE_STRENGTH                  "\xd3\xb0\xc0\xb0\xb8\xc4\xde\xb3\xd8\xae\xb8"
  #if LCD_WIDTH >= 20
    #define MSG_DAC_PERCENT                   "DAC\xbc\xad\xc2\xd8\xae\xb8 %"
  #else
    #define MSG_DAC_PERCENT                   "DAC\xbc\xad\xc2\xd8\xae\xb8"
  #endif
  #define MSG_DAC_EEPROM_WRITE                MSG_STORE_EPROM
  #define MSG_FILAMENT_CHANGE_HEADER          "PRINT PAUSED"
  #define MSG_FILAMENT_CHANGE_OPTION_HEADER   "RESUME OPTIONS:"
  #define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "\xbb\xd7\xc6\xb5\xbc\xc0\xde\xbd"
  #define MSG_FILAMENT_CHANGE_OPTION_RESUME   "\xcc\xdf\xd8\xdd\xc4\xbb\xb2\xb6\xb2"

  #if LCD_HEIGHT >= 4
    // Up to 3 lines allowed
    #define MSG_FILAMENT_CHANGE_INIT_1        "\xba\xb3\xb6\xdd\xa6\xb6\xb2\xbc\xbc\xcf\xbd"
    #define MSG_FILAMENT_CHANGE_INIT_2        "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"
    #define MSG_FILAMENT_CHANGE_UNLOAD_1      "\xcc\xa8\xd7\xd2\xdd\xc4\xc7\xb7\xc0\xde\xbc\xc1\xad\xb3"
    #define MSG_FILAMENT_CHANGE_UNLOAD_2      "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"
    #define MSG_FILAMENT_CHANGE_INSERT_1      "\xcc\xa8\xd7\xd2\xdd\xc4\xa6\xbf\xb3\xc6\xad\xb3\xbc,"
    #define MSG_FILAMENT_CHANGE_INSERT_2      "\xb8\xd8\xaf\xb8\xbd\xd9\xc4\xbf\xde\xaf\xba\xb3\xbc\xcf\xbd"
    #define MSG_FILAMENT_CHANGE_LOAD_1        "\xcc\xa8\xd7\xd2\xdd\xc4\xbf\xb3\xc3\xdd\xc1\xad\xb3"
    #define MSG_FILAMENT_CHANGE_LOAD_2        "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"
    #define MSG_FILAMENT_CHANGE_EXTRUDE_1     "\xcc\xa8\xd7\xd2\xdd\xc4\xb5\xbc\xc0\xde\xbc\xc1\xad\xb3"
    #define MSG_FILAMENT_CHANGE_EXTRUDE_2     "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"
    #define MSG_FILAMENT_CHANGE_RESUME_1      "\xcc\xdf\xd8\xdd\xc4\xa6\xbb\xb2\xb6\xb2\xbc\xcf\xbd"
    #define MSG_FILAMENT_CHANGE_RESUME_2      "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"
  #else // LCD_HEIGHT < 4
    // Up to 2 lines allowed
    #define MSG_FILAMENT_CHANGE_INIT_1        "\xba\xb3\xb6\xdd\xa6\xb6\xb2\xbc\xbc\xcf\xbd"
    #define MSG_FILAMENT_CHANGE_UNLOAD_1      "\xcc\xa8\xd7\xd2\xdd\xc4\xc7\xb7\xc0\xde\xbc\xc1\xad\xb3"
    #if LCD_WIDTH >= 20
      #define MSG_FILAMENT_CHANGE_INSERT_1    "\xbf\xb3\xc6\xad\xb3\xbc\x2c\xb8\xd8\xaf\xb8\xbc\xc3\xb8\xc0\xde\xbb\xb2"
    #else
      #define MSG_FILAMENT_CHANGE_INSERT_1    "\xbf\xb3\xc6\xad\xb3\xbc\x2c\xb8\xd8\xaf\xb8\xbe\xd6"
    #endif
    #define MSG_FILAMENT_CHANGE_LOAD_1        "\xcc\xa8\xd7\xd2\xdd\xc4\xbf\xb3\xc3\xdd\xc1\xad\xb3"
    #define MSG_FILAMENT_CHANGE_EXTRUDE_1     "\xcc\xa8\xd7\xd2\xdd\xc4\xb5\xbc\xc0\xde\xbc\xc1\xad\xb3"
    #define MSG_FILAMENT_CHANGE_RESUME_1      "\xcc\xdf\xd8\xdd\xc4\xa6\xbb\xb2\xb6\xb2\xbc\xcf\xbd"
  #endif // LCD_HEIGHT < 4
#endif //!DOGM
#endif // LANGUAGE_KANA_H
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
 * Japanese (Kana)
 * UTF-8 for Graphical Display
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */

#ifndef LANGUAGE_KANA_UTF_H
#define LANGUAGE_KANA_UTF_H

#define MAPPER_E382E383
#define UTF8_MAPPER E382E383
#define DISPLAY_CHARSET_ISO10646_KANA

// This just to show the potential benefit of unicode.
// This translation can be improved by using the full charset of unicode codeblock U+30A0 to U+30FF.

// No comments not using E382 and E388 symbols please! Otherwise the fonts will grow.
#define WELCOME_MSG                         MACHINE_NAME " ready."
#define MSG_SD_INSERTED                     "カードガソウニュウサレマシタ"        // "Card inserted"
#define MSG_SD_REMOVED                      "カードガアリマセン"               // "Card removed"
#define MSG_LCD_ENDSTOPS                    "エンドストップ"                  // "Endstops" // Max length 8 characters
#define MSG_MAIN                            "メイン"                       // "Main"
#define MSG_AUTOSTART                       "ジドウカイシ"                   // "Autostart"
#define MSG_DISABLE_STEPPERS                "モーターデンゲン オフ"            // "Disable steppers"
#define MSG_DEBUG_MENU                      "デバッグメニュー"                // "Debug Menu"
#define MSG_PROGRESS_BAR_TEST               "プログレスバー テスト"            // "Progress Bar Test"
#define MSG_AUTO_HOME                       "ゲンテンフッキ"                  // "Auto home"
#define MSG_AUTO_HOME_X                     "Xジク ゲンテンフッキ"             // "Home X"
#define MSG_AUTO_HOME_Y                     "Yジク ゲンテンフッキ"             // "Home Y"
#define MSG_AUTO_HOME_Z                     "Zジク ゲンテンフッキ"             // "Home Z"
#define MSG_LEVEL_BED_HOMING                "ゲンテンフッキチュウ"              // "Homing XYZ"
#define MSG_LEVEL_BED_WAITING               "レベリングカイシ"                // "Click to Begin"
#define MSG_LEVEL_BED_NEXT_POINT            "ツギノソクテイテンヘ"             // "Next Point"
#define MSG_LEVEL_BED_DONE                  "レベリングカンリョウ"              // "Leveling Done!"
#define MSG_SET_HOME_OFFSETS                "キジュンオフセットセッテイ"         // "Set home offsets"
#define MSG_HOME_OFFSETS_APPLIED            "オフセットガテキヨウサレマシタ"       // "Offsets applied"
#define MSG_SET_ORIGIN                      "キジュンセット"                 // "Set origin"
#define MSG_PREHEAT_1                       "PLA ヨネツ"                   // "Preheat PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   "PLA スベテヨネツ"              // " All"
#define MSG_PREHEAT_1_BEDONLY               "PLA ベッドヨネツ"              // " Bed"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 "セッテイ"       // " conf"
#define MSG_PREHEAT_2                       "ABS ヨネツ"                  // "Preheat ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   "ABS スベテヨネツ"              // " All"
#define MSG_PREHEAT_2_BEDONLY               "ABS ベッドヨネツ"              // " Bed"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 "セッテイ"       // " conf"
#define MSG_COOLDOWN                        "カネツテイシ"                  // "Cooldown"
#define MSG_SWITCH_PS_ON                    "デンゲン オン"                 // "Switch power on"
#define MSG_SWITCH_PS_OFF                   "デンゲン オフ"                 // "Switch power off"
#define MSG_EXTRUDE                         "オシダシ"                     // "Extrude"
#define MSG_RETRACT                         "ヒキコミセッテイ"                // "Retract"
#define MSG_MOVE_AXIS                       "ジクイドウ"                    // "Move axis"
#define MSG_BED_LEVELING                    "ベッドレベリング"                // "Bed leveling"
#define MSG_LEVEL_BED                       "ベッドレベリング"                // "Level bed"
#define MSG_MOVING                          "イドウチュウ"                   // "Moving..."
#define MSG_FREE_XY                         "XYジク カイホウ"                // "Free XY"
#define MSG_MOVE_X                          "Xジク イドウ"                  // "Move X"
#define MSG_MOVE_Y                          "Yジク イドウ"                  // "Move Y"
#define MSG_MOVE_Z                          "Zジク イドウ"                  // "Move Z"
#define MSG_MOVE_E                          "エクストルーダー"                // "Extruder"
#define MSG_MOVE_01MM                       "0.1mm イドウ"                 // "Move 0.1mm"
#define MSG_MOVE_1MM                        "  1mm イドウ"                 // "Move 1mm"
#define MSG_MOVE_10MM                       " 10mm イドウ"                 // "Move 10mm"
#define MSG_SPEED                           "ソクド"                       // "Speed"
#define MSG_BED_Z                           "Zオフセット"                   // "Bed Z"
#define MSG_NOZZLE                          "ノズル"                       // "Nozzle"
#define MSG_BED                             "ベッド"                       // "Bed"
#define MSG_FAN_SPEED                       "ファンソクド"                    // "Fan speed"
#define MSG_FLOW                            "トシュツリョウ"                   // "Flow"
#define MSG_CONTROL                         "セイギョ"                      // "Control"
#define MSG_MIN                             " " LCD_STR_THERMOMETER " サイテイ" // " Min"
#define MSG_MAX                             " " LCD_STR_THERMOMETER " サイコウ" // " Max"
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " ファクター" // " Fact"
#define MSG_AUTOTEMP                        "ジドウオンドセイギョ"               // "Autotemp"
#define MSG_ON                              "オン "                         // "On "
#define MSG_OFF                             "オフ "                         // "Off"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "センタク"                     // "Select"
#define MSG_ACC                             "カソクド mm/s2"               // "Accel"
#define MSG_JERK                            "ヤクド mm/s"                  // "Jerk"
#define MSG_VX_JERK                         "Xジク ヤクド mm/s"             // "Vx-jerk"
#define MSG_VY_JERK                         "Yジク ヤクド mm/s"             // "Vy-jerk"
#define MSG_VZ_JERK                         "Zジク ヤクド mm/s"             // "Vz-jerk"
#define MSG_VE_JERK                         "エクストルーダー ヤクド"          // "Ve-jerk"
#define MSG_VMAX                            "サイダイオクリソクド "            // "Vmax "
#define MSG_VMIN                            "サイショウオクリソクド"           // "Vmin"
#define MSG_VTRAV_MIN                       "サイショウイドウソクド"           // "VTrav min"
#define MSG_ACCELERATION                    MSG_ACC
#define MSG_AMAX                            "サイダイカソクド "              // "Amax "
#define MSG_A_RETRACT                       "ヒキコミカソクド"               // "A-retract"
#define MSG_A_TRAVEL                        "イドウカソクド"                // "A-travel"
#define MSG_TEMPERATURE                     "オンド"                      // "Temperature"
#define MSG_MOTION                          "ウゴキセッテイ"                // "Motion"
#define MSG_FILAMENT                        "フィラメント"                   // "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define MSG_FILAMENT_DIAM                   "フィラメントチョッケイ"            // "Fil. Dia."
#define MSG_CONTRAST                        "LCDコントラスト"               // "LCD contrast"
#define MSG_STORE_EEPROM                    "メモリヘカクノウ"               // "Store memory"
#define MSG_LOAD_EEPROM                     "メモリカラヨミコミ"               // "Load memory"
#define MSG_RESTORE_FAILSAFE                "セッテイリセット"               // "Restore failsafe"
#define MSG_REFRESH                         "リフレッシュ"                  // "Refresh"
#define MSG_WATCH                           "ジョウホウガメン"               // "Info screen"
#define MSG_PREPARE                         "ジュンビセッテイ"               // "Prepare"
#define MSG_TUNE                            "チョウセイ"                    // "Tune"
#define MSG_PAUSE_PRINT                     "イチジテイシ"                  // "Pause print"
#define MSG_RESUME_PRINT                    "プリントサイカイ"                // "Resume print"
#define MSG_STOP_PRINT                      "プリントテイシ"                 // "Stop print"
#define MSG_CARD_MENU                       "SDカードカラプリント"            // "Print from SD"
#define MSG_NO_CARD                         "SDカードガアリマセン"            // "No SD card"
#define MSG_DWELL                           "キュウシ"                     // "Sleep..."
#define MSG_USERWAIT                        "シバラクオマチクダサイ"           // "Wait for user..."
#define MSG_RESUMING                        "プリントサイカイ"                // "Resuming print"
#define MSG_PRINT_ABORTED                   "プリントガチュウシサレマシタ"       // "Print aborted"
#define MSG_NO_MOVE                         "ウゴキマセン"                  // "No move."
#define MSG_KILLED                          "ヒジョウテイシ"                  // "KILLED. "
#define MSG_STOPPED                         "テイシシマシタ"                  // "STOPPED. "
#define MSG_CONTROL_RETRACT                 "ヒキコミリョウ mm"                // "Retract mm"
#define MSG_CONTROL_RETRACT_SWAP            "ヒキコミリョウS mm"               // "Swap Re.mm"
#define MSG_CONTROL_RETRACTF                "ヒキコミソクド mm/s"             // "Retract  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "ノズルタイヒ mm"                // "Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         "ホショウリョウ mm"               // "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "ホショウリョウS mm"              // "S UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "ホショウソクド mm/s"            // "UnRet  V"
#define MSG_AUTORETRACT                     "ジドウヒキコミ"                 // "AutoRetr."
#define MSG_FILAMENTCHANGE                  "フィラメントコウカン"              // "Change filament"
#define MSG_INIT_SDCARD                     "SDカードサイヨミコミ"             // "Init. SD card"
#define MSG_CNG_SDCARD                      "SDカードコウカン"               // "Change SD card"
#define MSG_ZPROBE_OUT                      "Zプローブ ベッドガイ"            // "Z probe out. bed"
#define MSG_BLTOUCH_SELFTEST                "BLTouch ジコシンダン"          // "BLTouch Self-Test"
#define MSG_BLTOUCH_RESET                   "BLTouch リセット"             // "Reset BLTouch"
#define MSG_HOME                            "サキニ"                      // "Home" // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "ヲフッキサセテクダサイ"           // "first"
#define MSG_ZPROBE_ZOFFSET                  "Zオフセット"                   // "Z Offset"
#define MSG_BABYSTEP_X                      "Xジク ビドウ"                  // "Babystep X"
#define MSG_BABYSTEP_Y                      "Yジク ビドウ"                  // "Babystep Y"
#define MSG_BABYSTEP_Z                      "Zジク ビドウ"                  // "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "イドウゲンカイケンチキノウ"         // "Endstop abort"
#define MSG_HEATING_FAILED_LCD              "カネツシッパイ"                 // "Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              "エラー:ジョウチョウサーミスターキノウ"  // "Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 "ネツボウソウ"                   // "THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     "エラー:サイコウオンチョウカ"         // "Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     "エラー:サイテイオンミマン"          // "Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 "エラー:ベッド サイコウオンチョウカ"    // "Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                 "エラー:ベッド サイテイオンミマン"     // "Err: MINTEMP BED"
#define MSG_ERR_Z_HOMING                    MSG_HOME " " MSG_X MSG_Y " " MSG_FIRST // "G28 Z Forbidden"
#define MSG_HALTED                          "プリンターハテイシシマシタ"         // "PRINTER HALTED"
#define MSG_PLEASE_RESET                    "リセットシテクダサイ"              // "Please reset"
#define MSG_SHORT_DAY                       "d"                          // One character only
#define MSG_SHORT_HOUR                      "h"                          // One character only
#define MSG_SHORT_MINUTE                    "m"                          // One character only
#define MSG_HEATING                         "カネツチュウ"                   // "Heating..."
#define MSG_HEATING_COMPLETE                "カネツカンリョウ"                 // "Heating done."
#define MSG_BED_HEATING                     "ベッド カネツチュウ"              // "Bed Heating."
#define MSG_BED_DONE                        "ベッド カネツカンリョウ"            // "Bed done."
#define MSG_DELTA_CALIBRATE                 "デルタ コウセイ"                // "Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               "Xジク コウセイ"                 // "Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               "Yジク コウセイ"                 // "Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               "Zジク コウセイ"                 // "Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          "チュウシン コウセイ"              // "Calibrate Center"
#define MSG_INFO_MENU                       "コノプリンターニツイテ"             // "About Printer"
#define MSG_INFO_PRINTER_MENU               "プリンタージョウホウ"              // "Printer Info"
#define MSG_INFO_STATS_MENU                 "プリントジョウキョウ"              // "Printer Stats"
#define MSG_INFO_BOARD_MENU                 "セイギョケイジョウホウ"            // "Board Info"
#define MSG_INFO_THERMISTOR_MENU            "サーミスター"                   // "Thermistors"
#define MSG_INFO_EXTRUDERS                  "エクストルーダースウ"             // "Extruders"
#define MSG_INFO_BAUDRATE                   "ボーレート"                    // "Baud"
#define MSG_INFO_PROTOCOL                   "プロトコル"                    // "Protocol"
#define MSG_CASE_LIGHT                      "キョウタイナイショウメイ"       // "Case light"
#define MSG_INFO_PRINT_COUNT                "プリントスウ "                  // "Print Count"
#define MSG_INFO_COMPLETED_PRINTS           "カンリョウスウ"                  // "Completed"
#define MSG_INFO_PRINT_TIME                 "プリントジカンルイケイ"            // "Total print time"
#define MSG_INFO_PRINT_LONGEST              "サイチョウプリントジカン"           // "Longest job time"
#define MSG_INFO_PRINT_FILAMENT             "フィラメントシヨウリョウルイケイ"       // "Extruded total"
#define MSG_INFO_MIN_TEMP                   "セッテイサイテイオン"              // "Min Temp"
#define MSG_INFO_MAX_TEMP                   "セッテイサイコウオン"              // "Max Temp"
#define MSG_INFO_PSU                        "デンゲンシュベツ"                // "Power Supply"
#define MSG_DRIVE_STRENGTH                  "モータークドウリョク"              // "Drive Strength"
#define MSG_DAC_PERCENT                     "DACシュツリョク %"               // "Driver %"
#define MSG_DAC_EEPROM_WRITE                MSG_STORE_EPROM                     // "DAC EEPROM Write"
#define MSG_FILAMENT_CHANGE_HEADER          "PRINT PAUSED"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "RESUME OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "サラニオシダス"                 // "Extrude more"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "プリントサイカイ"                // "Resume print"
#define MSG_FILAMENT_CHANGE_INIT_1          "コウカンヲカイシシマス"            // "Wait for start"
#define MSG_FILAMENT_CHANGE_INIT_2          "シバラクオマチクダサイ"            // "of the filament"
#define MSG_FILAMENT_CHANGE_UNLOAD_1        "フィラメントヌキダシチュウ"          // "Wait for"
#define MSG_FILAMENT_CHANGE_UNLOAD_2        "シバラクオマチクダサイ"            // "filament unload"
#define MSG_FILAMENT_CHANGE_INSERT_1        "フィラメントヲソウニュウシ,"         // "Insert filament"
#define MSG_FILAMENT_CHANGE_INSERT_2        "クリックスルトゾッコウシマス"         // "and press button"
#define MSG_FILAMENT_CHANGE_LOAD_1          "フィラメントソウテンチュウ"          // "Wait for"
#define MSG_FILAMENT_CHANGE_LOAD_2          "シバラクオマチクダサイ"            // "filament load"
#define MSG_FILAMENT_CHANGE_EXTRUDE_1       "フィラメントオシダシチュウ"          // "Wait for"
#define MSG_FILAMENT_CHANGE_EXTRUDE_2       "シバラクオマチクダサイ"            // "filament extrude"
#define MSG_FILAMENT_CHANGE_RESUME_1        "プリントヲサイカイシマス"           // "Wait for print"
#define MSG_FILAMENT_CHANGE_RESUME_2        "シバラクオマチクダサイ"            // "to resume"

#endif // LANGUAGE_KANA_UTF_H
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
 * Dutch
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_NL_H
#define LANGUAGE_NL_H

#define DISPLAY_CHARSET_ASCII

#define WELCOME_MSG                         MACHINE_NAME " gereed."
#define MSG_BACK                            "Terug"
#define MSG_SD_INSERTED                     "Kaart ingestoken"
#define MSG_SD_REMOVED                      "Kaart verwijderd"
#define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters
#define MSG_MAIN                            "Hoofdmenu"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Motoren uit"
#define MSG_DEBUG_MENU                      "Debug Menu" //accepted English terms
#define MSG_PROGRESS_BAR_TEST               "Vooruitgang Test"
#define MSG_AUTO_HOME                       "Auto home"
#define MSG_AUTO_HOME_X                     "Home X"
#define MSG_AUTO_HOME_Y                     "Home Y"
#define MSG_AUTO_HOME_Z                     "Home Z"
#define MSG_LEVEL_BED_HOMING                "Homing XYZ"
#define MSG_LEVEL_BED_WAITING               "Klik voor begin"
#define MSG_LEVEL_BED_NEXT_POINT            "Volgende Plaats"
#define MSG_LEVEL_BED_DONE                  "Bed level kompl."
#define MSG_SET_HOME_OFFSETS                "Zet home offsets"
#define MSG_HOME_OFFSETS_APPLIED            "H offset toegep."
#define MSG_SET_ORIGIN                      "Nulpunt instellen"
#define MSG_PREHEAT_1                       "PLA voorverwarmen"
#define MSG_PREHEAT_1_N                     "PLA voorverw. "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1_N "aan"
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 " Einde"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1_N "Bed"
#define MSG_PREHEAT_1_SETTINGS              "PLA verw. conf"
#define MSG_PREHEAT_2                       "ABS voorverwarmen"
#define MSG_PREHEAT_2_N                     "ABS voorverw. "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2_N "aan"
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 " Einde"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2_N "Bed"
#define MSG_PREHEAT_2_SETTINGS              "ABS verw. conf"
#define MSG_COOLDOWN                        "Afkoelen"
#define MSG_SWITCH_PS_ON                    "Stroom aan"
#define MSG_SWITCH_PS_OFF                   "Stroom uit"
#define MSG_EXTRUDE                         "Extrude"
#define MSG_RETRACT                         "Retract"
#define MSG_MOVE_AXIS                       "As verplaatsen"
#define MSG_BED_LEVELING                    "Bed Leveling"
#define MSG_LEVEL_BED                       "Level bed"
#define MSG_MOVING                          "Verplaatsen..."
#define MSG_FREE_XY                         "Vrij XY"
#define MSG_MOVE_X                          "Verplaats X"
#define MSG_MOVE_Y                          "Verplaats Y"
#define MSG_MOVE_Z                          "Verplaats Z"
#define MSG_MOVE_E                          "Extruder"
#define MSG_MOVE_01MM                       "Verplaats 0.1mm"
#define MSG_MOVE_1MM                        "Verplaats 1mm"
#define MSG_MOVE_10MM                       "Verplaats 10mm"
#define MSG_SPEED                           "Snelheid"
#define MSG_BED_Z                           "Bed Z"
#define MSG_NOZZLE                          "Nozzle"
#define MSG_BED                             "Bed"
#define MSG_FAN_SPEED                       "Fan snelheid"
#define MSG_FLOW                            "Flow"
#define MSG_CONTROL                         "Control"
#define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "Autotemp"
#define MSG_ON                              "Aan "
#define MSG_OFF                             "Uit"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Selecteer"
#define MSG_ACC                             "Versn"
#define MSG_JERK                            "Jerk"
#define MSG_VX_JERK                         "Vx-jerk"
#define MSG_VY_JERK                         "Vy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract"
#define MSG_A_TRAVEL                        "A-travel"
#define MSG_STEPS_PER_MM                    "Steps/mm"
#define MSG_XSTEPS                          "Xsteps/mm"
#define MSG_YSTEPS                          "Ysteps/mm"
#define MSG_ZSTEPS                          "Zsteps/mm"
#define MSG_ESTEPS                          "Esteps/mm"
#define MSG_E1STEPS                         "E1steps/mm"
#define MSG_E2STEPS                         "E2steps/mm"
#define MSG_E3STEPS                         "E3steps/mm"
#define MSG_E4STEPS                         "E4steps/mm"
#define MSG_E5STEPS                         "E5steps/mm"
#define MSG_TEMPERATURE                     "Temperatuur"
#define MSG_MOTION                          "Beweging"
#define MSG_FILAMENT                        "Filament"
#define MSG_ADVANCE_K                       "Advance K" //accepted english dutch
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define MSG_FILAMENT_DIAM                   "Fil. Dia."
#define MSG_CONTRAST                        "LCD contrast"
#define MSG_STORE_EEPROM                    "Geheugen opslaan"
#define MSG_LOAD_EEPROM                     "Geheugen laden"
#define MSG_RESTORE_FAILSAFE                "Noodstop reset"
#define MSG_REFRESH                         "Ververs"
#define MSG_WATCH                           "Info scherm"
#define MSG_PREPARE                         "Voorbereiden"
#define MSG_TUNE                            "Afstellen"
#define MSG_PAUSE_PRINT                     "Print pauzeren"
#define MSG_RESUME_PRINT                    "Print hervatten"
#define MSG_STOP_PRINT                      "Print stoppen"
#define MSG_CARD_MENU                       "Print van SD"
#define MSG_NO_CARD                         "Geen SD kaart"
#define MSG_DWELL                           "Slapen..."
#define MSG_USERWAIT                        "Wachten..."
#define MSG_RESUMING                        "Print hervatten"
#define MSG_PRINT_ABORTED                   "Print afgebroken"
#define MSG_NO_MOVE                         "Geen beweging."
#define MSG_KILLED                          "Afgebroken. "
#define MSG_STOPPED                         "Gestopt. "
#define MSG_CONTROL_RETRACT                 "Retract mm"  //accepted English term in Dutch
#define MSG_CONTROL_RETRACT_SWAP            "Ruil Retract mm"
#define MSG_CONTROL_RETRACTF                "Retract  F"
#define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Ruil UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  F"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Verv. Filament"
#define MSG_INIT_SDCARD                     "Init. SD kaart"
#define MSG_CNG_SDCARD                      "Verv. SD Kaart"
#define MSG_ZPROBE_OUT                      "Z probe uit. bed"
#define MSG_BLTOUCH_SELFTEST                "BLTouch Zelf-Test"
#define MSG_BLTOUCH_RESET                   "Reset BLTouch"
#define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "Eerst"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"  //accepted English term in Dutch
#define MSG_BABYSTEP_X                      "Babystap X"
#define MSG_BABYSTEP_Y                      "Babystap Y"
#define MSG_BABYSTEP_Z                      "Babystap Z"
#define MSG_ENDSTOP_ABORT                   "Endstop afbr."
#define MSG_HEATING_FAILED_LCD              "Voorverw. fout"
#define MSG_ERR_REDUNDANT_TEMP              "Redun. temp fout"
#define MSG_THERMAL_RUNAWAY                 "Therm. wegloop"
#define MSG_ERR_MAXTEMP                     "Err: Max. temp"
#define MSG_ERR_MINTEMP                     "Err: Min. temp"
#define MSG_ERR_MAXTEMP_BED                 "Err: Max.tmp bed"
#define MSG_ERR_MINTEMP_BED                 "Err: Min.tmp bed"
#define MSG_ERR_Z_HOMING                    "Fout Z homing"
#define MSG_HALTED                          "PRINTER GESTOPT"
#define MSG_PLEASE_RESET                    "Reset A.U.B."
#define MSG_SHORT_DAY                       "d" //  One character only. Keep English standard
#define MSG_SHORT_HOUR                      "h" //  One character only
#define MSG_SHORT_MINUTE                    "m" //  One character only
#define MSG_HEATING                         "Voorwarmen..."
#define MSG_HEATING_COMPLETE                "Voorverw. kompl."
#define MSG_BED_HEATING                     "Bed voorverw."
#define MSG_BED_DONE                        "Bed is voorverw."
#define MSG_DELTA_CALIBRATE                 "Delta Calibratie"
#define MSG_DELTA_CALIBRATE_X               "Kalibreer X"
#define MSG_DELTA_CALIBRATE_Y               "Kalibreer Y"
#define MSG_DELTA_CALIBRATE_Z               "Kalibreer Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Kalibreer Midden"
#define MSG_DELTA_AUTO_CALIBRATE            "Auto Calibratie"
#define MSG_DELTA_HEIGHT_CALIBRATE          "Zet Delta Hoogte"

#define MSG_INFO_STATS_MENU                 "Printer Stats"
#define MSG_INFO_BOARD_MENU                 "Board Info" //accepted English term in Dutch
#define MSG_INFO_THERMISTOR_MENU            "Thermistors"
#define MSG_INFO_EXTRUDERS                  "Extruders"
#define MSG_INFO_BAUDRATE                   "Baud"
#define MSG_INFO_MENU                       "Over Printer"
#define MSG_INFO_PRINTER_MENU               "Printer Info"
#define MSG_INFO_PROTOCOL                   "Protocol"
#define MSG_CASE_LIGHT                      "Case licht"

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Printed Aantal"
  #define MSG_INFO_COMPLETED_PRINTS         "Totaal Voltooid"
  #define MSG_INFO_PRINT_TIME               "Totale Printtijd"
  #define MSG_INFO_PRINT_LONGEST            "Langste Printtijd"
  #define MSG_INFO_PRINT_FILAMENT           "Totaal Extrudeert"
#else
  #define MSG_INFO_PRINT_COUNT              "Aantal"
  #define MSG_INFO_COMPLETED_PRINTS         "Voltooid"
  #define MSG_INFO_PRINT_TIME               "Printtijd "
  #define MSG_INFO_PRINT_LONGEST            "Langste"
  #define MSG_INFO_PRINT_FILAMENT           "Extrud."
#endif

#define MSG_INFO_MIN_TEMP                   "Min Temp"
#define MSG_INFO_MAX_TEMP                   "Max Temp"
#define MSG_INFO_PSU                        "PSU"  //accepted English term in Dutch

#define MSG_DRIVE_STRENGTH                  "Motorstroom"
#define MSG_DAC_PERCENT                     "Driver %"  //accepted English term in Dutch
#define MSG_DAC_EEPROM_WRITE                "DAC Opslaan"
#define MSG_FILAMENT_CHANGE_HEADER          "PRINT PAUSED"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "RESUME OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Extrudeer meer"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Hervat print"
#define MSG_FILAMENT_CHANGE_MINTEMP         "Minimum Temp is "
#define MSG_FILAMENT_CHANGE_NOZZLE          " Nozzle: " //accepeted English term
//
// Filament Change screens show up to 3 lines on a 4-line display
//                        ...or up to 2 lines on a 3-line display
//
#if LCD_HEIGHT >= 4
  // Up to 3 lines
  #define MSG_FILAMENT_CHANGE_INIT_1          "Wacht voor start"
  #define MSG_FILAMENT_CHANGE_INIT_2          "filament te"
  #define MSG_FILAMENT_CHANGE_INIT_3          "verwisselen"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Wacht voor"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "filament uit"
  #define MSG_FILAMENT_CHANGE_UNLOAD_3        "te laden"
  #define MSG_FILAMENT_CHANGE_HEAT_1          "Klik knop om..."
  #define MSG_FILAMENT_CHANGE_HEAT_2          "verw. nozzle." //nozzle accepted English term
  #define MSG_FILAMENT_CHANGE_HEATING_1       "Nozzle verw."
  #define MSG_FILAMENT_CHANGE_HEATING_2       "Wacht a.u.b."
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Laad filament"
  #define MSG_FILAMENT_CHANGE_INSERT_2        "en druk knop"
  #define MSG_FILAMENT_CHANGE_INSERT_3        "om verder..."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Wacht voor"
  #define MSG_FILAMENT_CHANGE_LOAD_2          "filament te"
  #define MSG_FILAMENT_CHANGE_LOAD_3          "laden"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Wacht voor"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "filament te"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_3       "extruderen"
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Wacht voor print"
  #define MSG_FILAMENT_CHANGE_RESUME_2        "om verder"
  #define MSG_FILAMENT_CHANGE_RESUME_3        "te gaan"
#else // LCD_HEIGHT < 4
  // Up to 2 lines
  #define MSG_FILAMENT_CHANGE_INIT_1          "Wacht voor"
  #define MSG_FILAMENT_CHANGE_INIT_2          "start..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Wacht voor"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "uitladen..."
  #define MSG_FILAMENT_CHANGE_HEAT_1          "Klik knop om..."
  #define MSG_FILAMENT_CHANGE_HEAT_2          "verw. nozzle." //nozzle accepted English term
  #define MSG_FILAMENT_CHANGE_HEATING_1       "Verwarmen..."
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Laad filament"
  #define MSG_FILAMENT_CHANGE_INSERT_2        "en druk knop"
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Wacht voor"
  #define MSG_FILAMENT_CHANGE_LOAD_2          "inladen..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Wacht voor"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "extrudering"
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Wacht voor"
  #define MSG_FILAMENT_CHANGE_RESUME_2        "printing..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_NL_H
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
 * Polish
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_PL_H
#define LANGUAGE_PL_H

/**
 * One version with accented characters and one without
 */
#if ENABLED(DOGLCD)
  #include "language_pl_utf8.h"
#else
  #define DISPLAY_CHARSET_ASCII

  #define WELCOME_MSG                         MACHINE_NAME " gotowy."
  #define MSG_SD_INSERTED                     "Karta wlozona"
  #define MSG_SD_REMOVED                      "Karta usunieta"
  #define MSG_LCD_ENDSTOPS                    "Krancow." // Max length 8 characters
  #define MSG_MAIN                            "Menu glowne"
  #define MSG_AUTOSTART                       "Autostart"
  #define MSG_DISABLE_STEPPERS                "Wylacz silniki"
  #define MSG_AUTO_HOME                       "Pozycja zerowa"
  #define MSG_AUTO_HOME_X                     "Zeruj X"
  #define MSG_AUTO_HOME_Y                     "Zeruj Y"
  #define MSG_AUTO_HOME_Z                     "Zeruj Z"
  #define MSG_LEVEL_BED                       "Poziom. stolu"
  #define MSG_LEVEL_BED_HOMING                "Pozycja zerowa"
  #define MSG_LEVEL_BED_WAITING               "Kliknij by rozp."
  #define MSG_LEVEL_BED_NEXT_POINT            "Nastepny punkt"
  #define MSG_LEVEL_BED_DONE                  "Wypoziomowano!"
  #define MSG_USER_MENU                       "Wlasne Polecenia"
  #define MSG_SET_HOME_OFFSETS                "Ust. poz. zer."
  #define MSG_HOME_OFFSETS_APPLIED            "Poz. zerowa ust."
  #define MSG_SET_ORIGIN                      "Ustaw punkt zero"
  #define MSG_PREHEAT_1                       "Rozgrzej PLA"
  #define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
  #define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " wsz."
  #define MSG_PREHEAT_1_BEDONLY               "Rozgrzej stol PLA"
  #define MSG_PREHEAT_1_SETTINGS              "Ustaw. rozg. PLA"
  #define MSG_PREHEAT_2                       "Rozgrzej ABS"
  #define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
  #define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " wsz."
  #define MSG_PREHEAT_2_BEDONLY               "Rozgrzej stol ABS"
  #define MSG_PREHEAT_2_SETTINGS              "Ustaw. rozg. ABS"
  #define MSG_COOLDOWN                        "Chlodzenie"
  #define MSG_SWITCH_PS_ON                    "Wlacz zasilacz"
  #define MSG_SWITCH_PS_OFF                   "Wylacz zasilacz"
  #define MSG_EXTRUDE                         "Ekstruzja"
  #define MSG_RETRACT                         "Wycofanie"
  #define MSG_MOVE_AXIS                       "Ruch osi"
  #define MSG_BED_LEVELING                    "Poziom. stolu"
  #define MSG_MOVE_X                          "Przesun w X"
  #define MSG_MOVE_Y                          "Przesun w Y"
  #define MSG_MOVE_Z                          "Przesun w Z"
  #define MSG_MOVE_E                          "Ekstruzja (os E)"
  #define MSG_MOVE_01MM                       "Przesun co .1mm"
  #define MSG_MOVE_1MM                        "Przesun co 1mm"
  #define MSG_MOVE_10MM                       "Przesun co 10mm"
  #define MSG_SPEED                           "Predkosc"
  #define MSG_BED_Z                           "Stol Z"
  #define MSG_NOZZLE                          "Dysza"
  #define MSG_BED                             "Stol"
  #define MSG_FAN_SPEED                       "Obroty wiatraka"
  #define MSG_FLOW                            "Przeplyw"
  #define MSG_CONTROL                         "Ustawienia"
  #define MSG_MIN                             LCD_STR_THERMOMETER " Min"
  #define MSG_MAX                             LCD_STR_THERMOMETER " Max"
  #define MSG_FACTOR                          LCD_STR_THERMOMETER " Mnoznik"
  #define MSG_AUTOTEMP                        "Auto. temperatura"
  #define MSG_ON                              "Wl. "
  #define MSG_OFF                             "Wyl."
  #define MSG_PID_P                           "PID-P"
  #define MSG_PID_I                           "PID-I"
  #define MSG_PID_D                           "PID-D"
  #define MSG_PID_C                           "PID-C"
  #define MSG_SELECT                          "Select"
  #define MSG_ACC                             "Przyspieszenie"
  #define MSG_JERK                            "Zryw"
  #define MSG_VX_JERK                         "Zryw Vx"
  #define MSG_VY_JERK                         "Zryw Vy"
  #define MSG_VZ_JERK                         "Zryw Vz"
  #define MSG_VE_JERK                         "Zryw Ve"
  #define MSG_VMAX                            "Vmax "
  #define MSG_VMIN                            "Vmin"
  #define MSG_VTRAV_MIN                       "Vskok min"
  #define MSG_ACCELERATION                    MSG_ACC
  #define MSG_AMAX                            "Amax"
  #define MSG_A_RETRACT                       "A-wycofanie"
  #define MSG_A_TRAVEL                        "A-przesun."
  #define MSG_STEPS_PER_MM                    "kroki/mm"
  #define MSG_XSTEPS                          "krokiX/mm"
  #define MSG_YSTEPS                          "krokiY/mm"
  #define MSG_ZSTEPS                          "krokiZ/mm"
  #define MSG_ESTEPS                          "krokiE/mm"
  #define MSG_E1STEPS                         "krokiE1/mm"
  #define MSG_E2STEPS                         "krokiE2/mm"
  #define MSG_E3STEPS                         "krokiE3/mm"
  #define MSG_E4STEPS                         "krokiE4/mm"
  #define MSG_E5STEPS                         "krokiE5/mm"
  #define MSG_TEMPERATURE                     "Temperatura"
  #define MSG_MOTION                          "Ruch"
  #define MSG_FILAMENT                        "Filament"
  #define MSG_VOLUMETRIC_ENABLED              "E w mm3"
  #define MSG_FILAMENT_DIAM                   "Sr. fil."
  #define MSG_CONTRAST                        "Kontrast LCD"
  #define MSG_STORE_EEPROM                    "Zapisz w pamieci"
  #define MSG_LOAD_EEPROM                     "Wczytaj z pamieci"
  #define MSG_RESTORE_FAILSAFE                "Ustaw. fabryczne"
  #define MSG_REFRESH                         "Odswiez"
  #define MSG_WATCH                           "Ekran glowny"
  #define MSG_PREPARE                         "Przygotuj"
  #define MSG_TUNE                            "Strojenie"
  #define MSG_PAUSE_PRINT                     "Pauza"
  #define MSG_RESUME_PRINT                    "Wznowienie"
  #define MSG_STOP_PRINT                      "Stop"
  #define MSG_CARD_MENU                       "Karta SD"
  #define MSG_NO_CARD                         "Brak karty"
  #define MSG_DWELL                           "Uspij..."
  #define MSG_USERWAIT                        "Oczekiwanie..."
  #define MSG_RESUMING                        "Wznawianie druku"
  #define MSG_PRINT_ABORTED                   "Druk przerwany"
  #define MSG_NO_MOVE                         "Brak ruchu"
  #define MSG_KILLED                          "Ubity. "
  #define MSG_STOPPED                         "Zatrzymany. "
  #define MSG_CONTROL_RETRACT                 "Wycofaj mm"
  #define MSG_CONTROL_RETRACT_SWAP            "Z Wycof. mm"
  #define MSG_CONTROL_RETRACTF                "Wycofaj  V"
  #define MSG_CONTROL_RETRACT_ZLIFT           "Skok Z mm"
  #define MSG_CONTROL_RETRACT_RECOVER         "Cof. wycof. mm"
  #define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Z Cof. wyc. mm"
  #define MSG_CONTROL_RETRACT_RECOVERF        "Cof. wycof.  V"
  #define MSG_AUTORETRACT                     "Auto. wycofanie"
  #define MSG_FILAMENTCHANGE                  "Zmien filament"
  #define MSG_INIT_SDCARD                     "Inicjal. karty SD"
  #define MSG_CNG_SDCARD                      "Zmiana karty SD"
  #define MSG_ZPROBE_OUT                      "Sonda Z za stolem"
  #define MSG_BLTOUCH_SELFTEST                "BLTouch Self-Test"
  #define MSG_BLTOUCH_RESET                   "Reset BLTouch"
  #define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
  #define MSG_FIRST                           "first"
  #define MSG_ZPROBE_ZOFFSET                  "Offset Z"
  #define MSG_BABYSTEP_X                      "Babystep X"
  #define MSG_BABYSTEP_Y                      "Babystep Y"
  #define MSG_BABYSTEP_Z                      "Babystep Z"
  #define MSG_ENDSTOP_ABORT                   "Blad krancowki"
  #define MSG_HEATING_FAILED_LCD              "Rozgrz. nieudane"
  #define MSG_ERR_REDUNDANT_TEMP              "Blad temperatury"
  #define MSG_THERMAL_RUNAWAY                 "Zanik temp."
  #define MSG_ERR_MAXTEMP                     "Err max temp"
  #define MSG_ERR_MINTEMP                     "Err min temp"
  #define MSG_ERR_MAXTEMP_BED                 "Err max temp stolu"
  #define MSG_ERR_MINTEMP_BED                 "Err min temp stolu"
  #define MSG_ERR_Z_HOMING                    "G28 Z Forbidden"
  #define MSG_HALTED                          "Drukarka zatrzym."
  #define MSG_PLEASE_RESET                    "Prosze zresetowac"
  #define MSG_SHORT_DAY                       "d" // One character only
  #define MSG_SHORT_HOUR                      "g" // One character only
  #define MSG_SHORT_MINUTE                    "m" // One character only
  #define MSG_HEATING                         "Rozgrzewanie..."
  #define MSG_HEATING_COMPLETE                "Rozgrzano"
  #define MSG_BED_HEATING                     "Rozgrzewanie stolu..."
  #define MSG_BED_DONE                        "Rozgrzano stol"
  #define MSG_DELTA_CALIBRATE                 "Kalibrowanie Delty"
  #define MSG_DELTA_CALIBRATE_X               "Kalibruj X"
  #define MSG_DELTA_CALIBRATE_Y               "Kalibruj Y"
  #define MSG_DELTA_CALIBRATE_Z               "Kalibruj Z"
  #define MSG_DELTA_CALIBRATE_CENTER          "Kalibruj srodek"
  
  #define MSG_INFO_MENU                       "O drukarce"
  #define MSG_INFO_PRINTER_MENU               "Info drukarki"
  #define MSG_INFO_STATS_MENU                 "Statystyki"
  #define MSG_INFO_BOARD_MENU                 "Board Info"
  #define MSG_INFO_THERMISTOR_MENU            "Thermistory"
  #define MSG_INFO_EXTRUDERS                  "Ekstrudery"
  #define MSG_INFO_BAUDRATE                   "Predkosc USB"
  #define MSG_INFO_PROTOCOL                   "Protokol"
  #define MSG_CASE_LIGHT                      "Oswietlenie"
  
  #if LCD_WIDTH >= 20
    #define MSG_INFO_PRINT_COUNT              "Wydrukowano"
    #define MSG_INFO_COMPLETED_PRINTS         "Ukonczono"
    #define MSG_INFO_PRINT_TIME               "Czas druku"
    #define MSG_INFO_PRINT_LONGEST            "Najdl. druk"
    #define MSG_INFO_PRINT_FILAMENT           "Uzyty fil."
  #else
    #define MSG_INFO_PRINT_COUNT              "Wydrukowano"
    #define MSG_INFO_COMPLETED_PRINTS         "Ukonczono"
    #define MSG_INFO_PRINT_TIME               "Razem"
    #define MSG_INFO_PRINT_LONGEST            "Najdl. druk"
    #define MSG_INFO_PRINT_FILAMENT           "Uzyty fil."
  #endif
  
  #define MSG_INFO_MIN_TEMP                   "Min Temp"
  #define MSG_INFO_MAX_TEMP                   "Max Temp"
  #define MSG_INFO_PSU                        "Zasilacz"
  
  #define MSG_DRIVE_STRENGTH                  "Sila silnika"
  #define MSG_DAC_PERCENT                     "Sila %"
  #define MSG_DAC_EEPROM_WRITE                "Zapisz DAC EEPROM"
  
  #define MSG_FILAMENT_CHANGE_HEADER          "ZMIEN FILAMENT"
  #define MSG_FILAMENT_CHANGE_OPTION_HEADER   "ZMIEN OPCJE:"
  #define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Ekstruduj wiecej"
  #define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Wznow drukowanie"
  
  #if LCD_HEIGHT >= 4
    // Up to 3 lines allowed
    #define MSG_FILAMENT_CHANGE_INIT_1          "Czekam na "
    #define MSG_FILAMENT_CHANGE_INIT_2          "zmiane filamentu"
    #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Czekam na"
    #define MSG_FILAMENT_CHANGE_UNLOAD_2        "wyjecie filamentu"
    #define MSG_FILAMENT_CHANGE_INSERT_1        "Wloz filament"
    #define MSG_FILAMENT_CHANGE_INSERT_2        "i nacisnij przycisk"
    #define MSG_FILAMENT_CHANGE_INSERT_3        "aby kontynuowac..."
    #define MSG_FILAMENT_CHANGE_LOAD_1          "Czekam na"
    #define MSG_FILAMENT_CHANGE_LOAD_2          "wlozenie filamentu"
    #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Czekam na"
    #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "ekstruzje filamentu"
    #define MSG_FILAMENT_CHANGE_RESUME_1        "Czekam na"
    #define MSG_FILAMENT_CHANGE_RESUME_2        "wznowienie druku"
  #else // LCD_HEIGHT < 4
    // Up to 2 lines allowed
    #define MSG_FILAMENT_CHANGE_INIT_1          "Prosze czekac..."
    #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Wysuwanie..."
    #define MSG_FILAMENT_CHANGE_INSERT_1        "Wloz i nacisnij prz."
    #define MSG_FILAMENT_CHANGE_LOAD_1          "Ladowanie..."
    #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Ekstruzja..."
    #define MSG_FILAMENT_CHANGE_RESUME_1        "Wznowienie..."
  #endif // LCD_HEIGHT < 4
  
  #if LCD_HEIGHT >= 4
    // Up to 3 lines allowed
    #define MSG_FILAMENT_CHANGE_INIT_1          "Czekam na "
    #define MSG_FILAMENT_CHANGE_INIT_2          "zmiane filamentu"
    #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Czekam na"
    #define MSG_FILAMENT_CHANGE_UNLOAD_2        "wyjecie filamentu"
    #define MSG_FILAMENT_CHANGE_INSERT_1        "Wloz filament"
    #define MSG_FILAMENT_CHANGE_INSERT_2        "i nacisnij przycisk"
    #define MSG_FILAMENT_CHANGE_INSERT_3        "aby kontynuowac..."
    #define MSG_FILAMENT_CHANGE_LOAD_1          "Czekam na"
    #define MSG_FILAMENT_CHANGE_LOAD_2          "wlozenie filamentu"
    #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Czekam na"
    #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "ekstruzje filamentu"
    #define MSG_FILAMENT_CHANGE_RESUME_1        "Czekam na"
    #define MSG_FILAMENT_CHANGE_RESUME_2        "wznowienie druku"
  #else // LCD_HEIGHT < 4
    // Up to 2 lines allowed
    #define MSG_FILAMENT_CHANGE_INIT_1          "Prosze czekac..."
    #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Wysuwanie..."
    #define MSG_FILAMENT_CHANGE_INSERT_1        "Wloz i nacisnij prz."
    #define MSG_FILAMENT_CHANGE_LOAD_1          "Ladowanie..."
    #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Ekstruzja..."
    #define MSG_FILAMENT_CHANGE_RESUME_1        "Wznowienie..."
  #endif // LCD_HEIGHT < 4
#endif // !DOGLCD

#endif // LANGUAGE_PL_H
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
 * Polish for DOGM display - includes accented characters
 */

#ifndef LANGUAGE_PL_UTF8_H
#define LANGUAGE_PL_UTF8_H

#define MAPPER_C3C4C5_PL
#define UTF8_MAPPER C3C4C5_PL
#define DISPLAY_CHARSET_ISO10646_PL

#define WELCOME_MSG                         MACHINE_NAME " gotowy."
#define MSG_SD_INSERTED                     "Karta włożona"
#define MSG_SD_REMOVED                      "Karta usunięta"
#define MSG_LCD_ENDSTOPS                    "Kranców." // Max length 8 characters
#define MSG_MAIN                            "Menu główne"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Wyłącz silniki"
#define MSG_AUTO_HOME                       "Pozycja zerowa"
#define MSG_AUTO_HOME_X                     "Zeruj X"
#define MSG_AUTO_HOME_Y                     "Zeruj Y"
#define MSG_AUTO_HOME_Z                     "Zeruj Z"
#define MSG_LEVEL_BED                       "Poziom. stołu"
#define MSG_LEVEL_BED_HOMING                "Pozycja zerowa"
#define MSG_LEVEL_BED_WAITING               "Kliknij by rozp."
#define MSG_LEVEL_BED_NEXT_POINT            "Następny punkt"
#define MSG_LEVEL_BED_DONE                  "Wypoziomowano!"
#define MSG_USER_MENU                       "Własne Polecenia"
#define MSG_SET_HOME_OFFSETS                "Ust. poz. zer."
#define MSG_HOME_OFFSETS_APPLIED            "Poz. zerowa ust."
#define MSG_SET_ORIGIN                      "Ustaw punkt zero"
#define MSG_PREHEAT_1                       "Rozgrzej PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " wsz."
#define MSG_PREHEAT_1_BEDONLY               "Rozgrzej stół PLA"
#define MSG_PREHEAT_1_SETTINGS              "Ustaw. rozg. PLA"
#define MSG_PREHEAT_2                       "Rozgrzej ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " wsz."
#define MSG_PREHEAT_2_BEDONLY               "Rozgrzej stół ABS"
#define MSG_PREHEAT_2_SETTINGS              "Ustaw. rozg. ABS"
#define MSG_COOLDOWN                        "Chłodzenie"
#define MSG_SWITCH_PS_ON                    "Włącz zasilacz"
#define MSG_SWITCH_PS_OFF                   "Wyłącz zasilacz"
#define MSG_EXTRUDE                         "Ekstruzja"
#define MSG_RETRACT                         "Wycofanie"
#define MSG_MOVE_AXIS                       "Ruch osi"
#define MSG_BED_LEVELING                    "Poziom. stołu"
#define MSG_MOVE_X                          "Przesuń w X"
#define MSG_MOVE_Y                          "Przesuń w Y"
#define MSG_MOVE_Z                          "Przesuń w Z"
#define MSG_MOVE_E                          "Ekstruzja (os E)"
#define MSG_MOVE_01MM                       "Przesuń co .1mm"
#define MSG_MOVE_1MM                        "Przesuń co 1mm"
#define MSG_MOVE_10MM                       "Przesuń co 10mm"
#define MSG_SPEED                           "Predkość"
#define MSG_BED_Z                           "Stół Z"
#define MSG_NOZZLE                          "Dysza"
#define MSG_BED                             "Stół"
#define MSG_FAN_SPEED                       "Obroty wiatraka"
#define MSG_FLOW                            "Przepływ"
#define MSG_CONTROL                         "Ustawienia"
#define MSG_MIN                             LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Mnożnik"
#define MSG_AUTOTEMP                        "Auto. temperatura"
#define MSG_ON                              "Wł. "
#define MSG_OFF                             "Wył."
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Select"
#define MSG_ACC                             "Przyśpieszenie"
#define MSG_JERK                            "Zryw"
#define MSG_VX_JERK                         "Zryw Vx"
#define MSG_VY_JERK                         "Zryw Vy"
#define MSG_VZ_JERK                         "Zryw Vz"
#define MSG_VE_JERK                         "Zryw Ve"
#define MSG_VMAX                            "Vmax "
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "Vskok min"
#define MSG_ACCELERATION                    MSG_ACC
#define MSG_AMAX                            "Amax"
#define MSG_A_RETRACT                       "A-wycofanie"
#define MSG_A_TRAVEL                        "A-przesuń."
#define MSG_STEPS_PER_MM                    "kroki/mm"
#define MSG_XSTEPS                          "krokiX/mm"
#define MSG_YSTEPS                          "krokiY/mm"
#define MSG_ZSTEPS                          "krokiZ/mm"
#define MSG_ESTEPS                          "krokiE/mm"
#define MSG_E1STEPS                         "krokiE1/mm"
#define MSG_E2STEPS                         "krokiE2/mm"
#define MSG_E3STEPS                         "krokiE3/mm"
#define MSG_E4STEPS                         "krokiE4/mm"
#define MSG_E5STEPS                         "krokiE5/mm"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Ruch"
#define MSG_FILAMENT                        "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E w mm3"
#define MSG_FILAMENT_DIAM                   "Śr. fil."
#define MSG_CONTRAST                        "Kontrast LCD"
#define MSG_STORE_EEPROM                    "Zapisz w pamięci"
#define MSG_LOAD_EEPROM                     "Wczytaj z pamięci"
#define MSG_RESTORE_FAILSAFE                "Ustaw. fabryczne"
#define MSG_REFRESH                         "Odswież"
#define MSG_WATCH                           "Ekran główny"
#define MSG_PREPARE                         "Przygotuj"
#define MSG_TUNE                            "Strojenie"
#define MSG_PAUSE_PRINT                     "Pauza"
#define MSG_RESUME_PRINT                    "Wznowienie"
#define MSG_STOP_PRINT                      "Stop"
#define MSG_CARD_MENU                       "Karta SD"
#define MSG_NO_CARD                         "Brak karty"
#define MSG_DWELL                           "Uśpij..."
#define MSG_USERWAIT                        "Oczekiwanie..."
#define MSG_RESUMING                        "Wznawianie druku"
#define MSG_PRINT_ABORTED                   "Druk przerwany"
#define MSG_NO_MOVE                         "Brak ruchu"
#define MSG_KILLED                          "Ubity. "
#define MSG_STOPPED                         "Zatrzymany. "
#define MSG_CONTROL_RETRACT                 "Wycofaj mm"
#define MSG_CONTROL_RETRACT_SWAP            "Z Wycof. mm"
#define MSG_CONTROL_RETRACTF                "Wycofaj  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Skok Z mm"
#define MSG_CONTROL_RETRACT_RECOVER         "Cof. wycof. mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Z Cof. wyc. mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "Cof. wycof.  V"
#define MSG_AUTORETRACT                     "Auto. wycofanie"
#define MSG_FILAMENTCHANGE                  "Zmień filament"
#define MSG_INIT_SDCARD                     "Inicjal. karty SD"
#define MSG_CNG_SDCARD                      "Zmiana karty SD"
#define MSG_ZPROBE_OUT                      "Sonda Z za stołem"
#define MSG_BLTOUCH_SELFTEST                "BLTouch Self-Test"
#define MSG_BLTOUCH_RESET                   "Reset BLTouch"
#define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "first"
#define MSG_ZPROBE_ZOFFSET                  "Offset Z"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Błąd krańcówki"
#define MSG_HEATING_FAILED_LCD              "Rozgrz. nieudane"
#define MSG_ERR_REDUNDANT_TEMP              "Błąd temperatury"
#define MSG_THERMAL_RUNAWAY                 "Zanik temp."
#define MSG_ERR_MAXTEMP                     "Err max temp"
#define MSG_ERR_MINTEMP                     "Err min temp"
#define MSG_ERR_MAXTEMP_BED                 "Err max temp stołu"
#define MSG_ERR_MINTEMP_BED                 "Err min temp stołu"
#define MSG_ERR_Z_HOMING                    "G28 Z Forbidden"
#define MSG_HALTED                          "Drukarka zatrzym."
#define MSG_PLEASE_RESET                    "Proszę zresetować"
#define MSG_SHORT_DAY                       "d" // One character only
#define MSG_SHORT_HOUR                      "g" // One character only
#define MSG_SHORT_MINUTE                    "m" // One character only
#define MSG_HEATING                         "Rozgrzewanie..."
#define MSG_HEATING_COMPLETE                "Rozgrzano"
#define MSG_BED_HEATING                     "Rozgrzewanie stołu..."
#define MSG_BED_DONE                        "Rozgrzano stół"
#define MSG_DELTA_CALIBRATE                 "Kalibrowanie Delty"
#define MSG_DELTA_CALIBRATE_X               "Kalibruj X"
#define MSG_DELTA_CALIBRATE_Y               "Kalibruj Y"
#define MSG_DELTA_CALIBRATE_Z               "Kalibruj Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Kalibruj środek"

#define MSG_INFO_MENU                       "O drukarce"
#define MSG_INFO_PRINTER_MENU               "Info drukarki"
#define MSG_INFO_STATS_MENU                 "Statystyki"
#define MSG_INFO_BOARD_MENU                 "Board Info"
#define MSG_INFO_THERMISTOR_MENU            "Thermistory"
#define MSG_INFO_EXTRUDERS                  "Ekstrudery"
#define MSG_INFO_BAUDRATE                   "Predkość USB"
#define MSG_INFO_PROTOCOL                   "Protokół"
#define MSG_CASE_LIGHT                      "Oświetlenie"

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Wydrukowano"
  #define MSG_INFO_COMPLETED_PRINTS         "Ukończono"
  #define MSG_INFO_PRINT_TIME               "Czas druku"
  #define MSG_INFO_PRINT_LONGEST            "Najdł. druk"
  #define MSG_INFO_PRINT_FILAMENT           "Użyty fil."
#else
  #define MSG_INFO_PRINT_COUNT              "Wydrukowano"
  #define MSG_INFO_COMPLETED_PRINTS         "Ukończono"
  #define MSG_INFO_PRINT_TIME               "Razem"
  #define MSG_INFO_PRINT_LONGEST            "Najdł. druk"
  #define MSG_INFO_PRINT_FILAMENT           "Użyty fil."
#endif

#define MSG_INFO_MIN_TEMP                   "Min Temp"
#define MSG_INFO_MAX_TEMP                   "Max Temp"
#define MSG_INFO_PSU                        "Zasilacz"

#define MSG_DRIVE_STRENGTH                  "Siła silnika"
#define MSG_DAC_PERCENT                     "Siła %"
#define MSG_DAC_EEPROM_WRITE                "Zapisz DAC EEPROM"

#define MSG_FILAMENT_CHANGE_HEADER          "ZMIEŃ FILAMENT"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "ZMIEŃ OPCJE:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Ekstruduj więcej"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Wznów drukowanie"

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Czekam na "
  #define MSG_FILAMENT_CHANGE_INIT_2          "zmianę filamentu"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Czekam na"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "wyjęcie filamentu"
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Włóz filament"
  #define MSG_FILAMENT_CHANGE_INSERT_2        "i naciśnij przycisk"
  #define MSG_FILAMENT_CHANGE_INSERT_3        "aby kontynuować..."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Czekam na"
  #define MSG_FILAMENT_CHANGE_LOAD_2          "włożenie filamentu"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Czekam na"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "ekstruzję filamentu"
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Czekam na"
  #define MSG_FILAMENT_CHANGE_RESUME_2        "wznowienie druku"
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Proszę czekać..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Wysuwanie..."
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Włóż i naciśnij prz."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Ładowanie..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Ekstruzja..."
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Wznowienie..."
#endif // LCD_HEIGHT < 4

#endif  // LANGUAGE_PL_UTF8_H
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
 * Portuguese
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_PT_H
#define LANGUAGE_PT_H

#if ENABLED(DOGLCD)
  #include "language_pl_utf8.h"
#else
  #define DISPLAY_CHARSET_ASCII

  #define WELCOME_MSG                         MACHINE_NAME " pronto."
  #define MSG_SD_INSERTED                     "Cartao inserido"
  #define MSG_SD_REMOVED                      "Cartao removido"
  #define MSG_MAIN                            "Menu principal"
  #define MSG_AUTOSTART                       "Autostart"
  #define MSG_DISABLE_STEPPERS                "Desactivar motores"
  #define MSG_AUTO_HOME                       "Ir para origem"
  #define MSG_AUTO_HOME_X                     "Ir para origem X"
  #define MSG_AUTO_HOME_Y                     "Ir para origem Y"
  #define MSG_AUTO_HOME_Z                     "Ir para origem Z"
  #define MSG_LEVEL_BED_HOMING                "Indo para origem"
  #define MSG_LEVEL_BED_WAITING               "Click para iniciar"
  #define MSG_LEVEL_BED_NEXT_POINT            "Proximo ponto"
  #define MSG_LEVEL_BED_DONE                  "Pronto !"
  #define MSG_SET_HOME_OFFSETS                "Definir desvio"
  #define MSG_HOME_OFFSETS_APPLIED            "Offsets applied"
  #define MSG_SET_ORIGIN                      "Definir origem"
  #define MSG_PREHEAT_1                       "Pre-aquecer PLA"
  #define MSG_PREHEAT_1_N                     "Pre-aquecer PLA"
  #define MSG_PREHEAT_1_ALL                   "Pre-aq. PLA Tudo"
  #define MSG_PREHEAT_1_BEDONLY               "Pre-aq. PLA " LCD_STR_THERMOMETER "Base"
  #define MSG_PREHEAT_1_SETTINGS              "Definicoes PLA"
  #define MSG_PREHEAT_2                       "Pre-aquecer ABS"
  #define MSG_PREHEAT_2_N                     "Pre-aquecer ABS "
  #define MSG_PREHEAT_2_ALL                   "Pre-aq. ABS Tudo"
  #define MSG_PREHEAT_2_BEDONLY               "Pre-aq. ABS " LCD_STR_THERMOMETER "Base"
  #define MSG_PREHEAT_2_SETTINGS              "Definicoes ABS"
  #define MSG_COOLDOWN                        "Arrefecer"
  #define MSG_SWITCH_PS_ON                    "Ligar"
  #define MSG_SWITCH_PS_OFF                   "Desligar"
  #define MSG_EXTRUDE                         "Extrudir"
  #define MSG_RETRACT                         "Retrair"
  #define MSG_MOVE_AXIS                       "Mover eixo"
  #define MSG_MOVE_X                          "Mover X"
  #define MSG_MOVE_Y                          "Mover Y"
  #define MSG_MOVE_Z                          "Mover Z"
  #define MSG_MOVE_E                          "Mover Extrusor"
  #define MSG_MOVE_01MM                       "Mover 0.1mm"
  #define MSG_MOVE_1MM                        "Mover 1mm"
  #define MSG_MOVE_10MM                       "Mover 10mm"
  #define MSG_SPEED                           "Velocidade"
  #define MSG_BED_Z                           "Base Z"
  #define MSG_NOZZLE                          LCD_STR_THERMOMETER " Bico"
  #define MSG_BED                             LCD_STR_THERMOMETER " Base"
  #define MSG_FAN_SPEED                       "Vel. ventoinha"
  #define MSG_FLOW                            "Fluxo"
  #define MSG_CONTROL                         "Controlo"
  #define MSG_MIN                             LCD_STR_THERMOMETER " Min"
  #define MSG_MAX                             LCD_STR_THERMOMETER " Max"
  #define MSG_FACTOR                          LCD_STR_THERMOMETER " Fact"
  #define MSG_AUTOTEMP                        "Temp. Automatica"
  #define MSG_ON                              "On "
  #define MSG_OFF                             "Off"
  #define MSG_PID_P                           "PID-P"
  #define MSG_PID_I                           "PID-I"
  #define MSG_PID_D                           "PID-D"
  #define MSG_PID_C                           "PID-C"
  #define MSG_ACC                             "Acc"
  #define MSG_JERK                            "Jerk"
  #define MSG_VX_JERK                         "Vx-jerk"
  #define MSG_VY_JERK                         "Vy-jerk"
  #define MSG_VZ_JERK                         "Vz-jerk"
  #define MSG_VE_JERK                         "Ve-jerk"
  #define MSG_VMAX                            " Vmax "
  #define MSG_VMIN                            "Vmin"
  #define MSG_VTRAV_MIN                       "VTrav min"
  #define MSG_AMAX                            "Amax "
  #define MSG_A_RETRACT                       "A-retraccao"
  #define MSG_A_TRAVEL                        "A-movimento"
  #define MSG_STEPS_PER_MM                    "Passo/mm"
  #define MSG_XSTEPS                          "X passo/mm"
  #define MSG_YSTEPS                          "Y passo/mm"
  #define MSG_ZSTEPS                          "Z passo/mm"
  #define MSG_ESTEPS                          "E passo/mm"
  #define MSG_E1STEPS                         "E1 passo/mm"
  #define MSG_E2STEPS                         "E2 passo/mm"
  #define MSG_E3STEPS                         "E3 passo/mm"
  #define MSG_E4STEPS                         "E4 passo/mm"
  #define MSG_E5STEPS                         "E5 passo/mm"
  #define MSG_TEMPERATURE                     "Temperatura"
  #define MSG_MOTION                          "Movimento"
  #define MSG_FILAMENT                        "Filamento"
  #define MSG_VOLUMETRIC_ENABLED              "E em mm3"
  #define MSG_FILAMENT_DIAM                   "Fil. Diam."
  #define MSG_CONTRAST                        "Contraste"
  #define MSG_STORE_EEPROM                    "Guardar na memoria"
  #define MSG_LOAD_EEPROM                     "Carregar da memoria"
  #define MSG_RESTORE_FAILSAFE                "Rest. de emergen."
  #define MSG_REFRESH                         LCD_STR_REFRESH " Recarregar"
  #define MSG_WATCH                           "Monitorizar"
  #define MSG_PREPARE                         "Preparar"
  #define MSG_TUNE                            "Afinar"
  #define MSG_PAUSE_PRINT                     "Pausar impressao"
  #define MSG_RESUME_PRINT                    "Retomar impressao"
  #define MSG_STOP_PRINT                      "Parar impressao"
  #define MSG_CARD_MENU                       "Imprimir do SD"
  #define MSG_NO_CARD                         "Sem cartao SD"
  #define MSG_DWELL                           "Em espera..."
  #define MSG_USERWAIT                        "A espera de ordem"
  #define MSG_RESUMING                        "Retomando impressao"
  #define MSG_PRINT_ABORTED                   "Impressao cancelada"
  #define MSG_NO_MOVE                         "Sem movimento"
  #define MSG_KILLED                          "EMERGENCIA. "
  #define MSG_STOPPED                         "PARADO. "
  #define MSG_CONTROL_RETRACT                 " Retrair mm"
  #define MSG_CONTROL_RETRACT_SWAP            "Troca Retrair mm"
  #define MSG_CONTROL_RETRACTF                " Retrair  V"
  #define MSG_CONTROL_RETRACT_ZLIFT           " Levantar mm"
  #define MSG_CONTROL_RETRACT_RECOVER         " DesRet mm"
  #define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Troca DesRet mm"
  #define MSG_CONTROL_RETRACT_RECOVERF        " DesRet  V"
  #define MSG_AUTORETRACT                     " AutoRetr."
  #define MSG_FILAMENTCHANGE                  "Trocar filamento"
  #define MSG_INIT_SDCARD                     "Inici. cartao SD"
  #define MSG_CNG_SDCARD                      "Trocar cartao SD"
  #define MSG_ZPROBE_OUT                      "Sensor fora/base"
  #define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
  #define MSG_FIRST                           "first"
  #define MSG_ZPROBE_ZOFFSET                  "Desvio Z"
  #define MSG_BABYSTEP_X                      "Babystep X"
  #define MSG_BABYSTEP_Y                      "Babystep Y"
  #define MSG_BABYSTEP_Z                      "Babystep Z"
  #define MSG_ENDSTOP_ABORT                   "Fim de curso"
  #define MSG_HEATING_FAILED_LCD              "Aquecimento falhou"
  #define MSG_ERR_REDUNDANT_TEMP              "Err: REDUNDANT TEMP"
  #define MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
  #define MSG_ERR_MAXTEMP                     "Err: T Maxima"
  #define MSG_ERR_MINTEMP                     "Err: T Minima"
  #define MSG_ERR_MAXTEMP_BED                 "Err: T Base Maxima"
  #define MSG_ERR_MINTEMP_BED                 "Err: T Base Minima"
  #define MSG_HEATING                         "Aquecendo..."
  #define MSG_HEATING_COMPLETE                "Aquecida."
  #define MSG_BED_HEATING                     "Aquecendo base.."
  #define MSG_BED_DONE                        "Base aquecida."
  #define MSG_DELTA_CALIBRATE                 "Calibracao Delta"
  #define MSG_DELTA_CALIBRATE_X               "Calibrar X"
  #define MSG_DELTA_CALIBRATE_Y               "Calibrar Y"
  #define MSG_DELTA_CALIBRATE_Z               "Calibrar Z"
  #define MSG_DELTA_CALIBRATE_CENTER          "Calibrar Centro"
  
  #define MSG_LCD_ENDSTOPS                    "Fim de curso"
#endif // !DOGM
#endif // LANGUAGE_PT_H
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
 * Portuguese
 * UTF-8 for Graphical Display
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_PT_UTF_H
#define LANGUAGE_PT_UTF_H

#define MAPPER_C2C3
#define UTF8_MAPPER C2C3
#define DISPLAY_CHARSET_ISO10646_1

#define WELCOME_MSG                         MACHINE_NAME " pronto."
#define MSG_SD_INSERTED                     "Cartão inserido"
#define MSG_SD_REMOVED                      "Cartão removido"
#define MSG_MAIN                            "Menu principal"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Desactivar motores"
#define MSG_AUTO_HOME                       "Ir para origem"
#define MSG_AUTO_HOME_X                     "Ir para origem X"
#define MSG_AUTO_HOME_Y                     "Ir para origem Y"
#define MSG_AUTO_HOME_Z                     "Ir para origem Z"
#define MSG_LEVEL_BED_HOMING                "Indo para origem"
#define MSG_LEVEL_BED_WAITING               "Click para iniciar"
#define MSG_LEVEL_BED_NEXT_POINT            "Próximo ponto"
#define MSG_LEVEL_BED_DONE                  "Pronto !"
#define MSG_SET_HOME_OFFSETS                "Definir desvio"
#define MSG_HOME_OFFSETS_APPLIED            "Offsets aplicados"
#define MSG_SET_ORIGIN                      "Definir origem"
#define MSG_PREHEAT_1                       "Pre-aquecer PLA"
#define MSG_PREHEAT_1_N                     "Pre-aquecer PLA"
#define MSG_PREHEAT_1_ALL                   "Pre-aq. PLA Tudo"
#define MSG_PREHEAT_1_BEDONLY               "Pre-aq. PLA " LCD_STR_THERMOMETER "Base"
#define MSG_PREHEAT_1_SETTINGS              "Definições PLA"
#define MSG_PREHEAT_2                       "Pre-aquecer ABS"
#define MSG_PREHEAT_2_N                     "Pre-aquecer ABS "
#define MSG_PREHEAT_2_ALL                   "Pre-aq. ABS Tudo"
#define MSG_PREHEAT_2_BEDONLY               "Pre-aq. ABS " LCD_STR_THERMOMETER "Base"
#define MSG_PREHEAT_2_SETTINGS              "Definições ABS"
#define MSG_COOLDOWN                        "Arrefecer"
#define MSG_SWITCH_PS_ON                    "Ligar"
#define MSG_SWITCH_PS_OFF                   "Desligar"
#define MSG_EXTRUDE                         "Extrudir"
#define MSG_RETRACT                         "Retrair"
#define MSG_MOVE_AXIS                       "Mover eixo"
#define MSG_MOVE_X                          "Mover X"
#define MSG_MOVE_Y                          "Mover Y"
#define MSG_MOVE_Z                          "Mover Z"
#define MSG_MOVE_E                          "Mover Extrusor"
#define MSG_MOVE_01MM                       "Mover 0.1mm"
#define MSG_MOVE_1MM                        "Mover 1mm"
#define MSG_MOVE_10MM                       "Mover 10mm"
#define MSG_SPEED                           "Velocidade"
#define MSG_BED_Z                           "Base Z"
#define MSG_NOZZLE                          " " LCD_STR_THERMOMETER " Bico"
#define MSG_BED                             " " LCD_STR_THERMOMETER " Base"
#define MSG_FAN_SPEED                       "Vel. ventoinha"
#define MSG_FLOW                            "Fluxo"
#define MSG_CONTROL                         "Controlo"
#define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "Temp. Automática"
#define MSG_ON                              "On "
#define MSG_OFF                             "Off"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "Acc"
#define MSG_JERK                            "Jerk"
#define MSG_VX_JERK                         "Vx-jerk"
#define MSG_VY_JERK                         "Vy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            " Vmax "
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retracção"
#define MSG_A_TRAVEL                        "A-movimento"
#define MSG_STEPS_PER_MM                    "Passo/mm"
#define MSG_XSTEPS                          "X passo/mm"
#define MSG_YSTEPS                          "Y passo/mm"
#define MSG_ZSTEPS                          "Z passo/mm"
#define MSG_ESTEPS                          "E passo/mm"
#define MSG_E1STEPS                         "E1 passo/mm"
#define MSG_E2STEPS                         "E2 passo/mm"
#define MSG_E3STEPS                         "E3 passo/mm"
#define MSG_E4STEPS                         "E4 passo/mm"
#define MSG_E5STEPS                         "E5 passo/mm"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Movimento"
#define MSG_FILAMENT                        "Filamento"
#define MSG_VOLUMETRIC_ENABLED              "E em mm3"
#define MSG_FILAMENT_DIAM                   "Fil. Diam."
#define MSG_CONTRAST                        "Contraste"
#define MSG_STORE_EEPROM                    "Guardar na memoria"
#define MSG_LOAD_EEPROM                     "Carregar da memoria"
#define MSG_RESTORE_FAILSAFE                "Rest. de emergen."
#define MSG_REFRESH                         LCD_STR_REFRESH " Recarregar"
#define MSG_WATCH                           "Monitorizar"
#define MSG_PREPARE                         "Preparar"
#define MSG_TUNE                            "Afinar"
#define MSG_PAUSE_PRINT                     "Pausar impressão"
#define MSG_RESUME_PRINT                    "Retomar impressão"
#define MSG_STOP_PRINT                      "Parar impressão"
#define MSG_CARD_MENU                       "Imprimir do SD"
#define MSG_NO_CARD                         "Sem cartão SD"
#define MSG_DWELL                           "Em espera..."
#define MSG_USERWAIT                        "Á espera de ordem"
#define MSG_RESUMING                        "Retomando impressão"
#define MSG_PRINT_ABORTED                   "Impressão cancelada"
#define MSG_NO_MOVE                         "Sem movimento"
#define MSG_KILLED                          "EMERGÊNCIA. "
#define MSG_STOPPED                         "PARADO. "
#define MSG_CONTROL_RETRACT                 " Retrair mm"
#define MSG_CONTROL_RETRACT_SWAP            "Troca Retrair mm"
#define MSG_CONTROL_RETRACTF                " Retrair  V"
#define MSG_CONTROL_RETRACT_ZLIFT           " Levantar mm"
#define MSG_CONTROL_RETRACT_RECOVER         " DesRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Troca DesRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        " DesRet  V"
#define MSG_AUTORETRACT                     " AutoRetr."
#define MSG_FILAMENTCHANGE                  "Trocar filamento"
#define MSG_INIT_SDCARD                     "Inici. cartão SD"
#define MSG_CNG_SDCARD                      "Trocar cartão SD"
#define MSG_ZPROBE_OUT                      "Sensor fora/base"
#define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "first"
#define MSG_ZPROBE_ZOFFSET                  "Desvio Z"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Fim de curso"
#define MSG_HEATING_FAILED_LCD              "Aquecimento falhou"
#define MSG_ERR_REDUNDANT_TEMP              "Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     "Err: T Máxima"
#define MSG_ERR_MINTEMP                     "Err: T Mínima"
#define MSG_ERR_MAXTEMP_BED                 "Err: T Base Máxima"
#define MSG_ERR_MINTEMP_BED                 "Err: T Base Mínima"
#define MSG_HEATING                         "Aquecendo..."
#define MSG_HEATING_COMPLETE                "Aquecida."
#define MSG_BED_HEATING                     "Aquecendo base.."
#define MSG_BED_DONE                        "Base aquecida."
#define MSG_DELTA_CALIBRATE                 "Calibração Delta"
#define MSG_DELTA_CALIBRATE_X               "Calibrar X"
#define MSG_DELTA_CALIBRATE_Y               "Calibrar Y"
#define MSG_DELTA_CALIBRATE_Z               "Calibrar Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Calibrar Centro"

#define MSG_LCD_ENDSTOPS                    "Fim de curso"

#endif // LANGUAGE_PT_UTF_H
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
 * Portuguese (Brazil)
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_PT_BR_H
#define LANGUAGE_PT_BR_H

#if ENABLED(DOGLCD)
  #include "language_pl_utf8.h"
#else
  #define DISPLAY_CHARSET_ASCII

  #define WELCOME_MSG                         MACHINE_NAME " pronto."
  #define MSG_SD_INSERTED                     "Cartao inserido"
  #define MSG_SD_REMOVED                      "Cartao removido"
  #define MSG_MAIN                            "Menu principal"
  #define MSG_AUTOSTART                       "Autostart"
  #define MSG_DISABLE_STEPPERS                "Desabi. motores"
  #define MSG_AUTO_HOME                       "Ir para origen"
  #define MSG_LEVEL_BED_HOMING                "Homing XYZ"
  #define MSG_LEVEL_BED_WAITING               "Click to Begin"
  #define MSG_LEVEL_BED_DONE                  "Leveling Done!"
  #define MSG_SET_HOME_OFFSETS                "Ajustar Jogo"
  #define MSG_HOME_OFFSETS_APPLIED            "Offsets applied"
  #define MSG_SET_ORIGIN                      "Ajustar orig."
  #define MSG_PREHEAT_1                       "Pre-aquecer PLA"
  #define MSG_PREHEAT_1_N                     "Pre-aquecer PLA"
  #define MSG_PREHEAT_1_ALL                   "Pre-aq.Todo PLA"
  #define MSG_PREHEAT_1_BEDONLY               "Pre-aq. PLA " LCD_STR_THERMOMETER "Base"
  #define MSG_PREHEAT_1_SETTINGS              "Ajustar PLA"
  #define MSG_PREHEAT_2                       "Pre-aquecer ABS"
  #define MSG_PREHEAT_2_N                     "Pre-aquecer ABS"
  #define MSG_PREHEAT_2_ALL                   "Pre-aq.Todo ABS"
  #define MSG_PREHEAT_2_BEDONLY               "Pre-aq. ABS " LCD_STR_THERMOMETER "Base"
  #define MSG_PREHEAT_2_SETTINGS              "Ajustar ABS"
  #define MSG_COOLDOWN                        "Esfriar"
  #define MSG_SWITCH_PS_ON                    "Ligar"
  #define MSG_SWITCH_PS_OFF                   "Desligar"
  #define MSG_EXTRUDE                         "Extrudar"
  #define MSG_RETRACT                         "Retrair"
  #define MSG_MOVE_AXIS                       "Mover eixo"
  #define MSG_MOVE_X                          "Mover X"
  #define MSG_MOVE_Y                          "Mover Y"
  #define MSG_MOVE_Z                          "Mover Z"
  #define MSG_MOVE_E                          "Mover Extrusor"
  #define MSG_MOVE_01MM                       "Mover 0.1mm"
  #define MSG_MOVE_1MM                        "Mover 1mm"
  #define MSG_MOVE_10MM                       "Mover 10mm"
  #define MSG_SPEED                           "Velocidade"
  #define MSG_BED_Z                           "Base Z"
  #define MSG_NOZZLE                          LCD_STR_THERMOMETER " Bocal"
  #define MSG_BED                             LCD_STR_THERMOMETER " Base"
  #define MSG_FAN_SPEED                       "Vel. Ventoinha"
  #define MSG_FLOW                            "Fluxo"
  #define MSG_CONTROL                         "Controle"
  #define MSG_MIN                             LCD_STR_THERMOMETER " Min"
  #define MSG_MAX                             LCD_STR_THERMOMETER " Max"
  #define MSG_FACTOR                          LCD_STR_THERMOMETER " Fact"
  #define MSG_AUTOTEMP                        "Temp. Automatica"
  #define MSG_ON                              "Ligado "
  #define MSG_OFF                             "Desligado"
  #define MSG_PID_P                           "PID-P"
  #define MSG_PID_I                           "PID-I"
  #define MSG_PID_D                           "PID-D"
  #define MSG_PID_C                           "PID-C"
  #define MSG_ACC                             "Acc"
  #define MSG_JERK                            "Jogo"
  #define MSG_VX_JERK                         "jogo VX"
  #define MSG_VY_JERK                         "jogo VY"
  #define MSG_VZ_JERK                         "jogo VZ"
  #define MSG_VE_JERK                         "jogo VE"
  #define MSG_VMAX                            " Vmax "
  #define MSG_VMIN                            "Vmin"
  #define MSG_VTRAV_MIN                       "VTrav min"
  #define MSG_AMAX                            "Amax "
  #define MSG_A_RETRACT                       "Retrair A"
  #define MSG_A_TRAVEL                        "A-movimento"
  #define MSG_STEPS_PER_MM                    "Passo/mm"
  #define MSG_XSTEPS                          "Passo X/mm"
  #define MSG_YSTEPS                          "Passo Y/mm"
  #define MSG_ZSTEPS                          "Passo Z/mm"
  #define MSG_ESTEPS                          "E/mm"
  #define MSG_E1STEPS                         "E1/mm"
  #define MSG_E2STEPS                         "E2/mm"
  #define MSG_E3STEPS                         "E3/mm"
  #define MSG_E4STEPS                         "E4/mm"
  #define MSG_E5STEPS                         "E5/mm"
  #define MSG_TEMPERATURE                     "Temperatura"
  #define MSG_MOTION                          "Movimento"
  #define MSG_FILAMENT                        "Filamento"
  #define MSG_VOLUMETRIC_ENABLED              "Extr. em mm3"
  #define MSG_FILAMENT_DIAM                   "Diametro Fil."
  #define MSG_CONTRAST                        "Contraste"
  #define MSG_STORE_EEPROM                    "Salvar"
  #define MSG_LOAD_EEPROM                     "Ler"
  #define MSG_RESTORE_FAILSAFE                "Rest. de emerg."
  #define MSG_REFRESH                         LCD_STR_REFRESH " Restaurar"
  #define MSG_WATCH                           "Monitorar"
  #define MSG_PREPARE                         "Preparar"
  #define MSG_TUNE                            "Afinar"
  #define MSG_PAUSE_PRINT                     "Pausar impressao"
  #define MSG_RESUME_PRINT                    "Resumir impressao"
  #define MSG_STOP_PRINT                      "Parar impressao"
  #define MSG_CARD_MENU                       "Imprimir do SD"
  #define MSG_NO_CARD                         "Sem cartao SD"
  #define MSG_DWELL                           "Repouso..."
  #define MSG_USERWAIT                        "Esperando ordem"
  #define MSG_RESUMING                        "Resumindo Impres."
  #define MSG_PRINT_ABORTED                   "Impres. Abortada."
  #define MSG_NO_MOVE                         "Sem movimento"
  #define MSG_KILLED                          "PARADA DE EMERG."
  #define MSG_STOPPED                         "PARADA. "
  #define MSG_CONTROL_RETRACT                 "Retrair mm"
  #define MSG_CONTROL_RETRACT_SWAP            "Retrair Troca mm"
  #define MSG_CONTROL_RETRACTF                "Retrair  V"
  #define MSG_CONTROL_RETRACT_ZLIFT           "Levantar mm"
  #define MSG_CONTROL_RETRACT_RECOVER         "Des Retrair mm"
  #define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Des RetTroca mm"
  #define MSG_CONTROL_RETRACT_RECOVERF        "Des Retrair  V"
  #define MSG_AUTORETRACT                     "Retracao Autom."
  #define MSG_FILAMENTCHANGE                  "Trocar Filamento"
  #define MSG_INIT_SDCARD                     "Iniciar SD"
  #define MSG_CNG_SDCARD                      "Trocar SD"
  #define MSG_ZPROBE_OUT                      "Son. fora da mesa"
  #define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
  #define MSG_FIRST                           "first"
  #define MSG_ZPROBE_ZOFFSET                  "Deslocamento no Z"
  #define MSG_BABYSTEP_X                      "Passinho X"
  #define MSG_BABYSTEP_Y                      "Passinho Y"
  #define MSG_BABYSTEP_Z                      "Passinho Z"
  #define MSG_ENDSTOP_ABORT                   "Fim de Curso"
  #define MSG_HEATING_FAILED_LCD              "Aquecimento falhou"
  #define MSG_ERR_REDUNDANT_TEMP              "Err: REDUNDANT TEMP"
  #define MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
  #define MSG_ERR_MAXTEMP                     "Err: T Maxima"
  #define MSG_ERR_MINTEMP                     "Err: T Minima"
  #define MSG_ERR_MAXTEMP_BED                 "Err: T Base Maxima"
  #define MSG_ERR_MINTEMP_BED                 "Err: T Base Minima"
  #define MSG_HEATING                         "Aquecendo..."
  #define MSG_HEATING_COMPLETE                "Aquecida."
  #define MSG_BED_HEATING                     "Aquecendo base.."
  #define MSG_BED_DONE                        "Base aquecida."
  #define MSG_DELTA_CALIBRATE                 "Calibrar Delta"
  #define MSG_DELTA_CALIBRATE_X               "Calibrar X"
  #define MSG_DELTA_CALIBRATE_Y               "Calibrar Y"
  #define MSG_DELTA_CALIBRATE_Z               "Calibrar Z"
  #define MSG_DELTA_CALIBRATE_CENTER          "Calibrar Centro"
#endif // !DOGM
#endif // LANGUAGE_PT_BR_H
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
 * Portuguese (Brazil)
 * UTF-8 for Graphical Display
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_PT_BR_UTF_H
#define LANGUAGE_PT_BR_UTF_H

#define MAPPER_C2C3
#define UTF8_MAPPER C2C3
#define DISPLAY_CHARSET_ISO10646_1

#define WELCOME_MSG                         MACHINE_NAME " pronto."
#define MSG_SD_INSERTED                     "Cartão inserido"
#define MSG_SD_REMOVED                      "Cartão removido"
#define MSG_MAIN                            "Menu principal"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Desabi. motores"
#define MSG_AUTO_HOME                       "Ir para origen"
#define MSG_LEVEL_BED_HOMING                "Indo para origem"
#define MSG_LEVEL_BED_WAITING               "Click to Begin"
#define MSG_LEVEL_BED_DONE                  "Leveling Done!"
#define MSG_SET_HOME_OFFSETS                "Ajustar Jogo"
#define MSG_HOME_OFFSETS_APPLIED            "Offsets applied"
#define MSG_SET_ORIGIN                      "Ajustar orig."
#define MSG_PREHEAT_1                       "Pre-aquecer PLA"
#define MSG_PREHEAT_1_N                     "Pre-aquecer PLA"
#define MSG_PREHEAT_1_ALL                   "Pre-aq.Todo PLA"
#define MSG_PREHEAT_1_BEDONLY               "Pre-aq. PLA " LCD_STR_THERMOMETER "Base"
#define MSG_PREHEAT_1_SETTINGS              "Ajustar PLA"
#define MSG_PREHEAT_2                       "Pre-aquecer ABS"
#define MSG_PREHEAT_2_N                     "Pre-aquecer ABS"
#define MSG_PREHEAT_2_ALL                   "Pre-aq.Todo ABS"
#define MSG_PREHEAT_2_BEDONLY               "Pre-aq. ABS " LCD_STR_THERMOMETER "Base"
#define MSG_PREHEAT_2_SETTINGS              "Ajustar ABS"
#define MSG_COOLDOWN                        "Esfriar"
#define MSG_SWITCH_PS_ON                    "Ligar"
#define MSG_SWITCH_PS_OFF                   "Desligar"
#define MSG_EXTRUDE                         "Extrudar"
#define MSG_RETRACT                         "Retrair"
#define MSG_MOVE_AXIS                       "Mover eixo"
#define MSG_MOVE_X                          "Mover X"
#define MSG_MOVE_Y                          "Mover Y"
#define MSG_MOVE_Z                          "Mover Z"
#define MSG_MOVE_E                          "Mover Extrusor"
#define MSG_MOVE_01MM                       "Mover 0.1mm"
#define MSG_MOVE_1MM                        "Mover 1mm"
#define MSG_MOVE_10MM                       "Mover 10mm"
#define MSG_SPEED                           "Velocidade"
#define MSG_BED_Z                           "Base Z"
#define MSG_NOZZLE                          LCD_STR_THERMOMETER " Bocal"
#define MSG_BED                             LCD_STR_THERMOMETER " Base"
#define MSG_FAN_SPEED                       "Vel. Ventoinha"
#define MSG_FLOW                            "Fluxo"
#define MSG_CONTROL                         "Controle"
#define MSG_MIN                             LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "Temp. Automática"
#define MSG_ON                              "Ligado "
#define MSG_OFF                             "Desligado"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "Acc"
#define MSG_JERK                            "Jogo"
#define MSG_VX_JERK                         "jogo VX"
#define MSG_VY_JERK                         "jogo VY"
#define MSG_VZ_JERK                         "jogo VZ"
#define MSG_VE_JERK                         "jogo VE"
#define MSG_VMAX                            " Vmax "
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "Retrair A"
#define MSG_A_TRAVEL                        "A-movimento"
#define MSG_STEPS_PER_MM                    "Passo/mm"
#define MSG_XSTEPS                          "Passo X/mm"
#define MSG_YSTEPS                          "Passo Y/mm"
#define MSG_ZSTEPS                          "Passo Z/mm"
#define MSG_ESTEPS                          "E/mm"
#define MSG_E1STEPS                         "E1/mm"
#define MSG_E2STEPS                         "E2/mm"
#define MSG_E3STEPS                         "E3/mm"
#define MSG_E4STEPS                         "E4/mm"
#define MSG_E5STEPS                         "E5/mm"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Movimento"
#define MSG_FILAMENT                        "Filamento"
#define MSG_VOLUMETRIC_ENABLED              "Extr. em mm3"
#define MSG_FILAMENT_DIAM                   "Diametro Fil."
#define MSG_CONTRAST                        "Contraste"
#define MSG_STORE_EEPROM                    "Salvar"
#define MSG_LOAD_EEPROM                     "Ler"
#define MSG_RESTORE_FAILSAFE                "Rest. de emerg."
#define MSG_REFRESH                         LCD_STR_REFRESH " Restaurar"
#define MSG_WATCH                           "Monitorar"
#define MSG_PREPARE                         "Preparar"
#define MSG_TUNE                            "Afinar"
#define MSG_PAUSE_PRINT                     "Pausar impressão"
#define MSG_RESUME_PRINT                    "Resumir impressão"
#define MSG_STOP_PRINT                      "Parar impressão"
#define MSG_CARD_MENU                       "Imprimir do SD"
#define MSG_NO_CARD                         "Sem cartão SD"
#define MSG_DWELL                           "Repouso..."
#define MSG_USERWAIT                        "Esperando ordem"
#define MSG_RESUMING                        "Resumindo Impres."
#define MSG_PRINT_ABORTED                   "Impres. Abortada."
#define MSG_NO_MOVE                         "Sem movimento"
#define MSG_KILLED                          "PARADA DE EMERG."
#define MSG_STOPPED                         "PARADA. "
#define MSG_CONTROL_RETRACT                 "Retrair mm"
#define MSG_CONTROL_RETRACT_SWAP            "Retrair Troca mm"
#define MSG_CONTROL_RETRACTF                "Retrair  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Levantar mm"
#define MSG_CONTROL_RETRACT_RECOVER         "Des Retrair mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Des RetTroca mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "Des Retrair  V"
#define MSG_AUTORETRACT                     "Retração Autom."
#define MSG_FILAMENTCHANGE                  "Trocar Filamento"
#define MSG_INIT_SDCARD                     "Iniciar SD"
#define MSG_CNG_SDCARD                      "Trocar SD"
#define MSG_ZPROBE_OUT                      "Son. fora da mesa"
#define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "first"
#define MSG_ZPROBE_ZOFFSET                  "Deslocamento no Z"
#define MSG_BABYSTEP_X                      "Passinho X"
#define MSG_BABYSTEP_Y                      "Passinho Y"
#define MSG_BABYSTEP_Z                      "Passinho Z"
#define MSG_ENDSTOP_ABORT                   "Fim de Curso"
#define MSG_HEATING_FAILED_LCD              "Aquecimento falhou"
#define MSG_ERR_REDUNDANT_TEMP              "Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     "Err: T Máxima"
#define MSG_ERR_MINTEMP                     "Err: T Mínima"
#define MSG_ERR_MAXTEMP_BED                 "Err: T Base Máxima"
#define MSG_ERR_MINTEMP_BED                 "Err: T Base Mínima"
#define MSG_HEATING                         "Aquecendo..."
#define MSG_HEATING_COMPLETE                "Aquecida."
#define MSG_BED_HEATING                     "Aquecendo base.."
#define MSG_BED_DONE                        "Base aquecida."
#define MSG_DELTA_CALIBRATE                 "Calibrar Delta"
#define MSG_DELTA_CALIBRATE_X               "Calibrar X"
#define MSG_DELTA_CALIBRATE_Y               "Calibrar Y"
#define MSG_DELTA_CALIBRATE_Z               "Calibrar Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Calibrar Centro"

#endif // LANGUAGE_PT_BR_UTF_H
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
 * Russian
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_RU_H
#define LANGUAGE_RU_H

#define MAPPER_D0D1                // For Cyrillic
#define UTF8_MAPPER D0D1
#define DISPLAY_CHARSET_ISO10646_5

#define WELCOME_MSG                         MACHINE_NAME " Готов."
#define MSG_BACK                            "Назад"
#define MSG_SD_INSERTED                     "Карта вставлена"
#define MSG_SD_REMOVED                      "Карта извлечена"
#define MSG_LCD_ENDSTOPS                    "Концевики"
#define MSG_MAIN                            "Меню"
#define MSG_AUTOSTART                       "Автостарт"
#define MSG_DISABLE_STEPPERS                "Выкл. двигатели"
#define MSG_DEBUG_MENU                      "Меню отладки"
#define MSG_PROGRESS_BAR_TEST               "Тест индикатора"
#define MSG_AUTO_HOME                       "Авто Парковка"
#define MSG_AUTO_HOME_X                     "Парковка X"
#define MSG_AUTO_HOME_Y                     "Парковка Y"
#define MSG_AUTO_HOME_Z                     "Парковка Z"
#define MSG_LEVEL_BED_HOMING                "Нулевое полож"
#define MSG_LEVEL_BED_WAITING               "Нажмите начать"
#define MSG_LEVEL_BED_NEXT_POINT            "Следующая точка"
#define MSG_LEVEL_BED_DONE                  "Выравнинваие готово!"
#define MSG_Z_FADE_HEIGHT                   "Высота спада"
#define MSG_SET_HOME_OFFSETS                "Запомнить парковку"
#define MSG_HOME_OFFSETS_APPLIED            "Коррекции примен"
#define MSG_SET_ORIGIN                      "Запомнить ноль"
#define MSG_PREHEAT_1                       "Преднагрев PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " Всё"
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 " Сопло"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " Стол"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " Настр."
#define MSG_PREHEAT_2                       "Преднагрев ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " Всё"
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 " Сопло"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " Стол"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " Настр."
#define MSG_COOLDOWN                        "Охлаждение"
#define MSG_SWITCH_PS_ON                    "Включить Питание"
#define MSG_SWITCH_PS_OFF                   "Отключить Питание"
#define MSG_EXTRUDE                         "Экструзия"
#define MSG_RETRACT                         "Втягивание"
#define MSG_MOVE_AXIS                       "Движение по осям"
#define MSG_BED_LEVELING                    "Калибровать стол"
#define MSG_LEVEL_BED                       "Калибровать стол"
#define MSG_EDITING_STOPPED                 "Ред. сетки завершена"
#define MSG_USER_MENU                       "Свои комманды"
#define MSG_UBL_DOING_G29                   "Выполняем G29"
#define MSG_UBL_UNHOMED                     "Паркуем сначала XYZ"
#define MSG_UBL_TOOLS                       "Утилиты UBL"
#define MSG_UBL_LEVEL_BED                   "Калибровка UBL"
#define MSG_UBL_MANUAL_MESH                 "Постр. сетку от руки"
#define MSG_UBL_BC_INSERT                   "Пост. шимм и измер."
#define MSG_UBL_BC_INSERT2                  "Измерение"
#define MSG_UBL_BC_REMOVE                   "Удал. и измер. стол"
#define MSG_UBL_MOVING_TO_NEXT              "Двигаемся дальше"
#define MSG_UBL_ACTIVATE_MESH               "Активировать UBL"
#define MSG_UBL_DEACTIVATE_MESH             "Выключить UBL"
#define MSG_UBL_SET_BED_TEMP                "Температура стола"
#define MSG_UBL_CUSTOM_BED_TEMP             MSG_UBL_SET_BED_TEMP
#define MSG_UBL_SET_HOTEND_TEMP             "Температура сопла"
#define MSG_UBL_CUSTOM_HOTEND_TEMP          MSG_UBL_SET_HOTEND_TEMP
#define MSG_UBL_MESH_EDIT                   "Редактор сеток"
#define MSG_UBL_EDIT_CUSTOM_MESH            "Редакт. свою сетку"
#define MSG_UBL_FINE_TUNE_MESH              "Точ. настройка сетки"
#define MSG_UBL_DONE_EDITING_MESH           "Ред. сетки завершено"
#define MSG_UBL_BUILD_CUSTOM_MESH           "Построить свою сетку"
#define MSG_UBL_BUILD_MESH_MENU             "Построить сетку"
#define MSG_UBL_BUILD_PLA_MESH              "Построить сетку PLA"
#define MSG_UBL_BUILD_ABS_MESH              "Построить сетку ABS"
#define MSG_UBL_BUILD_COLD_MESH             "Построить хол. сетку"
#define MSG_UBL_MESH_HEIGHT_ADJUST          "Устан. высоту сетки"
#define MSG_UBL_MESH_HEIGHT_AMOUNT          "Высота"
#define MSG_UBL_VALIDATE_MESH_MENU          "Проверить сетку"
#define MSG_UBL_VALIDATE_PLA_MESH           "Проверить сетку PLA"
#define MSG_UBL_VALIDATE_ABS_MESH           "Проверить сетку ABS"
#define MSG_UBL_VALIDATE_CUSTOM_MESH        "Проверить свою сетку"
#define MSG_UBL_CONTINUE_MESH               "Продолжить сетку"
#define MSG_UBL_MESH_LEVELING               "Калибровка сетки"
#define MSG_UBL_3POINT_MESH_LEVELING        "Калибровка 3-х точек"
#define MSG_UBL_GRID_MESH_LEVELING          "Калибровка растера"
#define MSG_UBL_MESH_LEVEL                  "Выровнить сетку"
#define MSG_UBL_SIDE_POINTS                 "Крайние точки"
#define MSG_UBL_MAP_TYPE                    "Тип карты"
#define MSG_UBL_OUTPUT_MAP                  "Вывести карту сетки"
#define MSG_UBL_OUTPUT_MAP_HOST             "Вывести на хост"
#define MSG_UBL_OUTPUT_MAP_CSV              "Вывести в CSV"
#define MSG_UBL_OUTPUT_MAP_BACKUP           "Забекапить сетку"
#define MSG_UBL_INFO_UBL                    "Выдача инфор. UBL"
#define MSG_UBL_EDIT_MESH_MENU              "Редактировать сетку"
#define MSG_UBL_FILLIN_AMOUNT               "Заполнить значения"
#define MSG_UBL_MANUAL_FILLIN               "Ручное заполнение"
#define MSG_UBL_SMART_FILLIN                "Уменое заполнение"
#define MSG_UBL_FILLIN_MESH                 "Заполнить сетку"
#define MSG_UBL_INVALIDATE_ALL              "Аннулировать всё"
#define MSG_UBL_INVALIDATE_CLOSEST          "Аннулир. ближ. точку"
#define MSG_UBL_FINE_TUNE_ALL               "Точ. настройка всего"
#define MSG_UBL_FINE_TUNE_CLOSEST           "Настр. ближ. точки"
#define MSG_UBL_STORAGE_MESH_MENU           "Хранилище сетей"
#define MSG_UBL_STORAGE_SLOT                "Слот памяти"
#define MSG_UBL_LOAD_MESH                   "Загрузить стол сетки"
#define MSG_UBL_SAVE_MESH                   "Сохранить стол сетки"
#define MSG_UBL_SAVE_ERROR                  "Ошибка: Сохр. UBL"
#define MSG_UBL_RESTORE_ERROR               "Ошибка: Загрузки UBL"
#define MSG_UBL_Z_OFFSET_STOPPED            "Смещение Z останов."
#define MSG_UBL_STEP_BY_STEP_MENU           "Пошаговый UBL"
#define MSG_MOVING                          "Движемся..."
#define MSG_FREE_XY                         "Освобождаем XY"
#define MSG_MOVE_X                          "Движение по X"
#define MSG_MOVE_Y                          "Движение по Y"
#define MSG_MOVE_Z                          "Движение по Z"
#define MSG_MOVE_E                          "Экструдер"
#define MSG_MOVE_01MM                       "Движение 0.1mm"
#define MSG_MOVE_1MM                        "Движение 1mm"
#define MSG_MOVE_10MM                       "Движение 10mm"
#define MSG_SPEED                           "Скорость"
#define MSG_BED_Z                           "Z стола"
#define MSG_NOZZLE                          LCD_STR_THERMOMETER " Сопло"
#define MSG_BED                             LCD_STR_THERMOMETER " Стол"
#define MSG_FAN_SPEED                       "Кулер"
#define MSG_FLOW                            "Поток"
#define MSG_CONTROL                         "Настройки"
#define MSG_MIN                             LCD_STR_THERMOMETER " Минимум"
#define MSG_MAX                             LCD_STR_THERMOMETER " Максимум"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Фактор"
#define MSG_AUTOTEMP                        "Автотемпература"
#define MSG_ON                              "Вкл. "
#define MSG_OFF                             "Откл. "
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Выбор"
#define MSG_ACC                             "Ускорение"
#define MSG_JERK                            "Рывок"
#define MSG_VX_JERK                         "Vx-рывок"
#define MSG_VY_JERK                         "Vy-рывок"
#define MSG_VZ_JERK                         "Vz-рывок"
#define MSG_VE_JERK                         "Ve-рывок"
#define MSG_VELOCITY                        "Скорость"
#define MSG_VMAX                            "Vмакс "
#define MSG_VMIN                            "Vмин"
#define MSG_VTRAV_MIN                       "Vпутеш. мин"
#define MSG_ACCELERATION                    "Ускорение"
#define MSG_AMAX                            "Aмакс"
#define MSG_A_RETRACT                       "A-втягивание"
#define MSG_A_TRAVEL                        "A-путеш."
#define MSG_STEPS_PER_MM                    "Шаг/мм"
#define MSG_XSTEPS                          "X шаг/мм"
#define MSG_YSTEPS                          "Y шаг/мм"
#define MSG_ZSTEPS                          "Z шаг/мм"
#define MSG_ESTEPS                          "E шаг/мм"
#define MSG_E1STEPS                         "E1 шаг/мм"
#define MSG_E2STEPS                         "E2 шаг/мм"
#define MSG_E3STEPS                         "E3 шаг/мм"
#define MSG_E4STEPS                         "E4 шаг/мм"
#define MSG_E5STEPS                         "E5 шаг/мм"
#define MSG_TEMPERATURE                     "Температура"
#define MSG_MOTION                          "Механика"
#define MSG_FILAMENT                        "Пруток"
#define MSG_VOLUMETRIC_ENABLED              "E в mm3"
#define MSG_FILAMENT_DIAM                   "Диаметр прутка"
#define MSG_ADVANCE_K                       "K продвижения"
#define MSG_CONTRAST                        "Контраст LCD"
#define MSG_STORE_EEPROM                    "Сохранить в EEPROM"
#define MSG_LOAD_EEPROM                     "Считать из EEPROM"
#define MSG_RESTORE_FAILSAFE                "Сброс EEPROM"
#define MSG_INIT_EEPROM                     "Иниц. EEPROM"
#define MSG_REFRESH                         "Обновить"
#define MSG_WATCH                           "Обзор"
#define MSG_PREPARE                         "Действия"
#define MSG_TUNE                            "Настройки"
#define MSG_PAUSE_PRINT                     "Пауза печати"
#define MSG_RESUME_PRINT                    "Продолжить печать"
#define MSG_STOP_PRINT                      "Остановить печать"
#define MSG_CARD_MENU                       "Обзор карты"
#define MSG_NO_CARD                         "Нет карты"
#define MSG_DWELL                           "Сон..."
#define MSG_USERWAIT                        "Продолжить..."
#define MSG_PRINT_PAUSED                    "Печать остановлена"
#define MSG_RESUMING                        "Возобновление..."
#define MSG_PRINT_ABORTED                   "Отмена печати"
#define MSG_NO_MOVE                         "Нет движения."
#define MSG_KILLED                          "УБИТО."
#define MSG_STOPPED                         "ОСТАНОВЛЕНО."
#define MSG_CONTROL_RETRACT                 "Втягивание mm"
#define MSG_CONTROL_RETRACT_SWAP            "Втяг. смены mm"
#define MSG_CONTROL_RETRACTF                "Втягивание V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Втяг. прыжка mm"
#define MSG_CONTROL_RETRACT_RECOVER         "Возврат mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Возврат смены mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "Возврат  V"
#define MSG_AUTORETRACT                     "Авто Втягивание"
#define MSG_FILAMENTCHANGE                  "Смена прутка"
#define MSG_INIT_SDCARD                     "Иниц. карту"
#define MSG_CNG_SDCARD                      "Сменить карту"
#define MSG_ZPROBE_OUT                      "Z датчик вне стола"
#define MSG_BLTOUCH                         "BLTouch"
#define MSG_BLTOUCH_SELFTEST                "Тестирование BLTouch"
#define MSG_BLTOUCH_RESET                   "Сброс BLTouch"
#define MSG_BLTOUCH_DEPLOY                  "Установка BLTouch"
#define MSG_BLTOUCH_STOW                    "Набивка BLTouch"
#define MSG_HOME                            "Паркуй"
#define MSG_FIRST                           "первый"
#define MSG_ZPROBE_ZOFFSET                  "Смещение Z"
#define MSG_BABYSTEP_X                      "Микрошаг X"
#define MSG_BABYSTEP_Y                      "Микрошаг Y"
#define MSG_BABYSTEP_Z                      "Микрошаг Z"
#define MSG_ENDSTOP_ABORT                   "Сработал концевик"
#define MSG_HEATING_FAILED_LCD              "Разогрев не удался"
#define MSG_ERR_REDUNDANT_TEMP              "Ошибка: T ред."
#define MSG_THERMAL_RUNAWAY                 "ТЕПЛО УБЕГАНИЯ!"
#define MSG_ERR_MAXTEMP                     "Ошибка: Т макс."
#define MSG_ERR_MINTEMP                     "Ошибка: Т мин."
#define MSG_ERR_MAXTEMP_BED                 "Ошибка:Т макс.стол"
#define MSG_ERR_MINTEMP_BED                 "Ошибка:Т мин.стол"
#define MSG_ERR_Z_HOMING                    "G28 Z Запрещено"
#define MSG_HALTED                          "ПРИНТЕР ОСТАНОВЛЕН"
#define MSG_PLEASE_RESET                    "Нажмите ресет"
#define MSG_SHORT_DAY                       "д" // One character only
#define MSG_SHORT_HOUR                      "ч" // One character only
#define MSG_SHORT_MINUTE                    "м" // One character only
#define MSG_HEATING                         "Нагреваю сопло..."
#define MSG_HEATING_COMPLETE                "Нагрев выполнен"
#define MSG_BED_HEATING                     "Нагреваю стол"
#define MSG_BED_DONE                        "Стол разогрет"
#define MSG_DELTA_CALIBRATE                 "Калибровка Delta"
#define MSG_DELTA_CALIBRATE_X               "Калибровать X"
#define MSG_DELTA_CALIBRATE_Y               "Калибровать Y"
#define MSG_DELTA_CALIBRATE_Z               "Калибровать Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Калибровать центр"
#define MSG_DELTA_SETTINGS                  "Пок. настройки Delta"
#define MSG_DELTA_AUTO_CALIBRATE            "Авто калибровка"
#define MSG_DELTA_HEIGHT_CALIBRATE          "Задать высоту Delta"
#define MSG_INFO_MENU                       "О принтере"
#define MSG_INFO_PRINTER_MENU               "Инф. о принтере"
#define MSG_3POINT_LEVELING                 "Калибровка 3-х точек"
#define MSG_LINEAR_LEVELING                 "Линейная калибровка"
#define MSG_BILINEAR_LEVELING               "Билинейная калибр."
#define MSG_UBL_LEVELING                    "Калибровка UBL"
#define MSG_MESH_LEVELING                   "Калибровка сетки"
#define MSG_INFO_STATS_MENU                 "Статистика принтера"
#define MSG_INFO_BOARD_MENU                 "Информация о плате"
#define MSG_INFO_THERMISTOR_MENU            "Термисторы"
#define MSG_INFO_EXTRUDERS                  "Экструдеры"
#define MSG_INFO_BAUDRATE                   "Бод"
#define MSG_INFO_PROTOCOL                   "Протокол"
#define MSG_CASE_LIGHT                      "Корпусное освещение"
#define MSG_CASE_LIGHT_BRIGHTNESS           "Яркость освещения"
#if LCD_WIDTH >= 20
  #define MSG_INFO_COMPLETED_PRINTS         "Закончено"
  #define MSG_INFO_PRINT_TIME               "Полное время печати"
  #define MSG_INFO_PRINT_FILAMENT           "Длинна филамента"
#else
  #define MSG_INFO_PRINT_COUNT              "Отпечатков"
  #define MSG_INFO_COMPLETED_PRINTS         "Закончено"
  #define MSG_INFO_PRINT_TIME               "Всего"
  #define MSG_INFO_PRINT_LONGEST            "Наибольшее"
  #define MSG_INFO_PRINT_FILAMENT           "Выдавлено"
#endif
#define MSG_INFO_MIN_TEMP                   "Мин. Т"
#define MSG_INFO_MAX_TEMP                   "Макс. Т"
#define MSG_INFO_PSU                        "Блок питания"
#define MSG_DRIVE_STRENGTH                  "Сила привода"
#define MSG_DAC_PERCENT                     "Привод %"
#define MSG_DAC_EEPROM_WRITE                "Записи DAC EEPROM"
#define MSG_FILAMENT_CHANGE_HEADER          "ПЕЧАТЬ ОСТАНОВЛЕНА"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "ОПЦИИ ВОЗОБНОВЛЕНИЯ:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Выдавить ещё"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Возобновить печать"
#define MSG_FILAMENT_CHANGE_MINTEMP         "Мин. температура"
#define MSG_FILAMENT_CHANGE_NOZZLE          "  Сопла: "
//
// Filament Change screens show up to 3 lines on a 4-line display
//                        ...or up to 2 lines on a 3-line display
//
#if LCD_HEIGHT >= 4
  #define MSG_FILAMENT_CHANGE_INIT_1      "Ожидайте"
  #define MSG_FILAMENT_CHANGE_INIT_2      "начала смены"
  #define MSG_FILAMENT_CHANGE_INIT_3      "филамента"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1    "Ожидайте"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2    "выгрузки филамента"
  #define MSG_FILAMENT_CHANGE_INSERT_1    "Вставьте филамент"
  #define MSG_FILAMENT_CHANGE_INSERT_2    "и нажмите кнопку"
  #define MSG_FILAMENT_CHANGE_INSERT_3    "для продолжения..."
  #define MSG_FILAMENT_CHANGE_HEAT_1      "Нажмите кнопку для"
  #define MSG_FILAMENT_CHANGE_HEAT_2      "нагрева сопла..."
  #define MSG_FILAMENT_CHANGE_HEATING_1   "Нагрев сопла"
  #define MSG_FILAMENT_CHANGE_HEATING_2   "Ждите..."
  #define MSG_FILAMENT_CHANGE_LOAD_1      "Ожидайте"
  #define MSG_FILAMENT_CHANGE_LOAD_2      "загрузки филамента"
  #define MSG_FILAMENT_CHANGE_RESUME_1    "Ожидайте"
  #define MSG_FILAMENT_CHANGE_RESUME_2    "возобновления"
#else // LCD_HEIGHT < 4
  #define MSG_FILAMENT_CHANGE_INIT_1      "Ожидайте..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1    "Выгрузка..."
  #define MSG_FILAMENT_CHANGE_INSERT_1    "Вставь и нажми"
  #define MSG_FILAMENT_CHANGE_HEATING_1   "Нагрев..."
  #define MSG_FILAMENT_CHANGE_LOAD_1      "Загрузка..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1   "Выдавливание..."
  #define MSG_FILAMENT_CHANGE_RESUME_1    "Возобновление..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_RU_H
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
 * Slovak
 * UTF-8 for Graphical Display
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 * Translated by Michal Holeš, Farma MaM
 * http://www.facebook.com/farmamam
 *
 */
#ifndef LANGUAGE_SK_UTF_H
#define LANGUAGE_SK_UTF_H

#if DISABLED(DOGLCD)
  #error ("Slovak language needs a graphic display-"
#endif

#define MAPPER_C3C4C5_SK
#define UTF8_MAPPER C3C4C5_SK
#define DISPLAY_CHARSET_ISO10646_SK

#define WELCOME_MSG                         MACHINE_NAME " pripravená."
#define MSG_BACK                            "Naspať"
#define MSG_SD_INSERTED                     "Karta vložená"
#define MSG_SD_REMOVED                      "Karta vybratá"
#define MSG_LCD_ENDSTOPS                    "Endstopy" // max 8 znakov
#define MSG_MAIN                            "Hlavná ponuka"
#define MSG_AUTOSTART                       "Autoštart"
#define MSG_DISABLE_STEPPERS                "Uvolniť motory"
#define MSG_DEBUG_MENU                      "Ponuka ladenia"
#define MSG_PROGRESS_BAR_TEST               "Test uk. priebehu"
#define MSG_AUTO_HOME                       "Domovská pozícia"
#define MSG_AUTO_HOME_X                     "Domov os X"
#define MSG_AUTO_HOME_Y                     "Domov os Y"
#define MSG_AUTO_HOME_Z                     "Domov os Z"
#define MSG_LEVEL_BED_HOMING                "Meranie podložky"
#define MSG_LEVEL_BED_WAITING               "Kliknutím spusťte"
#define MSG_LEVEL_BED_NEXT_POINT            "Ďalší bod"
#define MSG_LEVEL_BED_DONE                  "Meranie hotové!"
#define MSG_Z_FADE_HEIGHT                   "Výška merania"
#define MSG_SET_HOME_OFFSETS                "Nastaviť offsety"
#define MSG_HOME_OFFSETS_APPLIED            "Offsety nastavené"
#define MSG_SET_ORIGIN                      "Nastaviť začiatok"
#define MSG_PREHEAT_1                       "Zahriať PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " všetko"
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 " hotend"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " podlož"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " nast"
#define MSG_PREHEAT_2                       "Zahriať ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " všetko"
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 " hotend"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " podlož"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " nast"
#define MSG_COOLDOWN                        "Schladiť"
#define MSG_SWITCH_PS_ON                    "Zapnúť napájanie"
#define MSG_SWITCH_PS_OFF                   "Vypnúť napájanie"
#define MSG_EXTRUDE                         "Vytlačiť (extr.)"
#define MSG_RETRACT                         "Vytiahnuť (retr.)"
#define MSG_MOVE_AXIS                       "Posunúť osy"
#define MSG_BED_LEVELING                    "Vyrovnať podložku"
#define MSG_LEVEL_BED                       "Vyrovnať podložku"
#define MSG_EDITING_STOPPED                 "Koniec úprav siete"

#define MSG_UBL_DOING_G29                   "Vykonávam G29"
#define MSG_UBL_UNHOMED                     "Prejdite domov"
#define MSG_UBL_TOOLS                       "UBL nástroje"
#define MSG_UBL_LEVEL_BED                   "Unified Bed Leveling"
#define MSG_UBL_MANUAL_MESH                 "Manuálna sieť bodov"
#define MSG_UBL_BC_INSERT                   "Vložte kartu, zmerajte"
#define MSG_UBL_BC_INSERT2                  "Zmerajte"
#define MSG_UBL_BC_REMOVE                   "Odstráňte a zmerajte"
#define MSG_UBL_MOVING_TO_NEXT              "Presun na ďalší"
#define MSG_UBL_ACTIVATE_MESH               "Aktivovať UBL"
#define MSG_UBL_DEACTIVATE_MESH             "Deaktivovať UBL"
#define MSG_UBL_SET_BED_TEMP                "Teplota podložky"
#define MSG_UBL_CUSTOM_BED_TEMP             MSG_UBL_SET_BED_TEMP
#define MSG_UBL_SET_HOTEND_TEMP             "Teplota hotendu"
#define MSG_UBL_CUSTOM_HOTEND_TEMP          MSG_UBL_SET_HOTEND_TEMP
#define MSG_UBL_EDIT_CUSTOM_MESH            "Upraviť vlastnú sieť"
#define MSG_UBL_FINE_TUNE_MESH              "Doladiť sieť bodov"
#define MSG_UBL_DONE_EDITING_MESH           "Koniec úprav siete"
#define MSG_UBL_BUILD_CUSTOM_MESH           "Vlastná sieť"
#define MSG_UBL_BUILD_MESH_MENU             "Vytvoriť sieť"
#define MSG_UBL_BUILD_PLA_MESH              "Sieť bodov PLA"
#define MSG_UBL_BUILD_ABS_MESH              "Sieť bodov ABS"
#define MSG_UBL_BUILD_COLD_MESH             "Studená sieť bodov"
#define MSG_UBL_MESH_HEIGHT_ADJUST          "Upraviť výšku siete"
#define MSG_UBL_MESH_HEIGHT_AMOUNT          "Výška"
#define MSG_UBL_VALIDATE_MESH_MENU          "Skontrolovať sieť"
#define MSG_UBL_VALIDATE_PLA_MESH           "Kontrola siete PLA"
#define MSG_UBL_VALIDATE_ABS_MESH           "Kontrola siete ABS"
#define MSG_UBL_VALIDATE_CUSTOM_MESH        "Kontrola vlast. siete"
#define MSG_UBL_CONTINUE_MESH               "Pokračovať v sieti"
#define MSG_UBL_MESH_LEVELING               "Sieťové rovnanie"
#define MSG_UBL_3POINT_MESH_LEVELING        "3-bodove rovnanie"
#define MSG_UBL_GRID_MESH_LEVELING          "Mriežkové rovnanie"
#define MSG_UBL_MESH_LEVEL                  "Vyrovnať podložku"
#define MSG_UBL_SIDE_POINTS                 "Postranné body"
#define MSG_UBL_MAP_TYPE                    "Typ siete bodov"
#define MSG_UBL_OUTPUT_MAP                  "Exportovať sieť"
#define MSG_UBL_OUTPUT_MAP_HOST             "Exportovať do PC"
#define MSG_UBL_OUTPUT_MAP_CSV              "Exportovať do CSV"
#define MSG_UBL_OUTPUT_MAP_BACKUP           "Záloha do PC"
#define MSG_UBL_INFO_UBL                    "Info o UBL do PC"
#define MSG_UBL_EDIT_MESH_MENU              "Upraviť sieť bodov"
#define MSG_UBL_FILLIN_AMOUNT               "Hustota mriežky"
#define MSG_UBL_MANUAL_FILLIN               "Ručná hustota"
#define MSG_UBL_SMART_FILLIN                "Smart hustota"
#define MSG_UBL_FILLIN_MESH                 "Zaplniť mriežku"
#define MSG_UBL_INVALIDATE_ALL              "Zrušiť všetko"
#define MSG_UBL_INVALIDATE_CLOSEST          "Zrušiť posledný"
#define MSG_UBL_FINE_TUNE_ALL               "Upraviť všetky"
#define MSG_UBL_FINE_TUNE_CLOSEST           "Upraviť posledný"
#define MSG_UBL_STORAGE_MESH_MENU           "Uložisko sietí"
#define MSG_UBL_STORAGE_SLOT                "Pamaťový slot"
#define MSG_UBL_LOAD_MESH                   "Načítať sieť bodov"
#define MSG_UBL_SAVE_MESH                   "Uložiť sieť bodov"
#define MSG_UBL_SAVE_ERROR                  "Err: Uložiť UBL"
#define MSG_UBL_RESTORE_ERROR               "Err: Obnoviť UBL"
#define MSG_UBL_Z_OFFSET_STOPPED            "Koniec Z-Offsetu"
#define MSG_UBL_STEP_BY_STEP_MENU           "UBL Postupne"

#define MSG_USER_MENU                       "Vlastné príkazy"
#define MSG_MOVING                          "Posun..."
#define MSG_FREE_XY                         "Uvolniť XY"
#define MSG_MOVE_X                          "Posunúť X"
#define MSG_MOVE_Y                          "Posunúť Y"
#define MSG_MOVE_Z                          "Posunúť Z"
#define MSG_MOVE_E                          "Extrúder"
#define MSG_MOVE_01MM                       "Posunúť o 0,1mm"
#define MSG_MOVE_1MM                        "Posunúť o 1mm"
#define MSG_MOVE_10MM                       "Posunúť o 10mm"
#define MSG_SPEED                           "Rýchlosť"
#define MSG_BED_Z                           "Výška podl."
#define MSG_NOZZLE                          "Tryska"
#define MSG_BED                             "Podložka"
#define MSG_FAN_SPEED                       "Rýchlosť vent."
#define MSG_FLOW                            "Prietok"
#define MSG_CONTROL                         "Ovládanie"
#define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Fakt"
#define MSG_AUTOTEMP                        "Autoteplota"
#define MSG_ON                              "Zap"
#define MSG_OFF                             "Vyp"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Vybrať"
#define MSG_ACC                             "Zrýchl"
#define MSG_JERK                            "Skok"
#define MSG_VX_JERK                         "Vx-skok"
#define MSG_VY_JERK                         "Vy-skok"
#define MSG_VZ_JERK                         "Vz-skok"
#define MSG_VE_JERK                         "Ve-skok"
#define MSG_VELOCITY                        "Rýchlosť"
#define MSG_VMAX                            "Vmax "
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_ACCELERATION                    "Akcelerácia"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retrakt"
#define MSG_A_TRAVEL                        "A-prejazd"
#define MSG_STEPS_PER_MM                    "Krokov/mm"
#define MSG_XSTEPS                          "Xkrokov/mm"
#define MSG_YSTEPS                          "Ykrokov/mm"
#define MSG_ZSTEPS                          "Zkrokov/mm"
#define MSG_ESTEPS                          "Ekrokov/mm"
#define MSG_E1STEPS                         "E1krokov/mm"
#define MSG_E2STEPS                         "E2krokov/mm"
#define MSG_E3STEPS                         "E3krokov/mm"
#define MSG_E4STEPS                         "E4krokov/mm"
#define MSG_E5STEPS                         "E5kroků/mm"
#define MSG_TEMPERATURE                     "Teplota"
#define MSG_MOTION                          "Pohyb"
#define MSG_FILAMENT                        "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E na mm3"
#define MSG_FILAMENT_DIAM                   "Fil. Priem."
#define MSG_ADVANCE_K                       "K pro posun"
#define MSG_CONTRAST                        "Kontrast LCD"
#define MSG_STORE_EEPROM                    "Uložiť nastavenie"
#define MSG_LOAD_EEPROM                     "Načítať nastaveníe"
#define MSG_RESTORE_FAILSAFE                "Obnoviť nastavenie"
#define MSG_INIT_EEPROM                     "Inic. EEPROM"
#define MSG_REFRESH                         "Obnoviť"
#define MSG_WATCH                           "Info obrazovka"
#define MSG_PREPARE                         "Príprava tlače"
#define MSG_TUNE                            "Doladenie tlače"
#define MSG_PAUSE_PRINT                     "Pozastaviť tlač"
#define MSG_RESUME_PRINT                    "Obnoviť tlač"
#define MSG_STOP_PRINT                      "Zastaviť tlač"
#define MSG_CARD_MENU                       "Tlačiť z SD"
#define MSG_NO_CARD                         "Žiadna SD karta"
#define MSG_DWELL                           "Spím..."
#define MSG_USERWAIT                        "Čakám..."
#define MSG_PRINT_PAUSED                    "Tlač pozastavená"
#define MSG_RESUMING                        "Obnovovanie tlače"
#define MSG_PRINT_ABORTED                   "Tlač zrušená"
#define MSG_NO_MOVE                         "Žiadny pohyb."
#define MSG_KILLED                          "PRERUŠENÉ. "
#define MSG_STOPPED                         "ZASTAVENÉ. "
#define MSG_CONTROL_RETRACT                 "Retrakt mm"
#define MSG_CONTROL_RETRACT_SWAP            "Výmena Re.mm"
#define MSG_CONTROL_RETRACTF                "Retraktovať  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Zdvih Z mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Vymeniť filament"
#define MSG_INIT_SDCARD                     "Načítať SD kartu"
#define MSG_CNG_SDCARD                      "Vymeniť SD kartu"
#define MSG_ZPROBE_OUT                      "Sonda Z mimo podl"
#define MSG_BLTOUCH                         "BLTouch"
#define MSG_BLTOUCH_SELFTEST                "BLTouch Self-Test"
#define MSG_BLTOUCH_RESET                   "BLTouch Reset"
#define MSG_BLTOUCH_DEPLOY                  "BLTouch Vysunúť"
#define MSG_BLTOUCH_STOW                    "BLTouch Zasunúť"
#define MSG_HOME                            "Najprv"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "domov"
#define MSG_ZPROBE_ZOFFSET                  "Z offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop zastavil"
#define MSG_HEATING_FAILED_LCD              "Chyba ohrevu"
#define MSG_ERR_REDUNDANT_TEMP              "REDUND. TEPLOTA"
#define MSG_THERMAL_RUNAWAY                 "TEPLOTNÝ SKOK"
#define MSG_ERR_MAXTEMP                     "VYSOKÁ TEPLOTA"
#define MSG_ERR_MINTEMP                     "NÍZKA TEPLOTA"
#define MSG_ERR_MAXTEMP_BED                 "VYS. TEPL. PODL."
#define MSG_ERR_MINTEMP_BED                 "NÍZ. TEPL. PODL."
#define MSG_ERR_Z_HOMING                    "G28 Z ZAKÁZANÉ"
#define MSG_HALTED                          "TLAČ. ZASTAVENÁ"
#define MSG_PLEASE_RESET                    "Spravte reset"
#define MSG_SHORT_DAY                       "d"
#define MSG_SHORT_HOUR                      "h"
#define MSG_SHORT_MINUTE                    "m"
#define MSG_HEATING                         "Ohrev..."
#define MSG_HEATING_COMPLETE                "Ohrev prebehol."
#define MSG_BED_HEATING                     "Ohrev podl."
#define MSG_BED_DONE                        "Podložka hotová."
#define MSG_DELTA_CALIBRATE                 "Delta Kalibrácia"
#define MSG_DELTA_CALIBRATE_X               "Kalibrovať X"
#define MSG_DELTA_CALIBRATE_Y               "Kalibrovať Y"
#define MSG_DELTA_CALIBRATE_Z               "Kalibrovať Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Kalibrovať Stred"
#define MSG_DELTA_AUTO_CALIBRATE            "Autokalibrácia"
#define MSG_DELTA_HEIGHT_CALIBRATE          "Nast.výšku delty"
#define MSG_INFO_MENU                       "O tlačiarni"
#define MSG_INFO_PRINTER_MENU               "Info o tlačiarni"
#define MSG_3POINT_LEVELING                 "3-bodové rovnanie"
#define MSG_LINEAR_LEVELING                 "Lineárne rovnanie"
#define MSG_BILINEAR_LEVELING               "Bilineárne rovnanie"
#define MSG_UBL_LEVELING                    "Unified Bed Leveling"
#define MSG_MESH_LEVELING                   "Mriežkové rovnanie"
#define MSG_INFO_STATS_MENU                 "Štatistika"
#define MSG_INFO_BOARD_MENU                 "Info o doske"
#define MSG_INFO_THERMISTOR_MENU            "Termistory"
#define MSG_INFO_EXTRUDERS                  "Extrudéry"
#define MSG_INFO_BAUDRATE                   "Rýchlosť"
#define MSG_INFO_PROTOCOL                   "Protokol"
#define MSG_CASE_LIGHT                      "Osvetlenie"
#define MSG_CASE_LIGHT_BRIGHTNESS           "Jas svetla"

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Počet tlačí"
  #define MSG_INFO_COMPLETED_PRINTS         "Dokončené"
  #define MSG_INFO_PRINT_TIME               "Celkový čas"
  #define MSG_INFO_PRINT_LONGEST            "Najdlhšia tlač"
  #define MSG_INFO_PRINT_FILAMENT           "Celkom vytlačené"
#else
  #define MSG_INFO_PRINT_COUNT              "Tlače"
  #define MSG_INFO_COMPLETED_PRINTS         "Hotovo"
  #define MSG_INFO_PRINT_TIME               "Čas"
  #define MSG_INFO_PRINT_LONGEST            "Najdlhšia"
  #define MSG_INFO_PRINT_FILAMENT           "Vytlačené"
#endif

#define MSG_INFO_MIN_TEMP                   "Teplota min"
#define MSG_INFO_MAX_TEMP                   "Teplota max"
#define MSG_INFO_PSU                        "Nap. zdroj"
#define MSG_DRIVE_STRENGTH                  "Budenie motorov"
#define MSG_DAC_PERCENT                     "Motor %"
#define MSG_DAC_EEPROM_WRITE                "Uložiť do EEPROM"

#define MSG_FILAMENT_CHANGE_HEADER          "PAUZA TLAČE"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "MOŽN. POKRAČ.:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Ešte vytlačiť"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Obnoviť tlač"
#define MSG_FILAMENT_CHANGE_MINTEMP         "Min. teplota je "
#define MSG_FILAMENT_CHANGE_NOZZLE          "  Tryska: "

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Čakajte prosím"
  #define MSG_FILAMENT_CHANGE_INIT_2          "na spustenie"
  #define MSG_FILAMENT_CHANGE_INIT_3          "výmeny filamentu"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Čakejte prosím"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "na vysunutie"
  #define MSG_FILAMENT_CHANGE_UNLOAD_3        "filamentu"
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Vložte filament"
  #define MSG_FILAMENT_CHANGE_INSERT_2        "a stlačte"
  #define MSG_FILAMENT_CHANGE_INSERT_3        "tlačidlo..."
  #define MSG_FILAMENT_CHANGE_HEAT_1          "Kliknite pre"
  #define MSG_FILAMENT_CHANGE_HEAT_2          "ohrev trysky"
  #define MSG_FILAMENT_CHANGE_HEATING_1       "Čakajte prosím"
  #define MSG_FILAMENT_CHANGE_HEATING_2       "na teplotu tr."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Čakajte prosím"
  #define MSG_FILAMENT_CHANGE_LOAD_2          "na zavedenie"
  #define MSG_FILAMENT_CHANGE_LOAD_3          "filamentu"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Čakajte prosím"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "na vytlačenie"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_3       "filamentu"
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Čakajte prosím"
  #define MSG_FILAMENT_CHANGE_RESUME_2        "na pokračovanie"
  #define MSG_FILAMENT_CHANGE_RESUME_3        "tlače"
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Čakajte..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Vysúvanie..."
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Vložte, kliknite"
  #define MSG_FILAMENT_CHANGE_HEATING_1       "Ohrev..."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Zavádzanie..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Vytlačovanie..."
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Pokračovanie..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_SK_UTF_H
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
 * TEST
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_TEST_H
#define LANGUAGE_TEST_H

// Select ONE of the following Mappers.
// They decide what to do with a symbol in the area of [0x80:0xFF]. They take a symbol of this language file and make them point
// into an array with 128 cells, where they'll find the place of the symbol of the font in use.
//
// a.)For ASCII coded Language_xx.h files like (en) there are no occurrences of symbols above 0x7F so no mapper is needed.
//   If such a symbol appears it is mapped directly into the font. This is the case for the language files we used until now, with all the STR_XX or
//   "\xxx" symbols. All Symbols are only one byte long.
// b.) For Unicoded Language_xx.h files (currently ru, de and kana_utf8 ) the non ASCII [0x00-0x7F] symbols are represented by more than one byte.
//   In the case of two bytes the first is pointing to a 'codepage' and the second to a place in the codepage. These codepages contain 64 symbols.
//   So two of them can be mapped. For most of the European languages the necessary symbols are contained in the pages C2 and C3. Cyrillic uses D0
//   and D1.
// c.) For katakana (one of the Japanese symbol sets) Unicode uses 3 bytes. Here the second byte also points to a codepage and byte 3 to the symbol.
//   I hope the pages E282 and E283 are sufficient to write katakana.
//   Kanji (an other Japanese symbol set) uses far more than two codepages. So currently I don't see a chance to map the Unicodes. Its not
//   impossible to have a close to direct mapping but will need giant conversion tables and fonts (we don't want to have in a embedded system).

//#define MAPPER_C2C3        // For most European languages when language file is in utf8
//#define MAPPER_D0D1        // For Cyrillic
//#define MAPPER_E382E383    // For Katakana
//#define MAPPER_NON         // For direct ascii codes. Fall back mapper - if no other is defined.


// Select the better font for full graphic displays.
//#define DISPLAY_CHARSET_ISO10646_1
//#define DISPLAY_CHARSET_ISO10646_5
//#define DISPLAY_CHARSET_ISO10646_GREEK
//#define DISPLAY_CHARSET_ISO10646_KANA



// next 5 lines select variants in this file only
#define DISPLAYTEST
//#define WEST
//#define CYRIL
//#define KANA


// TESTSTRINGS

#define STRG_ASCII_2 " !\"#$%&'()*+,-./"
#define STRG_ASCII_3 "0123456789:;<=>?"
#define STRG_ASCII_4 "@ABCDEFGHIJKLMNO"
#define STRG_ASCII_5 "PQRSTUVWXYZ[\]^_"
#define STRG_ASCII_6 "`abcdefghijklmno"
#define STRG_ASCII_7 "pqrstuvwxyz{|}~"

#define STRG_C2_8 ""
#define STRG_C2_9 ""
#define STRG_C2_a " ¡¢£¤¥¦§¨©ª«¬­®¯"
#define STRG_C2_b "°±²³´µ¶·¸¹º»¼½¾¿"
#define STRG_C3_8 "ÈÁÂÃÄÅÆÇÈÉÊËÌÍÎÏ"
#define STRG_C3_9 "ÐÑÒÓÔÕÖ×ØÙÚÛÜÝÞß"
#define STRG_C3_a "àáâãäåæçèéêëìíîï"
#define STRG_C3_b "ðñòóôõö÷øùúûüýþÿ"

#define STRG_D0_8 "ЀЁЂЃЄЅІЇЈЉЊЋЌЍЎЏ"
#define STRG_D0_9 "АБВГДЕЖЗИЙКЛМНОП"
#define STRG_D0_a "РСТУФХЦЧШЩЪЫЬЭЮЯ"
#define STRG_D0_b "абвгдежзийклмноп"
#define STRG_D1_8 "рстуфхцчшщъыьэюя"
#define STRG_D1_9 "ѐёђѓєѕіїјљњћќѝўџ"
#define STRG_D1_a "ѠѡѢѣѤѥѦѧѨѩѪѫѬѭѮѯ"
#define STRG_D1_b "ѰѱѲѳѴѵѶѷѸѹѺѻѼѽѾѿ"

#define STRG_E382_8 "よめもゃやゅゆょよらりるれろゎわ"
#define STRG_E382_9 "ゐゑをんゔゕゖ゗゘゙゚゛ ゜ゝゞゟ"
#define STRG_E382_a "゠ァアィイゥウェエォオカガキギク"
#define STRG_E382_b "グケゲコゴサザシジスズセゼソゾタ"
#define STRG_E383_8 "トチヂッツヅテデトドナニヌネノハ"
#define STRG_E383_9 "バパヒビピフブプヘベペホボポマミ"
#define STRG_E383_a "ムメモャヤュユョヨラリルレロヮワ"
#define STRG_E383_b "ヰヱヲンヴヵヶヷヸヹヺ・ーヽヾヿ"

#define STRG_OKTAL_0 "\000\001\002\003\004\005\006\007\010\011\012\013\014\015\016\017"
#define STRG_OKTAL_1 "\020\021\022\023\024\025\026\027\030\031\032\033\034\035\036\037"
#define STRG_OKTAL_2 "\040\041\042\043\044\045\046\047\050\051\052\053\054\055\056\057"
#define STRG_OKTAL_3 "\060\061\062\063\064\065\066\067\070\071\072\073\074\075\076\077"
#define STRG_OKTAL_4 "\100\101\102\103\104\105\106\107\110\111\112\113\114\115\116\117"
#define STRG_OKTAL_5 "\120\121\122\123\124\125\126\127\130\131\132\133\134\135\136\137"
#define STRG_OKTAL_6 "\140\141\142\143\144\145\146\147\150\151\152\153\154\155\156\157"
#define STRG_OKTAL_7 "\160\161\162\163\164\165\166\167\170\171\172\173\174\175\176\177"
#define STRG_OKTAL_8 "\200\201\202\203\204\205\206\207\210\211\212\213\214\215\216\217"
#define STRG_OKTAL_9 "\220\221\222\223\224\225\226\227\230\231\232\233\234\235\236\237"
#define STRG_OKTAL_a "\240\241\242\243\244\245\246\247\250\251\252\253\254\255\256\257"
#define STRG_OKTAL_b "\260\261\262\263\264\265\266\267\270\271\272\273\274\275\276\277"
#define STRG_OKTAL_c "\300\301\302\303\304\305\306\307\310\311\312\313\314\315\316\317"
#define STRG_OKTAL_d "\320\321\322\323\324\325\326\327\330\331\332\333\334\335\336\337"
#define STRG_OKTAL_e "\340\341\342\343\344\345\346\347\350\351\352\353\354\355\356\357"
#define STRG_OKTAL_f "\360\361\362\363\364\365\366\367\370\371\372\373\374\375\376\377"

#if ENABLED(DISPLAYTEST)
  #define WELCOME_MSG                         "Language TEST"

  #define MSG_WATCH                           "Display test"
  #define MSG_PREPARE                         STRG_OKTAL_b
  #define MSG_CONTROL                         STRG_OKTAL_c
#endif

#if ENABLED(WEST)
  #define WELCOME_MSG                         "Language TEST"

  #define MSG_WATCH                           "\001\002\003\004\005\006\007\010\011"
  #define MSG_PREPARE                         "UTF8"
  #define MSG_CONTROL                         "ASCII"

  //#define MSG_MAIN                            ".."
  #define MSG_DISABLE_STEPPERS                STRG_C2_8
  #define MSG_AUTO_HOME                       STRG_C2_9
  #define MSG_SET_HOME_OFFSETS                STRG_C2_a
  #define MSG_PREHEAT_1                       STRG_C2_b
  #define MSG_PREHEAT_2                       STRG_C3_8
  #define MSG_COOLDOWN                        STRG_C3_9
  #define MSG_SWITCH_PS_OFF                   STRG_C3_a
  #define MSG_MOVE_AXIS                       STRG_C3_b

  #define MSG_MAIN                            STRG_OKTAL_2
  #define MSG_TEMPERATURE                     STRG_OKTAL_3
  #define MSG_MOTION                          STRG_OKTAL_4
  #define MSG_FILAMENT                        STRG_OKTAL_5
  #define MSG_CONTRAST                        STRG_OKTAL_6
  #define MSG_RESTORE_FAILSAFE                STRG_OKTAL_7

  #define MSG_NOZZLE                          STRG_OKTAL_8
  #define MSG_FAN_SPEED                       STRG_OKTAL_9
  #define MSG_AUTOTEMP                        STRG_OKTAL_a
  #define MSG_MIN                             STRG_OKTAL_b
  #define MSG_MAX                             STRG_OKTAL_c
  #define MSG_FACTOR                          STRG_OKTAL_d
  #define MSG_PID_P                           STRG_OKTAL_e
  #define MSG_PID_I                           STRG_OKTAL_f

#endif

#if ENABLED(CYRIL)
  #define WELCOME_MSG                         "Language TEST"

  #define MSG_WATCH                           "\001\002\003\004\005\006\007\010\011"
  #define MSG_PREPARE                         "UTF8"
  #define MSG_CONTROL                         "ASCII"

  //#define MSG_MAIN                            ".."
  #define MSG_DISABLE_STEPPERS                STRG_D0_8
  #define MSG_AUTO_HOME                       STRG_D0_9
  #define MSG_SET_HOME_OFFSETS                STRG_D0_a
  #define MSG_PREHEAT_1                       STRG_D0_b
  #define MSG_PREHEAT_2                       STRG_D1_8
  #define MSG_COOLDOWN                        STRG_D1_9
  #define MSG_SWITCH_PS_OFF                   STRG_D1_a
  #define MSG_MOVE_AXIS                       STRG_D1_b

  #define MSG_MAIN                            STRG_OKTAL_2
  #define MSG_TEMPERATURE                     STRG_OKTAL_3
  #define MSG_MOTION                          STRG_OKTAL_4
  #define MSG_FILAMENT                        STRG_OKTAL_5
  #define MSG_CONTRAST                        STRG_OKTAL_6
  #define MSG_RESTORE_FAILSAFE                STRG_OKTAL_7

  #define MSG_NOZZLE                          STRG_OKTAL_8
  #define MSG_FAN_SPEED                       STRG_OKTAL_9
  #define MSG_AUTOTEMP                        STRG_OKTAL_a
  #define MSG_MIN                             STRG_OKTAL_b
  #define MSG_MAX                             STRG_OKTAL_c
  #define MSG_FACTOR                          STRG_OKTAL_d
  #define MSG_PID_P                           STRG_OKTAL_e
  #define MSG_PID_I                           STRG_OKTAL_f

#endif

#if ENABLED(KANA)
  #define WELCOME_MSG                         "Language TEST"

  #define MSG_WATCH                           "\001\002\003\004\005\006\007\010\011"
  #define MSG_PREPARE                         "UTF8"
  #define MSG_CONTROL                         "ASCII"

  //#define MSG_MAIN                            ".."
  #define MSG_DISABLE_STEPPERS                STRG_E382_8
  #define MSG_AUTO_HOME                       STRG_E382_9
  #define MSG_SET_HOME_OFFSETS                STRG_E382_a
  #define MSG_PREHEAT_1                       STRG_E382_b
  #define MSG_PREHEAT_2                       STRG_E383_8
  #define MSG_COOLDOWN                        STRG_E383_9
  #define MSG_SWITCH_PS_OFF                   STRG_E383_a
  #define MSG_MOVE_AXIS                       STRG_E383_b

  #define MSG_MAIN                            STRG_OKTAL_2
  #define MSG_TEMPERATURE                     STRG_OKTAL_3
  #define MSG_MOTION                          STRG_OKTAL_4
  #define MSG_FILAMENT                        STRG_OKTAL_5
  #define MSG_CONTRAST                        STRG_OKTAL_6
  #define MSG_RESTORE_FAILSAFE                STRG_OKTAL_7

  #define MSG_NOZZLE                          STRG_OKTAL_8
  #define MSG_FAN_SPEED                       STRG_OKTAL_9
  #define MSG_AUTOTEMP                        STRG_OKTAL_a
  #define MSG_MIN                             STRG_OKTAL_b
  #define MSG_MAX                             STRG_OKTAL_c
  #define MSG_FACTOR                          STRG_OKTAL_d
  #define MSG_PID_P                           STRG_OKTAL_e
  #define MSG_PID_I                           STRG_OKTAL_f
#endif

#endif // LANGUAGE_TEST_H
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
 * Turkish
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_TR_H
#define LANGUAGE_TR_H

#define MAPPER_C2C3_TR
#define UTF8_MAPPER C2C3_TR
#define DISPLAY_CHARSET_ISO10646_TR

#if DISABLED(DOGLCD)
  #error "Turkish needs a graphical display."
#endif

#define WELCOME_MSG                         MACHINE_NAME " hazır."                               // hazır.
#define MSG_SD_INSERTED                     "SD Yerleşti."                                       // SD Yerleşti.
#define MSG_SD_REMOVED                      "SD Çıkarıldı."                                      // SD Çıkarıldı.
#define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters                // Endstops
#define MSG_MAIN                            "Ana"                                                // Ana
#define MSG_BACK                            "Geri"                                               // Geri
#define MSG_AUTOSTART                       "Otobaşlat"                                          // Otobaşlat
#define MSG_DISABLE_STEPPERS                "Motorları Durdur"                                   // Motorları Durdur
#define MSG_DEBUG_MENU                      "Hata Ayıklama"                                      // Hata Ayıklama
#define MSG_PROGRESS_BAR_TEST               "Durum Çubuğu Testi"                                 // Durum Çubuğu Testi
#define MSG_AUTO_HOME                       "Eksenleri Sıfırla"                                  // Eksenleri Sıfırla
#define MSG_AUTO_HOME_X                     "X Sıfırla"                                          // X Sıfırla
#define MSG_AUTO_HOME_Y                     "Y Sıfırla"                                          // Y Sıfırla
#define MSG_AUTO_HOME_Z                     "Z Sıfırla"                                          // Z Sıfırla
#define MSG_LEVEL_BED_HOMING                "XYZ Sıfırlanıyor"                                   // XYZ Sıfırlanıyor
#define MSG_LEVEL_BED_WAITING               "Başlatmak için tıkla"                               // Başlatmak için tıkla
#define MSG_LEVEL_BED_NEXT_POINT            "Sıradaki Nokta"                                     // Sıradaki Nokta
#define MSG_LEVEL_BED_DONE                  "Seviyeleme Tamam!"                                  // Seviyeleme Tamam!
#define MSG_SET_HOME_OFFSETS                "Offset Ayarla"                                      // Offset Ayarla
#define MSG_HOME_OFFSETS_APPLIED            "Offset Tamam"                                       // Offset Tamam
#define MSG_SET_ORIGIN                      "Sıfır Belirle"                                      // Sıfır Belirle
#define MSG_PREHEAT_1                       "Ön Isınma PLA"                                      // Ön Isınma PLA
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "                                    //
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " Tüm"                                 //  Tüm
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 " Nozül"                               //  Nozül
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " Tabla"                               //  Tabla
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " Ayar"                                //  Ayar
#define MSG_PREHEAT_2                       "Ön Isınma ABS"                                      // Ön Isınma ABS
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "                                    //
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " Tüm"                                 //  Tüm
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 " Nozül"                               //  Nozül
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " Tabla"                               //  Tabla
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " Ayar"                                //  Ayar
#define MSG_COOLDOWN                        "Soğut"                                              // Soğut
#define MSG_SWITCH_PS_ON                    "Gücü Aç"                                            // Gücü Aç
#define MSG_SWITCH_PS_OFF                   "Gücü Kapat"                                         // Gücü Kapat
#define MSG_EXTRUDE                         "Extrude"                                            // Extrude
#define MSG_RETRACT                         "Geri Çek"                                           // Geri Çek
#define MSG_MOVE_AXIS                       "Eksen Yönet"                                        // Eksenleri Yönet
#define MSG_BED_LEVELING                    "Tabla Seviyele"                                     // Tabla Seviyele
#define MSG_LEVEL_BED                       "Tabla Seviyele"                                     // Tabla Seviyele
#define MSG_MOVING                          "Konumlanıyor..."                                    // Konumlanıyor...
#define MSG_FREE_XY                         "Durdur XY"                                          // Durdur XY
#define MSG_MOVE_X                          "X"                                                  // X
#define MSG_MOVE_Y                          "Y"                                                  // Y
#define MSG_MOVE_Z                          "Z"                                                  // Z
#define MSG_MOVE_E                          "Ekstruder"                                          // Ekstruder
#define MSG_MOVE_01MM                       "0.1mm"                                              // 0.1mm
#define MSG_MOVE_1MM                        "1mm"                                                // 1mm
#define MSG_MOVE_10MM                       "10mm"                                               // 10mm
#define MSG_SPEED                           "Hız"                                                // Hız
#define MSG_BED_Z                           "Z Mesafesi"                                         // Z Mesafesi
#define MSG_NOZZLE                          "Nozül"                                              // Nozül
#define MSG_BED                             "Tabla"                                              // Tabla
#define MSG_FAN_SPEED                       "Fan Hızı"                                           // Fan Hızı
#define MSG_FLOW                            "Akış"                                               // Akış
#define MSG_CONTROL                         "Kontrol"                                            // Kontrol
#define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"                //  Min
#define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"                //  Max
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Çarpan"             //  Çarpan
#define MSG_AUTOTEMP                        "Autotemp"                                           //  Autotemp
#define MSG_ON                              "On "                                                // On
#define MSG_OFF                             "Off"                                                // Off
#define MSG_PID_P                           "PID-P"                                              // PID-P
#define MSG_PID_I                           "PID-I"                                              // PID-I
#define MSG_PID_D                           "PID-D"                                              // PID-D
#define MSG_PID_C                           "PID-C"                                              // PID-C
#define MSG_SELECT                          "Seç"                                                // Seç
#define MSG_ACC                             "İvme"                                               // İvme
#define MSG_JERK                            "Jerk"
#define MSG_VX_JERK                         "Vx-Jerk"                                            // Vx-Jerk
#define MSG_VY_JERK                         "Vy-Jerk"                                            // Vy-Jerk
#define MSG_VZ_JERK                         "Vz-jerk"                                            // Vz-Jerk
#define MSG_VE_JERK                         "Ve-jerk"                                            // Ve-Jerk
#define MSG_VMAX                            "Vmax "                                              // Vmax
#define MSG_VMIN                            "Vmin"                                               // Vmin
#define MSG_VTRAV_MIN                       "VTrav min"                                          // Vtrav min
#define MSG_AMAX                            "Amax "                                              // Amax
#define MSG_A_RETRACT                       "A-retract"                                          // A-retract
#define MSG_A_TRAVEL                        "A-travel"                                           // A-travel
#define MSG_STEPS_PER_MM                    "Steps/mm"                                           // Xsteps/mm
#define MSG_XSTEPS                          "Xsteps/mm"                                          // Xsteps/mm
#define MSG_YSTEPS                          "Ysteps/mm"                                          // Ysteps/mm
#define MSG_ZSTEPS                          "Zsteps/mm"                                          // Zsteps/mm
#define MSG_ESTEPS                          "Esteps/mm"                                          // Esteps/mm
#define MSG_E1STEPS                         "E1steps/mm"                                         // E1steps/mm
#define MSG_E2STEPS                         "E2steps/mm"                                         // E2steps/mm
#define MSG_E3STEPS                         "E3steps/mm"                                         // E3steps/mm
#define MSG_E4STEPS                         "E4steps/mm"                                         // E4steps/mm
#define MSG_E5STEPS                         "E5steps/mm"                                         // E4steps/mm
#define MSG_TEMPERATURE                     "Sıcaklık"                                           // Sıcaklık
#define MSG_MOTION                          "Hareket"                                            // Hareket
#define MSG_FILAMENT                        "Filaman"                                            // Filaman
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"                                           // E in mm3
#define MSG_FILAMENT_DIAM                   "Fil. Çap"                                           // Fil. Çap
#define MSG_ADVANCE_K                       "K İlerlet"                                          // K İlerlet
#define MSG_CONTRAST                        "LCD Kontrast"                                       // LCD Kontrast
#define MSG_STORE_EEPROM                    "Hafızaya Al"                                        // Hafızaya Al
#define MSG_LOAD_EEPROM                     "Hafızadan Yükle"                                    // Hafızadan Yükle
#define MSG_RESTORE_FAILSAFE                "Fabrika Ayarları"                                   // Fabrika Ayarları
#define MSG_REFRESH                         "Yenile"                                             // Yenile
#define MSG_WATCH                           "Bilgi Ekranı"                                       // Bilgi Ekranı
#define MSG_PREPARE                         "Hazırlık"                                           // Hazırlık
#define MSG_TUNE                            "Ayar"                                               // Ayar
#define MSG_PAUSE_PRINT                     "Duraklat"                                           // Duraklat
#define MSG_RESUME_PRINT                    "Sürdür"                                             // Sürdür
#define MSG_STOP_PRINT                      "Durdur"                                             // Durdur
#define MSG_CARD_MENU                       "SD den Yazdır"                                      // SD den Yazdır
#define MSG_NO_CARD                         "SD Kart Yok"                                        // SD Kart Yok
#define MSG_DWELL                           "Uyku..."                                            // Uyku...
#define MSG_USERWAIT                        "Operatör bekleniyor..."                             // Operatör bekleniyor...
#define MSG_RESUMING                        "Baskı Sürdürülüyor"                                 // Baskı Sürdürülüyor
#define MSG_PRINT_ABORTED                   "Baskı Durduruldu"                                   // Baskı Durduruldu
#define MSG_NO_MOVE                         "İşlem yok."                                         // İşlem yok.
#define MSG_KILLED                          "Kilitlendi. "                                       // Kilitlendi.
#define MSG_STOPPED                         "Durdu. "                                            // Durdu.
#define MSG_CONTROL_RETRACT                 "Geri Çek mm"                                        // Geri Çek mm
#define MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"                                         // Swap Re.mm
#define MSG_CONTROL_RETRACTF                "Geri Çekme  V"                                      // Geri Çekme V
#define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"                                             // Hop mm
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet mm"                                           // UnRet mm
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet mm"                                         // S UnRetmm
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"                                           // UnRet V
#define MSG_AUTORETRACT                     "AutoRetr."                                          // AutoRetr.
#define MSG_FILAMENTCHANGE                  "Filaman Değiştir"                                   // Filaman Değiştir
#define MSG_INIT_SDCARD                     "Init. SD"                                           // Init. SD
#define MSG_CNG_SDCARD                      "SD Değiştir"                                        // SD Değiştir
#define MSG_ZPROBE_OUT                      "Z Prob Açık. Tabla"                                 // Z Prob Açık. Tabla
#define MSG_BLTOUCH_SELFTEST                "BLTouch Self-Test"                                  // BLTouch Self-Test
#define MSG_BLTOUCH_RESET                   "Sıfırla BLTouch"                                    // Sıfırla BLTouch
#define MSG_HOME                            "Sıfırla"                                            // Sıfırla
#define MSG_FIRST                           "önce"                                               // Önce
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"                                           // Z Offset
#define MSG_BABYSTEP_X                      "Miniadım X"                                         // Miniadım X
#define MSG_BABYSTEP_Y                      "Miniadım Y"                                         // Miniadım Y
#define MSG_BABYSTEP_Z                      "Miniadım Z"                                         // Miniadım Z
#define MSG_ENDSTOP_ABORT                   "Endstop iptal"                                      // Endstop iptal
#define MSG_HEATING_FAILED_LCD              "Isınma başarısız"                                   // Isınma başarısız
#define MSG_ERR_REDUNDANT_TEMP              "Hata: Geçersiz Sıcaklık"                            // Hata: Geçersiz Sıcaklık
#define MSG_THERMAL_RUNAWAY                 "TERMAL PROBLEM"                                     // TERMAL PROBLEM
#define MSG_ERR_MAXTEMP                     "Hata: MAXSICAKLIK"                                  // Hata: MAXSICAKLIK
#define MSG_ERR_MINTEMP                     "Hata: MINSICAKLIK"                                  // Hata: MINSICAKLIK
#define MSG_ERR_MAXTEMP_BED                 "Hata: MAXSIC. TABLA"                                // Hata: MAXSIC. TABLA
#define MSG_ERR_MINTEMP_BED                 "Hata: MINSIC. TABLA"                                // Hata: MINSIC. TABLA
#define MSG_ERR_Z_HOMING                    "G28 Z Yapılamaz"                                    // G28 Z Yapılamaz
#define MSG_HALTED                          "YAZICI DURDURULDU"                                  // YAZICI DURDURULDU
#define MSG_PLEASE_RESET                    "Lütfen resetleyin"                                  // Lütfen resetleyin
#define MSG_SHORT_DAY                       "G" // One character only                            // G
#define MSG_SHORT_HOUR                      "S" // One character only                            // S
#define MSG_SHORT_MINUTE                    "D" // One character only                            // D
#define MSG_HEATING                         "Isınıyor..."                                        // Isınıyor...
#define MSG_HEATING_COMPLETE                "Isınma tamam."                                      // Isınma tamam.
#define MSG_BED_HEATING                     "Tabla Isınıyor."                                    // Tabla Isınıyor.
#define MSG_BED_DONE                        "Tabla hazır."                                       // Tabla hazır.
#define MSG_DELTA_CALIBRATE                 "Delta Kalibrasyonu"                                 // Delta Kalibrasyonu
#define MSG_DELTA_CALIBRATE_X               "Ayarla X"                                           // Ayarla X
#define MSG_DELTA_CALIBRATE_Y               "Ayarla Y"                                           // Ayarla Y
#define MSG_DELTA_CALIBRATE_Z               "Ayarla Z"                                           // Ayarla Z
#define MSG_DELTA_CALIBRATE_CENTER          "Ayarla Merkez"                                      // Ayarla Merkez
#define MSG_DELTA_AUTO_CALIBRATE            "Oto Kalibrasyon"                                    // Oto Kalibrasyon
#define MSG_DELTA_HEIGHT_CALIBRATE          "Delta Yük. Ayarla"                                  // Delta Yük. Ayarla
#define MSG_INFO_MENU                       "Yazıcı Hakkında"                                    // Yazıcı Hakkında
#define MSG_INFO_PRINTER_MENU               "Yazıcı Bilgisi"                                     // Yazıcı Bilgisi
#define MSG_INFO_STATS_MENU                 "İstatistikler"                                      // İstatistikler
#define MSG_INFO_BOARD_MENU                 "Kontrolör Bilgisi"                                  // Kontrol Bilgisi
#define MSG_INFO_THERMISTOR_MENU            "Termistörler"                                       // Termistörler
#define MSG_INFO_EXTRUDERS                  "Ekstruderler"                                       // Ekstruderler
#define MSG_INFO_BAUDRATE                   "İletişim Hızı"                                      // İletişim Hızı
#define MSG_INFO_PROTOCOL                   "Protokol"                                           // Protokol
#define MSG_CASE_LIGHT                      "Aydınlatmayı"                                       // Aydınlatmayı Aç

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Baskı Sayısı"                                       // Baskı Sayısı
  #define MSG_INFO_COMPLETED_PRINTS         "Tamamlanan"                                         // Tamamlanan
  #define MSG_INFO_PRINT_TIME               "Toplam Baskı Süresi"                                // Toplam Baskı Süresi
  #define MSG_INFO_PRINT_LONGEST            "En Uzun Baskı Süresi"                               // En Uzun Baskı Süresi
  #define MSG_INFO_PRINT_FILAMENT           "Toplam Filaman"                                     // Toplam Filaman
#else
  #define MSG_INFO_PRINT_COUNT              "Baskı"                                              // Baskı
  #define MSG_INFO_COMPLETED_PRINTS         "Tamamlanan"                                         // Tamamlanan
  #define MSG_INFO_PRINT_TIME               "Süre"                                               // Süre
  #define MSG_INFO_PRINT_LONGEST            "En Uzun"                                            // En Uzun
  #define MSG_INFO_PRINT_FILAMENT           "Filaman"                                            // Filaman
#endif

#define MSG_INFO_MIN_TEMP                   "Min Sıc."                                           // Min Sıcak.
#define MSG_INFO_MAX_TEMP                   "Max Sıc."                                           // Max Sıcak.
#define MSG_INFO_PSU                        "Güç Kaynağı"                                        // Güç Kaynağı

#define MSG_DRIVE_STRENGTH                  "Sürücü Gücü"                                        // Sürücü Gücü
#define MSG_DAC_PERCENT                     "Sürücü %"                                           // Sürücü %
#define MSG_FILAMENT_CHANGE_HEADER          "PRINT PAUSED"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "RESUME OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "Seçenekler:"                                        // Seçenekler:
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Daha Akıt"                                          // Daha Akıt
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Baskıyı sürdür"                                     // Baskıyı sürdür
#define MSG_FILAMENT_CHANGE_MINTEMP         "Min. Sıcaklık"                                      // Min. Sıcaklık:
#define MSG_FILAMENT_CHANGE_NOZZLE          "  Nozül: "                                          //   Nozül:

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Başlama bekleniyor"                               // Başlama bekleniyor
  #define MSG_FILAMENT_CHANGE_INIT_2          "filamanın"                                        // filamanın
  #define MSG_FILAMENT_CHANGE_INIT_3          "değişimi"                                         // değişimi
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Bekleniyor"                                       // Bekleniyor
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "filamanın çıkması"                                // filamanın çıkması
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Filamanı yükle"                                   // Filamanı yükle
  #define MSG_FILAMENT_CHANGE_INSERT_2        "ve devam için"                                    // ve devam için
  #define MSG_FILAMENT_CHANGE_INSERT_3        "tuşa bas..."                                      // tuşa bas...
  #define MSG_FILAMENT_CHANGE_HEAT_1          "Nozülü Isıtmak için"                              // Nozülü Isıtmak için
  #define MSG_FILAMENT_CHANGE_HEAT_2          "Butona Bas."                                      // Butona Bas.
  #define MSG_FILAMENT_CHANGE_HEATING_1       "Nozül Isınıyor"                                   // Nozül Isınıyor
  #define MSG_FILAMENT_CHANGE_HEATING_2       "Lütfen Bekleyin..."                               // Lütfen Bekleyin...
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Bekleniyor"                                       // Bekleniyor
  #define MSG_FILAMENT_CHANGE_LOAD_2          "filamanın yüklenmesi"                             // filamanın yüklenmesi
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Bekleniyor"                                       // Bekleniyor
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "filaman akması"                                   // filaman akması
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Baskının sürdürülmesini"                          // Baskının sürdürülmesini
  #define MSG_FILAMENT_CHANGE_RESUME_2        "bekle"                                            // bekle
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Lütfen bekleyiniz..."                             // Lütfen bekleyiniz...
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Çıkartılıyor..."                                  // Çıkartılıyor...
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Yükle ve bas"                                     // Yükle ve bas
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Yüklüyor..."                                      // Yüklüyor...
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Akıtılıyor..."                                    // Akıtılıyor...
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Sürdürülüyor..."                                  // Sürdürülüyor...
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_TR_H
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
 * Ukrainian
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_UK_H
#define LANGUAGE_UK_H

#define MAPPER_D0D1                // For Cyrillic
#define UTF8_MAPPER D0D1
#define DISPLAY_CHARSET_ISO10646_5

#define WELCOME_MSG                         MACHINE_NAME " готовий."
#define MSG_SD_INSERTED                     "Картка вставлена"
#define MSG_SD_REMOVED                      "Картка видалена"
#define MSG_LCD_ENDSTOPS                    "Кінцевик" // Max length 8 characters
#define MSG_MAIN                            "Меню"
#define MSG_AUTOSTART                       "Автостарт"
#define MSG_DISABLE_STEPPERS                "Вимк. двигуни"
#define MSG_AUTO_HOME                       "Авто паркування"
#define MSG_AUTO_HOME_X                     "Паркування X"
#define MSG_AUTO_HOME_Y                     "Паркування Y"
#define MSG_AUTO_HOME_Z                     "Паркування Z"
#define MSG_LEVEL_BED_HOMING                "Паркування XYZ"
#define MSG_LEVEL_BED_WAITING               "Почати"
#define MSG_LEVEL_BED_NEXT_POINT            "Слідуюча Точка"
#define MSG_LEVEL_BED_DONE                  "Завершено!"
#define MSG_SET_HOME_OFFSETS                "Зберегти паркув."
#define MSG_HOME_OFFSETS_APPLIED            "Зміщення застос."
#define MSG_SET_ORIGIN                      "Встанов. початок"
#define MSG_PREHEAT_1                       "Нагрів PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " Все"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " Стіл"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " нал."
#define MSG_PREHEAT_2                       "Нагрів ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " Все"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " Стіл"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " нал."
#define MSG_COOLDOWN                        "Охолодження"
#define MSG_SWITCH_PS_ON                    "Увімкнути живлення"
#define MSG_SWITCH_PS_OFF                   "Вимкнути живлення"
#define MSG_EXTRUDE                         "Екструзія"
#define MSG_RETRACT                         "Втягування"
#define MSG_MOVE_AXIS                       "Рух по осям"
#define MSG_BED_LEVELING                    "Нівелювання столу"
#define MSG_LEVEL_BED                       "Нівелювання столу"
#define MSG_MOVE_X                          "Рух по X"
#define MSG_MOVE_Y                          "Рух по Y"
#define MSG_MOVE_Z                          "Рух по Z"
#define MSG_MOVE_E                          "Екструдер"
#define MSG_MOVE_01MM                       "Рух по 0.1mm"
#define MSG_MOVE_1MM                        "Рух по 1mm"
#define MSG_MOVE_10MM                       "Рух по 10mm"
#define MSG_SPEED                           "Швидкість"
#define MSG_BED_Z                           "Z Столу"
#define MSG_NOZZLE                          "Сопло"
#define MSG_BED                             "Стіл"
#define MSG_FAN_SPEED                       "Охолодж."
#define MSG_FLOW                            "Потік"
#define MSG_CONTROL                         "Налаштування"
#define MSG_MIN                             " " LCD_STR_THERMOMETER " Мін"
#define MSG_MAX                             " " LCD_STR_THERMOMETER " Макс"
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Факт"
#define MSG_AUTOTEMP                        "Автотемпер."
#define MSG_ON                              "Увімк."
#define MSG_OFF                             "Вимк. "
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Вибрати"
#define MSG_ACC                             "Приск."
#define MSG_JERK                            "Ривок"
#define MSG_VX_JERK                         "Vx-ривок"
#define MSG_VY_JERK                         "Vy-ривок"
#define MSG_VZ_JERK                         "Vz-ривок"
#define MSG_VE_JERK                         "Ve-ривок"
#define MSG_VMAX                            "Vмакс"
#define MSG_VMIN                            "Vмін"
#define MSG_VTRAV_MIN                       "Vруху мін"
#define MSG_AMAX                            "Aмакс "
#define MSG_A_RETRACT                       "A-втягув."
#define MSG_A_TRAVEL                        "A-руху"
#define MSG_STEPS_PER_MM                    "Кроків/мм"
#define MSG_XSTEPS                          "Xкроків/мм"
#define MSG_YSTEPS                          "Yкроків/мм"
#define MSG_ZSTEPS                          "Zкроків/мм"
#define MSG_ESTEPS                          "Eкроків/мм"
#define MSG_E1STEPS                         "E1кроків/мм"
#define MSG_E2STEPS                         "E2кроків/мм"
#define MSG_E3STEPS                         "E3кроків/мм"
#define MSG_E4STEPS                         "E4кроків/мм"
#define MSG_E5STEPS                         "E5кроків/мм"
#define MSG_TEMPERATURE                     "Температура"
#define MSG_MOTION                          "Рух"
#define MSG_FILAMENT                        "Волокно"
#define MSG_VOLUMETRIC_ENABLED              "E в мм3"
#define MSG_FILAMENT_DIAM                   "Діам. волок."
#define MSG_CONTRAST                        "контраст LCD"
#define MSG_STORE_EEPROM                    "Зберегти в ПЗП"
#define MSG_LOAD_EEPROM                     "Зчитати з ПЗП"
#define MSG_RESTORE_FAILSAFE                "Відновити базові"
#define MSG_REFRESH                         "Поновити"
#define MSG_WATCH                           "Інформація"
#define MSG_PREPARE                         "Підготувати"
#define MSG_TUNE                            "Підлаштування"
#define MSG_PAUSE_PRINT                     "Призупинити друк"
#define MSG_RESUME_PRINT                    "Відновити друк"
#define MSG_STOP_PRINT                      "Скасувати друк"
#define MSG_CARD_MENU                       "Друкувати з SD"
#define MSG_NO_CARD                         "Відсутня SD карт."
#define MSG_DWELL                           "Сплячка..."
#define MSG_USERWAIT                        "Очікування дій..."
#define MSG_RESUMING                        "Відновлення друку"
#define MSG_PRINT_ABORTED                   "Друк скасовано"
#define MSG_NO_MOVE                         "Немає руху."
#define MSG_KILLED                          "ПЕРЕРВАНО. "
#define MSG_STOPPED                         "ЗУПИНЕНО. "
#define MSG_FILAMENTCHANGE                  "Зміна волокна"
#define MSG_INIT_SDCARD                     "Старт SD картки"
#define MSG_CNG_SDCARD                      "Заміна SD карти"
#define MSG_ZPROBE_OUT                      "Z дет. не в межах"
#define MSG_BLTOUCH_SELFTEST                "BLTouch Само-Тест"
#define MSG_BLTOUCH_RESET                   "Скинути BLTouch"
#define MSG_HOME                            "Дім"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "перший"
#define MSG_ZPROBE_ZOFFSET                  "Зміщення Z"
#define MSG_BABYSTEP_X                      "Мікрокрок X"
#define MSG_BABYSTEP_Y                      "Мікрокрок Y"
#define MSG_BABYSTEP_Z                      "Мікрокрок Z"
#define MSG_ENDSTOP_ABORT                   "невдача кінцевика"
#define MSG_HEATING_FAILED_LCD              "Невдалий нагрів"
#define MSG_THERMAL_RUNAWAY                 "ЗБІЙ ТЕМПЕРАТУРИ"
#define MSG_ERR_Z_HOMING                    "G28 Z Відмовлено"
#define MSG_HALTED                          "ПРИНТЕР ЗУПИНЕНО"
#define MSG_PLEASE_RESET                    "Перезавантажте"
#define MSG_SHORT_DAY                       "д" // One character only
#define MSG_SHORT_HOUR                      "г" // One character only
#define MSG_SHORT_MINUTE                    "х" // One character only
#define MSG_HEATING                         "Нагрівання..."
#define MSG_HEATING_COMPLETE                "Нагріто."
#define MSG_BED_HEATING                     "Нагрівання столу."
#define MSG_BED_DONE                        "Стіл нагрітий."
#define MSG_DELTA_CALIBRATE                 "Калібр. Delta"
#define MSG_DELTA_CALIBRATE_X               "Калібрування X"
#define MSG_DELTA_CALIBRATE_Y               "Калібрування Y"
#define MSG_DELTA_CALIBRATE_Z               "Калібрування Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Калібр. Центру"

#define MSG_INFO_MENU                       "Про принтер"
#define MSG_INFO_PRINTER_MENU               "Інформація"
#define MSG_INFO_STATS_MENU                 "Статистика"
#define MSG_INFO_BOARD_MENU                 "Про плату"
#define MSG_INFO_THERMISTOR_MENU            "Термістори"
#define MSG_INFO_EXTRUDERS                  "Екструдери"
#define MSG_INFO_BAUDRATE                   "біт/с"
#define MSG_INFO_PROTOCOL                   "Протокол"
#define MSG_CASE_LIGHT                      "Підсвітка"

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "К-сть друків"
  #define MSG_INFO_COMPLETED_PRINTS         "Завершено"
  #define MSG_INFO_PRINT_TIME               "Весь час друку"
  #define MSG_INFO_PRINT_LONGEST            "Найдовший час"
  #define MSG_INFO_PRINT_FILAMENT           "Екструдовано"
#else
  #define MSG_INFO_PRINT_COUNT              "Друків"
  #define MSG_INFO_COMPLETED_PRINTS         "Завершено"
  #define MSG_INFO_PRINT_TIME               "Загалом"
  #define MSG_INFO_PRINT_LONGEST            "Найдовший"
  #define MSG_INFO_PRINT_FILAMENT           "Ексдруд."
#endif

#define MSG_INFO_MIN_TEMP                   "Мін Темп."
#define MSG_INFO_MAX_TEMP                   "Макс Темп."
#define MSG_INFO_PSU                        "Джерело жив."

#define MSG_DRIVE_STRENGTH                  "Сила мотору"
#define MSG_DAC_PERCENT                     "% мотору"
#define MSG_DAC_EEPROM_WRITE                "Запис ЦАП на ПЗП"

#define MSG_FILAMENT_CHANGE_HEADER          "PRINT PAUSED"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "RESUME OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Екструдувати"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Відновити друк"

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Зачекайте на"
  #define MSG_FILAMENT_CHANGE_INIT_2          "початок заміни"
  #define MSG_FILAMENT_CHANGE_INIT_3          "волокна"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Зачекайте на"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "вивід волокна"
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Вставте волокно"
  #define MSG_FILAMENT_CHANGE_INSERT_2        "та натисніть для"
  #define MSG_FILAMENT_CHANGE_INSERT_3        "продовження..."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Зачекайте на"
  #define MSG_FILAMENT_CHANGE_LOAD_2          "ввід волокна"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Зачекайте на"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "екструзію"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_3       "волокна"
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Зачекайте на"
  #define MSG_FILAMENT_CHANGE_RESUME_2        "відновлення"
  #define MSG_FILAMENT_CHANGE_RESUME_3        "друку"
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Зачекайте..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Вивід..."
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Вставте і нат."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Ввід..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Екструзія..."
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Відновлення..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_UK_H
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
 * Simplified Chinese
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_ZH_CN_H
#define LANGUAGE_ZH_CN_H

#define WELCOME_MSG                         MACHINE_NAME "已就绪."  //" ready."
#define MSG_SD_INSERTED                     "存储卡已插入"  //"Card inserted"
#define MSG_SD_REMOVED                      "存储卡被拔出"  //"Card removed"
#define MSG_LCD_ENDSTOPS                    "挡块"  //"Endstops" // Max length 8 characters
#define MSG_MAIN                            "主菜单"  //"Main"
#define MSG_AUTOSTART                       "自动开始"  //"Autostart"
#define MSG_DISABLE_STEPPERS                "关闭步进电机"  //"Disable steppers"
#define MSG_AUTO_HOME                       "回原点"  //"Auto home"
#define MSG_AUTO_HOME_X                     "回X原位"  //"Home X"
#define MSG_AUTO_HOME_Y                     "回Y原位"  //"Home Y"
#define MSG_AUTO_HOME_Z                     "回Z原位"  //"Home Z"
#define MSG_LEVEL_BED_HOMING                "平台调平XYZ归原位"  //"Homing XYZ"
#define MSG_LEVEL_BED_WAITING               "单击开始热床调平"  //"Click to Begin"
#define MSG_LEVEL_BED_NEXT_POINT            "下个热床调平点"  //"Next Point"
#define MSG_LEVEL_BED_DONE                  "完成热床调平"  //"Leveling Done!"
#define MSG_SET_HOME_OFFSETS                "设置原点偏移"  //"Set home offsets"
#define MSG_HOME_OFFSETS_APPLIED            "偏移已启用"  //"Offsets applied"
#define MSG_SET_ORIGIN                      "设置原点"  //"Set origin"
#define MSG_PREHEAT_1                       "预热PLA"  //"Preheat PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "  //MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " 全部"  //MSG_PREHEAT_1 " All"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " 热床"  //MSG_PREHEAT_1 " Bed"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " 设置"  //MSG_PREHEAT_1 " conf"
#define MSG_PREHEAT_2                       "预热ABS"  //"Preheat ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "  //MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " 全部"  //MSG_PREHEAT_2 " All"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " 热床"  //MSG_PREHEAT_2 " Bed"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " 设置"  //MSG_PREHEAT_2 " conf"
#define MSG_COOLDOWN                        "降温"  //"Cooldown"
#define MSG_SWITCH_PS_ON                    "电源打开"  //"Switch power on"
#define MSG_SWITCH_PS_OFF                   "电源关闭"  //"Switch power off"
#define MSG_EXTRUDE                         "挤出"  //"Extrude"
#define MSG_RETRACT                         "回抽"  //"Retract"
#define MSG_MOVE_AXIS                       "移动轴"  //"Move axis"
#define MSG_BED_LEVELING                    "调平热床"  //"Bed leveling"
#define MSG_LEVEL_BED                       "调平热床"  //"Level bed"
#define MSG_MOVE_X                          "移动X"  //"Move X"
#define MSG_MOVE_Y                          "移动Y"  //"Move Y"
#define MSG_MOVE_Z                          "移动Z"  //"Move Z"
#define MSG_MOVE_E                          "挤出机"  //"Extruder"
#define MSG_MOVE_01MM                       "移动 0.1 mm"  //"Move 0.1mm"
#define MSG_MOVE_1MM                        "移动 1 mm"  //"Move 1mm"
#define MSG_MOVE_10MM                       "移动 10 mm"  //"Move 10mm"
#define MSG_SPEED                           "速率"  //"Speed"
#define MSG_BED_Z                           "热床Z"  //"Bed Z"
#define MSG_NOZZLE                          " " LCD_STR_THERMOMETER " 喷嘴"  //"Nozzle" 噴嘴
#define MSG_BED                             " " LCD_STR_THERMOMETER " 热床"  //"Bed"
#define MSG_FAN_SPEED                       "风扇速率"  //"Fan speed"
#define MSG_FLOW                            "挤出速率"  //"Flow"
#define MSG_CONTROL                         "控制"  //"Control"
#define MSG_MIN                             " " LCD_STR_THERMOMETER " 最小" //" " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             " " LCD_STR_THERMOMETER " 最大"  //" " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " 因数"  //" " LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "自动控温"  //"Autotemp"
#define MSG_ON                              "开 "  //"On "
#define MSG_OFF                             "关 "  //"Off"
#define MSG_PID_P                           "PID-P"  //"PID-P"
#define MSG_PID_I                           "PID-I"  //"PID-I"
#define MSG_PID_D                           "PID-D"  //"PID-D"
#define MSG_PID_C                           "PID-C"  //"PID-C"
#define MSG_SELECT                          "选择"  //"Select"
#define MSG_ACC                             "加速度"  //"Accel" acceleration
#define MSG_JERK                            "抖动速率"  // "Jerk"
#define MSG_VX_JERK                         "X轴抖动速率"  //"Vx-jerk"
#define MSG_VY_JERK                         "Y轴抖动速率"  //"Vy-jerk"
#define MSG_VZ_JERK                         "Z轴抖动速率"  //"Vz-jerk"
#define MSG_VE_JERK                         "挤出机抖动速率"  //"Ve-jerk"
#define MSG_VMAX                            "最大进料速率"  //"Vmax " max_feedrate_mm_s
#define MSG_VMIN                            "最小进料速率"  //"Vmin"  min_feedrate_mm_s
#define MSG_VTRAV_MIN                       "最小移动速率"  //"VTrav min" min_travel_feedrate_mm_s, (target) speed of the move
#define MSG_AMAX                            "最大打印加速度"  //"Amax " max_acceleration_mm_per_s2, acceleration in units/s^2 for print moves
#define MSG_A_RETRACT                       "收进加速度"  //"A-retract" retract_acceleration, E acceleration in mm/s^2 for retracts
#define MSG_A_TRAVEL                        "非打印移动加速度"  //"A-travel" travel_acceleration, X, Y, Z acceleration in mm/s^2 for travel (non printing) moves
#define MSG_STEPS_PER_MM                    "轴步数/mm"  //"Steps/mm" axis_steps_per_mm, axis steps-per-unit G92
#define MSG_XSTEPS                          "X轴步数/mm"  //"Xsteps/mm" axis_steps_per_mm, axis steps-per-unit G92
#define MSG_YSTEPS                          "Y轴步数/mm"  //"Ysteps/mm"
#define MSG_ZSTEPS                          "Z轴步数/mm"  //"Zsteps/mm"
#define MSG_ESTEPS                          "挤出机步数/mm"  //"Esteps/mm"
#define MSG_TEMPERATURE                     "温度"  //"Temperature"
#define MSG_MOTION                          "运动"  //"Motion"
#define MSG_FILAMENT                        "丝料测容"  //"Filament" lcd_control_volumetric_menu
#define MSG_VOLUMETRIC_ENABLED              "测容积mm³"  //"E in mm3" volumetric_enabled
#define MSG_FILAMENT_DIAM                   "丝料直径"  //"Fil. Dia."
#define MSG_CONTRAST                        "LCD对比度"  //"LCD contrast"
#define MSG_STORE_EEPROM                    "保存设置"  //"Store memory"
#define MSG_LOAD_EEPROM                     "装载设置"  //"Load memory"
#define MSG_RESTORE_FAILSAFE                "恢复安全值"  //"Restore failsafe"
#define MSG_REFRESH                         "刷新"  //"Refresh"
#define MSG_WATCH                           "信息屏"  //"Info screen"
#define MSG_PREPARE                         "准备"  //"Prepare"
#define MSG_TUNE                            "调整"  //"Tune"
#define MSG_PAUSE_PRINT                     "暂停打印"  //"Pause print"
#define MSG_RESUME_PRINT                    "恢复打印"  //"Resume print"
#define MSG_STOP_PRINT                      "停止打印"  //"Stop print"
#define MSG_CARD_MENU                       "从存储卡上打印"  //"Print from SD"
#define MSG_NO_CARD                         "无存储卡"  //"No SD card"
#define MSG_DWELL                           "休眠中 ..."  //"Sleep..."
#define MSG_USERWAIT                        "等待用户 ..."  //"Wait for user..."
#define MSG_RESUMING                        "恢复打印中"  //"Resuming print"
#define MSG_PRINT_ABORTED                   "打印已取消"  //"Print aborted"
#define MSG_NO_MOVE                         "无移动"  //"No move."
#define MSG_KILLED                          "已杀掉"  //"KILLED. "
#define MSG_STOPPED                         "已停止"  //"STOPPED. "
#define MSG_CONTROL_RETRACT                 "回抽长度mm"  //"Retract mm" retract_length, retract length (positive mm)
#define MSG_CONTROL_RETRACT_SWAP            "换手回抽长度mm"  //"Swap Re.mm" swap_retract_length, swap retract length (positive mm), for extruder change
#define MSG_CONTROL_RETRACTF                "回抽速率mm/s"  //"Retract  V" retract_feedrate_mm_s, feedrate for retracting (mm/s)
#define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"  //"Hop mm" retract_zlift, retract Z-lift
#define MSG_CONTROL_RETRACT_RECOVER         "回抽恢复长度mm"  //"UnRet +mm" retract_recover_length, additional recover length (mm, added to retract length when recovering)
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "换手回抽恢复长度mm"  //"S UnRet+mm" swap_retract_recover_length, additional swap recover length (mm, added to retract length when recovering from extruder change)
#define MSG_CONTROL_RETRACT_RECOVERF        "回抽恢复后进料速率mm/s"  //"UnRet  V" retract_recover_feedrate_mm_s, feedrate for recovering from retraction (mm/s)
#define MSG_AUTORETRACT                     "自动抽回"  //"AutoRetr." autoretract_enabled,
#define MSG_FILAMENTCHANGE                  "更换丝料"  //"Change filament"
#define MSG_INIT_SDCARD                     "初始化存储卡"  //"Init. SD card"
#define MSG_CNG_SDCARD                      "更换存储卡"  //"Change SD card"
#define MSG_ZPROBE_OUT                      "Z探针在热床之外"  //"Z probe out. bed" Z probe is not within the physical limits
#define MSG_HOME                            "归位"  //"Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "先"  //"first"
#define MSG_ZPROBE_ZOFFSET                  "Z偏移"  //"Z Offset"
#define MSG_BABYSTEP_X                      "微量调整X轴"  //"Babystep X" lcd_babystep_x, Babystepping enables the user to control the axis in tiny amounts
#define MSG_BABYSTEP_Y                      "微量调整Y轴"  //"Babystep Y"
#define MSG_BABYSTEP_Z                      "微量调整Z轴"  //"Babystep Z"
#define MSG_ENDSTOP_ABORT                   "挡块终止"  //"Endstop abort"
#define MSG_HEATING_FAILED_LCD              "加热失败"  //"Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              "错误：REDUNDANT TEMP"  //"Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 "温控失控"  //"THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     "错误：最高温度"  //"Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     "错误：最低温度"  //"Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 "错误：最高热床温度"  //"Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                 "错误：最低热床温度"  //"Err: MINTEMP BED"
#define MSG_HALTED                          "打印停机"  //"PRINTER HALTED"
#define MSG_PLEASE_RESET                    "请重置"  //"Please reset"
#define MSG_SHORT_DAY                       "天"  //"d" // One character only
#define MSG_SHORT_HOUR                      "时"  //"h" // One character only
#define MSG_SHORT_MINUTE                    "分"  //"m" // One character only
#define MSG_HEATING                         "加热中 ..."  //"Heating..."
#define MSG_HEATING_COMPLETE                "完成加热"  //"Heating done."
#define MSG_BED_HEATING                     "加热热床中"  //"Bed Heating."
#define MSG_BED_DONE                        "完成加热热床"  //"Bed done."
#define MSG_DELTA_CALIBRATE                 "⊿校准"  //"Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               "校准X"  //"Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               "校准Y"  //"Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               "校准Z"  //"Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          "校准中心"  //"Calibrate Center"

#define MSG_INFO_MENU                       "关于打印机"  //"About Printer"
#define MSG_INFO_PRINTER_MENU               "打印机信息"  //"Printer Info"
#define MSG_INFO_STATS_MENU                 "打印机统计"  //"Printer Stats"
#define MSG_INFO_BOARD_MENU                 "主板信息"  //"Board Info"
#define MSG_INFO_THERMISTOR_MENU            "温度计"  //"Thermistors"
#define MSG_INFO_EXTRUDERS                  "挤出机"  //"Extruders"
#define MSG_INFO_BAUDRATE                   "波特率"  //"Baud"
#define MSG_INFO_PROTOCOL                   "协议"  //"Protocol"

#if LCD_WIDTH > 19
#define MSG_INFO_PRINT_COUNT              "打印计数"  //"Print Count"
#define MSG_INFO_COMPLETED_PRINTS         "完成了"  //"Completed"
#define MSG_INFO_PRINT_TIME               "总打印时间"  //"Total print time"
#define MSG_INFO_PRINT_LONGEST            "最长工作时间"  //"Longest job time"
#define MSG_INFO_PRINT_FILAMENT           "总计挤出"  //"Extruded total"
#else
#define MSG_INFO_PRINT_COUNT              "打印数"  //"Prints"
#define MSG_INFO_COMPLETED_PRINTS         "完成"  //"Completed"
#define MSG_INFO_PRINT_TIME               "总共"  //"Total"
#define MSG_INFO_PRINT_LONGEST            "最长"  //"Longest"
#define MSG_INFO_PRINT_FILAMENT           "已挤出"  //"Extruded"
#endif

#define MSG_INFO_MIN_TEMP                   "最低温度"  //"Min Temp"
#define MSG_INFO_MAX_TEMP                   "最高温度"  //"Max Temp"
#define MSG_INFO_PSU                        "电源供应"  //"Power Supply"

#define MSG_FILAMENT_CHANGE_HEADER          "PRINT PAUSED"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "RESUME OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "挤出更多"  //"Extrude more"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "恢复打印"  //"Resume print"

#if LCD_HEIGHT >= 4
#define MSG_FILAMENT_CHANGE_INIT_1          "等待开始"  //"Wait for start"
#define MSG_FILAMENT_CHANGE_INIT_2          "丝料"  //"of the filament"
#define MSG_FILAMENT_CHANGE_INIT_3          "变更"  //"change"
#define MSG_FILAMENT_CHANGE_UNLOAD_1        "等待"  //"Wait for"
#define MSG_FILAMENT_CHANGE_UNLOAD_2        "卸下丝料"  //"filament unload"
#define MSG_FILAMENT_CHANGE_UNLOAD_3        ""  //""
#define MSG_FILAMENT_CHANGE_INSERT_1        "插入丝料"  //"Insert filament"
#define MSG_FILAMENT_CHANGE_INSERT_2        "并按键"  //"and press button"
#define MSG_FILAMENT_CHANGE_INSERT_3        "来继续 ..."  //"to continue..."
#define MSG_FILAMENT_CHANGE_LOAD_1          "等待"  //"Wait for"
#define MSG_FILAMENT_CHANGE_LOAD_2          "进料"  //"filament load"
#define MSG_FILAMENT_CHANGE_LOAD_3          ""  //""
#define MSG_FILAMENT_CHANGE_EXTRUDE_1       "等待"  //"Wait for"
#define MSG_FILAMENT_CHANGE_EXTRUDE_2       "丝料挤出"  //"filament extrude"
#define MSG_FILAMENT_CHANGE_EXTRUDE_3       ""  //""
#define MSG_FILAMENT_CHANGE_RESUME_1        "等待打印"  //"Wait for print"
#define MSG_FILAMENT_CHANGE_RESUME_2        "恢复"  //"to resume"
#define MSG_FILAMENT_CHANGE_RESUME_3        ""  //""

#else // LCD_HEIGHT < 4
#define MSG_FILAMENT_CHANGE_INIT_1          "请等待 ..."  //"Please wait..."
#define MSG_FILAMENT_CHANGE_UNLOAD_1        "退出中 ..."  //"Ejecting..."
#define MSG_FILAMENT_CHANGE_INSERT_1        "插入并单击"  //"Insert and Click"
#define MSG_FILAMENT_CHANGE_LOAD_1          "装载中 ..."  //"Loading..."
#define MSG_FILAMENT_CHANGE_EXTRUDE_1       "挤出中 ..."  //"Extruding..."
#define MSG_FILAMENT_CHANGE_RESUME_1        "恢复中 ..."  //"Resuming..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_ZH_CN_H
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
 * Traditional Chinese
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_ZH_TW_H
#define LANGUAGE_ZH_TW_H

#define WELCOME_MSG                         MACHINE_NAME "已就緒."  //" ready."
#define MSG_SD_INSERTED                     "記憶卡已插入"  //"Card inserted"
#define MSG_SD_REMOVED                      "記憶卡被拔出"  //"Card removed"
#define MSG_LCD_ENDSTOPS                    "擋塊"  //"Endstops" // Max length 8 characters
#define MSG_MAIN                            "主選單"  //"Main"
#define MSG_AUTOSTART                       "自動開始"  //"Autostart"
#define MSG_DISABLE_STEPPERS                "關閉步進驅動"  //"Disable steppers"
#define MSG_AUTO_HOME                       "自動回原點"  //"Auto home"
#define MSG_AUTO_HOME_X                     "回X原位"  //"Home X"
#define MSG_AUTO_HOME_Y                     "回Y原位"  //"Home Y"
#define MSG_AUTO_HOME_Z                     "回Z原位"  //"Home Z"
#define MSG_LEVEL_BED_HOMING                "平台調平XYZ歸原位"  //"Homing XYZ"
#define MSG_LEVEL_BED_WAITING               "單擊開始熱床調平"  //"Click to Begin"
#define MSG_LEVEL_BED_NEXT_POINT            "下個熱床調平點"  //"Next Point"
#define MSG_LEVEL_BED_DONE                  "完成熱床調平"  //"Leveling Done!"
#define MSG_SET_HOME_OFFSETS                "設置原點偏移"  //"Set home offsets"
#define MSG_HOME_OFFSETS_APPLIED            "偏移已啟用"  //"Offsets applied"
#define MSG_SET_ORIGIN                      "設置原點"  //"Set origin"
#define MSG_PREHEAT_1                       "預熱PLA"  //"Preheat PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "  //MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " 全部"  //MSG_PREHEAT_1 " All"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " 熱床"  //MSG_PREHEAT_1 " Bed"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " 設置"  //MSG_PREHEAT_1 " conf"
#define MSG_PREHEAT_2                       "預熱ABS"  //"Preheat ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "  //MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " 全部"  //MSG_PREHEAT_2 " All"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " 熱床"  //MSG_PREHEAT_2 " Bed"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " 設置"  //MSG_PREHEAT_2 " conf"
#define MSG_COOLDOWN                        "降溫"  //"Cooldown"
#define MSG_SWITCH_PS_ON                    "電源打開"  //"Switch power on"
#define MSG_SWITCH_PS_OFF                   "電源關閉"  //"Switch power off"
#define MSG_EXTRUDE                         "擠出"  //"Extrude"
#define MSG_RETRACT                         "回抽"  //"Retract"
#define MSG_MOVE_AXIS                       "移動軸"  //"Move axis"
#define MSG_BED_LEVELING                    "調平熱床"  //"Bed leveling"
#define MSG_LEVEL_BED                       "調平熱床"  //"Level bed"
#define MSG_MOVE_X                          "移動X"  //"Move X"
#define MSG_MOVE_Y                          "移動Y"  //"Move Y"
#define MSG_MOVE_Z                          "移動Z"  //"Move Z"
#define MSG_MOVE_E                          "擠出機"  //"Extruder"
#define MSG_MOVE_01MM                       "移動 0.1 mm"  //"Move 0.1mm"
#define MSG_MOVE_1MM                        "移動 1 mm"  //"Move 1mm"
#define MSG_MOVE_10MM                       "移動 10 mm"  //"Move 10mm"
#define MSG_SPEED                           "速率"  //"Speed"
#define MSG_BED_Z                           "熱床Z"  //"Bed Z"
#define MSG_NOZZLE                          " " LCD_STR_THERMOMETER " 噴嘴"  //"Nozzle" 噴嘴
#define MSG_BED                             " " LCD_STR_THERMOMETER " 熱床"  //"Bed"
#define MSG_FAN_SPEED                       "風扇速率"  //"Fan speed"
#define MSG_FLOW                            "擠出速率"  //"Flow"
#define MSG_CONTROL                         "控制"  //"Control"
#define MSG_MIN                             " " LCD_STR_THERMOMETER " 最小" //" " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             " " LCD_STR_THERMOMETER " 最大"  //" " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " 系數"  //" " LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "自動控溫"  //"Autotemp"
#define MSG_ON                              "開 "  //"On "
#define MSG_OFF                             "關 "  //"Off"
#define MSG_PID_P                           "PID-P"  //"PID-P"
#define MSG_PID_I                           "PID-I"  //"PID-I"
#define MSG_PID_D                           "PID-D"  //"PID-D"
#define MSG_PID_C                           "PID-C"  //"PID-C"
#define MSG_SELECT                          "選擇"  //"Select"
#define MSG_ACC                             "加速度"  //"Accel" acceleration
#define MSG_JERK                            "抖動速率"  //"Jerk"
#define MSG_VX_JERK                         "X軸抖動速率"  //"Vx-jerk"
#define MSG_VY_JERK                         "Y軸抖動速率"  //"Vy-jerk"
#define MSG_VZ_JERK                         "Z軸抖動速率"  //"Vz-jerk"
#define MSG_VE_JERK                         "擠出機抖動速率"  //"Ve-jerk"
#define MSG_VMAX                            "最大進料速率"  //"Vmax " max_feedrate_mm_s
#define MSG_VMIN                            "最小進料速率"  //"Vmin"  min_feedrate_mm_s
#define MSG_VTRAV_MIN                       "最小移動速率"  //"VTrav min" min_travel_feedrate_mm_s, (target) speed of the move
#define MSG_AMAX                            "最大列印加速度"  //"Amax " max_acceleration_mm_per_s2, acceleration in units/s^2 for print moves
#define MSG_A_RETRACT                       "收進加速度"  //"A-retract" retract_acceleration, E acceleration in mm/s^2 for retracts
#define MSG_A_TRAVEL                        "非列印移動加速度"  //"A-travel" travel_acceleration, X, Y, Z acceleration in mm/s^2 for travel (non printing) moves
#define MSG_STEPS_PER_MM                    "軸步數/mm"  //"Steps/mm" axis_steps_per_mm, axis steps-per-unit G92
#define MSG_XSTEPS                          "X軸步數/mm"  //"Xsteps/mm" axis_steps_per_mm, axis steps-per-unit G92
#define MSG_YSTEPS                          "Y軸步數/mm"  //"Ysteps/mm"
#define MSG_ZSTEPS                          "Z軸步數/mm"  //"Zsteps/mm"
#define MSG_ESTEPS                          "擠出機步數/mm"  //"Esteps/mm"
#define MSG_TEMPERATURE                     "溫度"  //"Temperature"
#define MSG_MOTION                          "運動"  //"Motion"
#define MSG_FILAMENT                        "絲料測容"  //"Filament" lcd_control_volumetric_menu
#define MSG_VOLUMETRIC_ENABLED              "測容積mm³"  //"E in mm3" volumetric_enabled
#define MSG_FILAMENT_DIAM                   "絲料直徑"  //"Fil. Dia."
#define MSG_CONTRAST                        "LCD對比度"  //"LCD contrast"
#define MSG_STORE_EEPROM                    "保存設置"  //"Store memory"
#define MSG_LOAD_EEPROM                     "裝載設置"  //"Load memory"
#define MSG_RESTORE_FAILSAFE                "恢複安全值"  //"Restore failsafe"
#define MSG_REFRESH                         "刷新"  //"Refresh"
#define MSG_WATCH                           "資訊界面"  //"Info screen"
#define MSG_PREPARE                         "準備"  //"Prepare"
#define MSG_TUNE                            "調整"  //"Tune"
#define MSG_PAUSE_PRINT                     "暫停列印"  //"Pause print"
#define MSG_RESUME_PRINT                    "恢複列印"  //"Resume print"
#define MSG_STOP_PRINT                      "停止列印"  //"Stop print"
#define MSG_CARD_MENU                       "從記憶卡上列印"  //"Print from SD"
#define MSG_NO_CARD                         "無記憶卡"  //"No SD card"
#define MSG_DWELL                           "休眠 ..."  //"Sleep..."
#define MSG_USERWAIT                        "等待用戶 ..."  //"Wait for user..."
#define MSG_RESUMING                        "恢複列印中"  //"Resuming print"
#define MSG_PRINT_ABORTED                   "列印已取消"  //"Print aborted"
#define MSG_NO_MOVE                         "無移動"  //"No move."
#define MSG_KILLED                          "已殺掉"  //"KILLED. "
#define MSG_STOPPED                         "已停止"  //"STOPPED. "
#define MSG_CONTROL_RETRACT                 "回抽長度mm"  //"Retract mm" retract_length, retract length (positive mm)
#define MSG_CONTROL_RETRACT_SWAP            "換手回抽長度mm"  //"Swap Re.mm" swap_retract_length, swap retract length (positive mm), for extruder change
#define MSG_CONTROL_RETRACTF                "回抽速率mm/s"  //"Retract  V" retract_feedrate_mm_s, feedrate for retracting (mm/s)
#define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"  //"Hop mm" retract_zlift, retract Z-lift
#define MSG_CONTROL_RETRACT_RECOVER         "回抽恢複長度mm"  //"UnRet +mm" retract_recover_length, additional recover length (mm, added to retract length when recovering)
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "換手回抽恢複長度mm"  //"S UnRet+mm" swap_retract_recover_length, additional swap recover length (mm, added to retract length when recovering from extruder change)
#define MSG_CONTROL_RETRACT_RECOVERF        "回抽恢複後進料速率mm/s"  //"UnRet  V" retract_recover_feedrate_mm_s, feedrate for recovering from retraction (mm/s)
#define MSG_AUTORETRACT                     "自動抽回"  //"AutoRetr." autoretract_enabled,
#define MSG_FILAMENTCHANGE                  "更換絲料"  //"Change filament"
#define MSG_INIT_SDCARD                     "初始化記憶卡"  //"Init. SD card"
#define MSG_CNG_SDCARD                      "更換記憶卡"  //"Change SD card"
#define MSG_ZPROBE_OUT                      "Z探針在熱床之外"  //"Z probe out. bed" Z probe is not within the physical limits
#define MSG_HOME                            "歸位"  //"Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "先"  //"first"
#define MSG_ZPROBE_ZOFFSET                  "Z偏移"  //"Z Offset"
#define MSG_BABYSTEP_X                      "微量調整X軸"  //"Babystep X" lcd_babystep_x, Babystepping enables the user to control the axis in tiny amounts
#define MSG_BABYSTEP_Y                      "微量調整Y軸"  //"Babystep Y"
#define MSG_BABYSTEP_Z                      "微量調整Z軸"  //"Babystep Z"
#define MSG_ENDSTOP_ABORT                   "擋塊終止"  //"Endstop abort"
#define MSG_HEATING_FAILED_LCD              "加熱失敗"  //"Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              "錯誤：REDUNDANT TEMP"  //"Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 "溫控失控"  //"THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     "錯誤：最高溫度"  //"Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     "錯誤：最低溫度"  //"Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 "錯誤：最高熱床溫度"  //"Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                 "錯誤：最低熱床溫度"  //"Err: MINTEMP BED"
#define MSG_HALTED                          "印表機停機"  //"PRINTER HALTED"
#define MSG_PLEASE_RESET                    "請重置"  //"Please reset"
#define MSG_SHORT_DAY                       "天"  //"d" // One character only
#define MSG_SHORT_HOUR                      "時"  //"h" // One character only
#define MSG_SHORT_MINUTE                    "分"  //"m" // One character only
#define MSG_HEATING                         "加熱中 ..."  //"Heating..."
#define MSG_HEATING_COMPLETE                "完成加熱"  //"Heating done."
#define MSG_BED_HEATING                     "加熱熱床中"  //"Bed Heating."
#define MSG_BED_DONE                        "完成加熱熱床"  //"Bed done."
#define MSG_DELTA_CALIBRATE                 "⊿校準"  //"Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               "校準X"  //"Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               "校準Y"  //"Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               "校準Z"  //"Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          "校準中心"  //"Calibrate Center"

#define MSG_INFO_MENU                       "關於印表機"  //"About Printer"
#define MSG_INFO_PRINTER_MENU               "印表機信息"  //"Printer Info"
#define MSG_INFO_STATS_MENU                 "印表機統計"  //"Printer Stats"
#define MSG_INFO_BOARD_MENU                 "主板信息"  //"Board Info"
#define MSG_INFO_THERMISTOR_MENU            "溫度計"  //"Thermistors"
#define MSG_INFO_EXTRUDERS                  "擠出機"  //"Extruders"
#define MSG_INFO_BAUDRATE                   "波特率"  //"Baud"
#define MSG_INFO_PROTOCOL                   "協議"  //"Protocol"

#if LCD_WIDTH > 19
#define MSG_INFO_PRINT_COUNT              "列印計數"  //"Print Count"
#define MSG_INFO_COMPLETED_PRINTS         "完成了"  //"Completed"
#define MSG_INFO_PRINT_TIME               "總列印時間"  //"Total print time"
#define MSG_INFO_PRINT_LONGEST            "最長工作時間"  //"Longest job time"
#define MSG_INFO_PRINT_FILAMENT           "總計擠出"  //"Extruded total"
#else
#define MSG_INFO_PRINT_COUNT              "列印數"  //"Prints"
#define MSG_INFO_COMPLETED_PRINTS         "完成"  //"Completed"
#define MSG_INFO_PRINT_TIME               "總共"  //"Total"
#define MSG_INFO_PRINT_LONGEST            "最長"  //"Longest"
#define MSG_INFO_PRINT_FILAMENT           "已擠出"  //"Extruded"
#endif

#define MSG_INFO_MIN_TEMP                   "最低溫度"  //"Min Temp"
#define MSG_INFO_MAX_TEMP                   "最高溫度"  //"Max Temp"
#define MSG_INFO_PSU                        "電源供應"  //"Power Supply"

#define MSG_FILAMENT_CHANGE_HEADER          "PRINT PAUSED"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "RESUME OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "擠出更多"  //"Extrude more"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "恢複列印"  //"Resume print"

#if LCD_HEIGHT >= 4
#define MSG_FILAMENT_CHANGE_INIT_1          "等待開始"  //"Wait for start"
#define MSG_FILAMENT_CHANGE_INIT_2          "絲料"  //"of the filament"
#define MSG_FILAMENT_CHANGE_INIT_3          "變更"  //"change"
#define MSG_FILAMENT_CHANGE_UNLOAD_1        "等待"  //"Wait for"
#define MSG_FILAMENT_CHANGE_UNLOAD_2        "卸下絲料"  //"filament unload"
#define MSG_FILAMENT_CHANGE_UNLOAD_3        ""  //""
#define MSG_FILAMENT_CHANGE_INSERT_1        "插入絲料"  //"Insert filament"
#define MSG_FILAMENT_CHANGE_INSERT_2        "並按鍵"  //"and press button"
#define MSG_FILAMENT_CHANGE_INSERT_3        "來繼續 ..."  //"to continue..."
#define MSG_FILAMENT_CHANGE_LOAD_1          "等待"  //"Wait for"
#define MSG_FILAMENT_CHANGE_LOAD_2          "進料"  //"filament load"
#define MSG_FILAMENT_CHANGE_LOAD_3          ""  //""
#define MSG_FILAMENT_CHANGE_EXTRUDE_1       "等待"  //"Wait for"
#define MSG_FILAMENT_CHANGE_EXTRUDE_2       "絲料擠出"  //"filament extrude"
#define MSG_FILAMENT_CHANGE_EXTRUDE_3       ""  //""
#define MSG_FILAMENT_CHANGE_RESUME_1        "等待列印"  //"Wait for print"
#define MSG_FILAMENT_CHANGE_RESUME_2        "恢複"  //"to resume"
#define MSG_FILAMENT_CHANGE_RESUME_3        ""  //""

#else // LCD_HEIGHT < 4
#define MSG_FILAMENT_CHANGE_INIT_1          "請等待 ..."  //"Please wait..."
#define MSG_FILAMENT_CHANGE_UNLOAD_1        "退出中 ..."  //"Ejecting..."
#define MSG_FILAMENT_CHANGE_INSERT_1        "插入並單擊"  //"Insert and Click"
#define MSG_FILAMENT_CHANGE_LOAD_1          "裝載中 ..."  //"Loading..."
#define MSG_FILAMENT_CHANGE_EXTRUDE_1       "擠出中 ..."  //"Extruding..."
#define MSG_FILAMENT_CHANGE_RESUME_1        "恢複中 ..."  //"Resuming..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_ZH_TW_H
