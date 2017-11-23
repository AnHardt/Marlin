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
