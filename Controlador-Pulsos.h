#include <16F876.h>
#device ADC=16

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal=20000000)
#define BT_DEC   PIN_B5
#define BT_INC   PIN_B6
#define BT_MODE   PIN_B7
#define BT_CHANGE_ROT PIN_C0

#define BT_START_STOP   PIN_B0
#define OUT_CLK   PIN_B1
#define OUT_CHANGE_ROT   PIN_C1
#define OUT_CLK_ENA   PIN_B2
#define OUT_DRV_ENA   PIN_B3
#define OUT_MODE   PIN_B4
#define OUT_STATUS   PIN_C7

#define DEBOUCE_BUTTON_TIME 50
#define TIME_BEFORE_STOP 1000
#define TIME_AFTER_STOP 2000
