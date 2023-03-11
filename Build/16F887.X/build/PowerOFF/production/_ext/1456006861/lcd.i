# 1 "../../Sources/16F887/lcd.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 288 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "../../Sources/16F887/lcd.c" 2
# 26 "../../Sources/16F887/lcd.c"
# 1 "../../Sources/16F887/./../../Libraries/16F887/lcd.h" 1
# 30 "../../Sources/16F887/./../../Libraries/16F887/lcd.h"
# 1 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdarg.h" 1 3






typedef void * va_list[1];

#pragma intrinsic(__va_start)
extern void * __va_start(void);

#pragma intrinsic(__va_arg)
extern void * __va_arg(void *, ...);
# 31 "../../Sources/16F887/./../../Libraries/16F887/lcd.h" 2
# 1 "../../Sources/16F887/./../../Libraries/16F887/delay.h" 1
# 29 "../../Sources/16F887/./../../Libraries/16F887/delay.h"
# 1 "../../Sources/16F887/./../../Libraries/16F887/macros.h" 1
# 30 "../../Sources/16F887/./../../Libraries/16F887/macros.h"
# 1 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\xc.h" 1 3
# 18 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\xc.h" 3
extern const char __xc8_OPTIM_SPEED;

extern double __fpnormalize(double);



# 1 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\xc8debug.h" 1 3
# 13 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\xc8debug.h" 3
#pragma intrinsic(__builtin_software_breakpoint)
extern void __builtin_software_breakpoint(void);
# 24 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\xc.h" 2 3
# 1 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\builtins.h" 1 3



# 1 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdint.h" 1 3
# 13 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdint.h" 3
typedef signed char int8_t;






typedef signed int int16_t;







typedef __int24 int24_t;







typedef signed long int int32_t;
# 52 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdint.h" 3
typedef unsigned char uint8_t;





typedef unsigned int uint16_t;






typedef __uint24 uint24_t;






typedef unsigned long int uint32_t;
# 88 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdint.h" 3
typedef signed char int_least8_t;







typedef signed int int_least16_t;
# 109 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdint.h" 3
typedef __int24 int_least24_t;
# 118 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdint.h" 3
typedef signed long int int_least32_t;
# 136 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdint.h" 3
typedef unsigned char uint_least8_t;






typedef unsigned int uint_least16_t;
# 154 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdint.h" 3
typedef __uint24 uint_least24_t;







typedef unsigned long int uint_least32_t;
# 181 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdint.h" 3
typedef signed char int_fast8_t;






typedef signed int int_fast16_t;
# 200 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdint.h" 3
typedef __int24 int_fast24_t;







typedef signed long int int_fast32_t;
# 224 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdint.h" 3
typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
# 240 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdint.h" 3
typedef __uint24 uint_fast24_t;






typedef unsigned long int uint_fast32_t;
# 268 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdint.h" 3
typedef int32_t intmax_t;
# 282 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdint.h" 3
typedef uint32_t uintmax_t;






typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
# 5 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\builtins.h" 2 3


#pragma intrinsic(__nop)
extern void __nop(void);


#pragma intrinsic(_delay)
extern __attribute__((nonreentrant)) void _delay(uint32_t);
#pragma intrinsic(_delaywdt)
extern __attribute__((nonreentrant)) void _delaywdt(uint32_t);
# 25 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\xc.h" 2 3



# 1 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\pic.h" 1 3




# 1 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\htc.h" 1 3



# 1 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\xc.h" 1 3
# 5 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\htc.h" 2 3
# 6 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\pic.h" 2 3







# 1 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\pic_chip_select.h" 1 3
# 724 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\pic_chip_select.h" 3
# 1 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 1 3
# 45 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
# 1 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\__at.h" 1 3
# 46 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 2 3







extern volatile unsigned char INDF __attribute__((address(0x000)));

__asm("INDF equ 00h");




extern volatile unsigned char TMR0 __attribute__((address(0x001)));

__asm("TMR0 equ 01h");




extern volatile unsigned char PCL __attribute__((address(0x002)));

__asm("PCL equ 02h");




extern volatile unsigned char STATUS __attribute__((address(0x003)));

__asm("STATUS equ 03h");


typedef union {
    struct {
        unsigned C :1;
        unsigned DC :1;
        unsigned Z :1;
        unsigned nPD :1;
        unsigned nTO :1;
        unsigned RP :2;
        unsigned IRP :1;
    };
    struct {
        unsigned :5;
        unsigned RP0 :1;
        unsigned RP1 :1;
    };
    struct {
        unsigned CARRY :1;
        unsigned :1;
        unsigned ZERO :1;
    };
} STATUSbits_t;
extern volatile STATUSbits_t STATUSbits __attribute__((address(0x003)));
# 160 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char FSR __attribute__((address(0x004)));

__asm("FSR equ 04h");




extern volatile unsigned char PORTA __attribute__((address(0x005)));

__asm("PORTA equ 05h");


typedef union {
    struct {
        unsigned RA0 :1;
        unsigned RA1 :1;
        unsigned RA2 :1;
        unsigned RA3 :1;
        unsigned RA4 :1;
        unsigned RA5 :1;
        unsigned RA6 :1;
        unsigned RA7 :1;
    };
} PORTAbits_t;
extern volatile PORTAbits_t PORTAbits __attribute__((address(0x005)));
# 229 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char PORTB __attribute__((address(0x006)));

__asm("PORTB equ 06h");


typedef union {
    struct {
        unsigned RB0 :1;
        unsigned RB1 :1;
        unsigned RB2 :1;
        unsigned RB3 :1;
        unsigned RB4 :1;
        unsigned RB5 :1;
        unsigned RB6 :1;
        unsigned RB7 :1;
    };
} PORTBbits_t;
extern volatile PORTBbits_t PORTBbits __attribute__((address(0x006)));
# 291 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char PORTC __attribute__((address(0x007)));

__asm("PORTC equ 07h");


typedef union {
    struct {
        unsigned RC0 :1;
        unsigned RC1 :1;
        unsigned RC2 :1;
        unsigned RC3 :1;
        unsigned RC4 :1;
        unsigned RC5 :1;
        unsigned RC6 :1;
        unsigned RC7 :1;
    };
} PORTCbits_t;
extern volatile PORTCbits_t PORTCbits __attribute__((address(0x007)));
# 353 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char PORTD __attribute__((address(0x008)));

__asm("PORTD equ 08h");


typedef union {
    struct {
        unsigned RD0 :1;
        unsigned RD1 :1;
        unsigned RD2 :1;
        unsigned RD3 :1;
        unsigned RD4 :1;
        unsigned RD5 :1;
        unsigned RD6 :1;
        unsigned RD7 :1;
    };
} PORTDbits_t;
extern volatile PORTDbits_t PORTDbits __attribute__((address(0x008)));
# 415 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char PORTE __attribute__((address(0x009)));

__asm("PORTE equ 09h");


typedef union {
    struct {
        unsigned RE0 :1;
        unsigned RE1 :1;
        unsigned RE2 :1;
        unsigned RE3 :1;
    };
} PORTEbits_t;
extern volatile PORTEbits_t PORTEbits __attribute__((address(0x009)));
# 453 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char PCLATH __attribute__((address(0x00A)));

__asm("PCLATH equ 0Ah");




extern volatile unsigned char INTCON __attribute__((address(0x00B)));

__asm("INTCON equ 0Bh");


typedef union {
    struct {
        unsigned RBIF :1;
        unsigned INTF :1;
        unsigned T0IF :1;
        unsigned RBIE :1;
        unsigned INTE :1;
        unsigned T0IE :1;
        unsigned PEIE :1;
        unsigned GIE :1;
    };
    struct {
        unsigned :2;
        unsigned TMR0IF :1;
        unsigned :2;
        unsigned TMR0IE :1;
    };
} INTCONbits_t;
extern volatile INTCONbits_t INTCONbits __attribute__((address(0x00B)));
# 538 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char PIR1 __attribute__((address(0x00C)));

__asm("PIR1 equ 0Ch");


typedef union {
    struct {
        unsigned TMR1IF :1;
        unsigned TMR2IF :1;
        unsigned CCP1IF :1;
        unsigned SSPIF :1;
        unsigned TXIF :1;
        unsigned RCIF :1;
        unsigned ADIF :1;
    };
} PIR1bits_t;
extern volatile PIR1bits_t PIR1bits __attribute__((address(0x00C)));
# 594 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char PIR2 __attribute__((address(0x00D)));

__asm("PIR2 equ 0Dh");


typedef union {
    struct {
        unsigned CCP2IF :1;
        unsigned :1;
        unsigned ULPWUIF :1;
        unsigned BCLIF :1;
        unsigned EEIF :1;
        unsigned C1IF :1;
        unsigned C2IF :1;
        unsigned OSFIF :1;
    };
} PIR2bits_t;
extern volatile PIR2bits_t PIR2bits __attribute__((address(0x00D)));
# 651 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned short TMR1 __attribute__((address(0x00E)));

__asm("TMR1 equ 0Eh");




extern volatile unsigned char TMR1L __attribute__((address(0x00E)));

__asm("TMR1L equ 0Eh");




extern volatile unsigned char TMR1H __attribute__((address(0x00F)));

__asm("TMR1H equ 0Fh");




extern volatile unsigned char T1CON __attribute__((address(0x010)));

__asm("T1CON equ 010h");


typedef union {
    struct {
        unsigned TMR1ON :1;
        unsigned TMR1CS :1;
        unsigned nT1SYNC :1;
        unsigned T1OSCEN :1;
        unsigned T1CKPS :2;
        unsigned TMR1GE :1;
        unsigned T1GINV :1;
    };
    struct {
        unsigned :2;
        unsigned T1INSYNC :1;
        unsigned :1;
        unsigned T1CKPS0 :1;
        unsigned T1CKPS1 :1;
        unsigned :1;
        unsigned T1GIV :1;
    };
    struct {
        unsigned :2;
        unsigned T1SYNC :1;
    };
} T1CONbits_t;
extern volatile T1CONbits_t T1CONbits __attribute__((address(0x010)));
# 766 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char TMR2 __attribute__((address(0x011)));

__asm("TMR2 equ 011h");




extern volatile unsigned char T2CON __attribute__((address(0x012)));

__asm("T2CON equ 012h");


typedef union {
    struct {
        unsigned T2CKPS :2;
        unsigned TMR2ON :1;
        unsigned TOUTPS :4;
    };
    struct {
        unsigned T2CKPS0 :1;
        unsigned T2CKPS1 :1;
        unsigned :1;
        unsigned TOUTPS0 :1;
        unsigned TOUTPS1 :1;
        unsigned TOUTPS2 :1;
        unsigned TOUTPS3 :1;
    };
} T2CONbits_t;
extern volatile T2CONbits_t T2CONbits __attribute__((address(0x012)));
# 844 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char SSPBUF __attribute__((address(0x013)));

__asm("SSPBUF equ 013h");




extern volatile unsigned char SSPCON __attribute__((address(0x014)));

__asm("SSPCON equ 014h");


typedef union {
    struct {
        unsigned SSPM :4;
        unsigned CKP :1;
        unsigned SSPEN :1;
        unsigned SSPOV :1;
        unsigned WCOL :1;
    };
    struct {
        unsigned SSPM0 :1;
        unsigned SSPM1 :1;
        unsigned SSPM2 :1;
        unsigned SSPM3 :1;
    };
} SSPCONbits_t;
extern volatile SSPCONbits_t SSPCONbits __attribute__((address(0x014)));
# 921 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned short CCPR1 __attribute__((address(0x015)));

__asm("CCPR1 equ 015h");




extern volatile unsigned char CCPR1L __attribute__((address(0x015)));

__asm("CCPR1L equ 015h");




extern volatile unsigned char CCPR1H __attribute__((address(0x016)));

__asm("CCPR1H equ 016h");




extern volatile unsigned char CCP1CON __attribute__((address(0x017)));

__asm("CCP1CON equ 017h");


typedef union {
    struct {
        unsigned CCP1M :4;
        unsigned DC1B :2;
        unsigned P1M :2;
    };
    struct {
        unsigned CCP1M0 :1;
        unsigned CCP1M1 :1;
        unsigned CCP1M2 :1;
        unsigned CCP1M3 :1;
        unsigned DC1B0 :1;
        unsigned DC1B1 :1;
        unsigned P1M0 :1;
        unsigned P1M1 :1;
    };
    struct {
        unsigned :4;
        unsigned CCP1Y :1;
        unsigned CCP1X :1;
    };
} CCP1CONbits_t;
extern volatile CCP1CONbits_t CCP1CONbits __attribute__((address(0x017)));
# 1039 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char RCSTA __attribute__((address(0x018)));

__asm("RCSTA equ 018h");


typedef union {
    struct {
        unsigned RX9D :1;
        unsigned OERR :1;
        unsigned FERR :1;
        unsigned ADDEN :1;
        unsigned CREN :1;
        unsigned SREN :1;
        unsigned RX9 :1;
        unsigned SPEN :1;
    };
    struct {
        unsigned RCD8 :1;
        unsigned :5;
        unsigned RC9 :1;
    };
    struct {
        unsigned :6;
        unsigned nRC8 :1;
    };
    struct {
        unsigned :6;
        unsigned RC8_9 :1;
    };
} RCSTAbits_t;
extern volatile RCSTAbits_t RCSTAbits __attribute__((address(0x018)));
# 1134 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char TXREG __attribute__((address(0x019)));

__asm("TXREG equ 019h");




extern volatile unsigned char RCREG __attribute__((address(0x01A)));

__asm("RCREG equ 01Ah");




extern volatile unsigned short CCPR2 __attribute__((address(0x01B)));

__asm("CCPR2 equ 01Bh");




extern volatile unsigned char CCPR2L __attribute__((address(0x01B)));

__asm("CCPR2L equ 01Bh");




extern volatile unsigned char CCPR2H __attribute__((address(0x01C)));

__asm("CCPR2H equ 01Ch");




extern volatile unsigned char CCP2CON __attribute__((address(0x01D)));

__asm("CCP2CON equ 01Dh");


typedef union {
    struct {
        unsigned CCP2M :4;
        unsigned DC2B0 :1;
        unsigned DC2B1 :1;
    };
    struct {
        unsigned CCP2M0 :1;
        unsigned CCP2M1 :1;
        unsigned CCP2M2 :1;
        unsigned CCP2M3 :1;
        unsigned CCP2Y :1;
        unsigned CCP2X :1;
    };
} CCP2CONbits_t;
extern volatile CCP2CONbits_t CCP2CONbits __attribute__((address(0x01D)));
# 1239 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char ADRESH __attribute__((address(0x01E)));

__asm("ADRESH equ 01Eh");




extern volatile unsigned char ADCON0 __attribute__((address(0x01F)));

__asm("ADCON0 equ 01Fh");


typedef union {
    struct {
        unsigned ADON :1;
        unsigned GO_nDONE :1;
        unsigned CHS :4;
        unsigned ADCS :2;
    };
    struct {
        unsigned :1;
        unsigned GO :1;
        unsigned CHS0 :1;
        unsigned CHS1 :1;
        unsigned CHS2 :1;
        unsigned CHS3 :1;
        unsigned ADCS0 :1;
        unsigned ADCS1 :1;
    };
    struct {
        unsigned :1;
        unsigned nDONE :1;
    };
    struct {
        unsigned :1;
        unsigned GO_DONE :1;
    };
} ADCON0bits_t;
extern volatile ADCON0bits_t ADCON0bits __attribute__((address(0x01F)));
# 1347 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char OPTION_REG __attribute__((address(0x081)));

__asm("OPTION_REG equ 081h");


typedef union {
    struct {
        unsigned PS :3;
        unsigned PSA :1;
        unsigned T0SE :1;
        unsigned T0CS :1;
        unsigned INTEDG :1;
        unsigned nRBPU :1;
    };
    struct {
        unsigned PS0 :1;
        unsigned PS1 :1;
        unsigned PS2 :1;
    };
} OPTION_REGbits_t;
extern volatile OPTION_REGbits_t OPTION_REGbits __attribute__((address(0x081)));
# 1417 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char TRISA __attribute__((address(0x085)));

__asm("TRISA equ 085h");


typedef union {
    struct {
        unsigned TRISA0 :1;
        unsigned TRISA1 :1;
        unsigned TRISA2 :1;
        unsigned TRISA3 :1;
        unsigned TRISA4 :1;
        unsigned TRISA5 :1;
        unsigned TRISA6 :1;
        unsigned TRISA7 :1;
    };
} TRISAbits_t;
extern volatile TRISAbits_t TRISAbits __attribute__((address(0x085)));
# 1479 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char TRISB __attribute__((address(0x086)));

__asm("TRISB equ 086h");


typedef union {
    struct {
        unsigned TRISB0 :1;
        unsigned TRISB1 :1;
        unsigned TRISB2 :1;
        unsigned TRISB3 :1;
        unsigned TRISB4 :1;
        unsigned TRISB5 :1;
        unsigned TRISB6 :1;
        unsigned TRISB7 :1;
    };
} TRISBbits_t;
extern volatile TRISBbits_t TRISBbits __attribute__((address(0x086)));
# 1541 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char TRISC __attribute__((address(0x087)));

__asm("TRISC equ 087h");


typedef union {
    struct {
        unsigned TRISC0 :1;
        unsigned TRISC1 :1;
        unsigned TRISC2 :1;
        unsigned TRISC3 :1;
        unsigned TRISC4 :1;
        unsigned TRISC5 :1;
        unsigned TRISC6 :1;
        unsigned TRISC7 :1;
    };
} TRISCbits_t;
extern volatile TRISCbits_t TRISCbits __attribute__((address(0x087)));
# 1603 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char TRISD __attribute__((address(0x088)));

__asm("TRISD equ 088h");


typedef union {
    struct {
        unsigned TRISD0 :1;
        unsigned TRISD1 :1;
        unsigned TRISD2 :1;
        unsigned TRISD3 :1;
        unsigned TRISD4 :1;
        unsigned TRISD5 :1;
        unsigned TRISD6 :1;
        unsigned TRISD7 :1;
    };
} TRISDbits_t;
extern volatile TRISDbits_t TRISDbits __attribute__((address(0x088)));
# 1665 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char TRISE __attribute__((address(0x089)));

__asm("TRISE equ 089h");


typedef union {
    struct {
        unsigned TRISE0 :1;
        unsigned TRISE1 :1;
        unsigned TRISE2 :1;
        unsigned TRISE3 :1;
    };
} TRISEbits_t;
extern volatile TRISEbits_t TRISEbits __attribute__((address(0x089)));
# 1703 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char PIE1 __attribute__((address(0x08C)));

__asm("PIE1 equ 08Ch");


typedef union {
    struct {
        unsigned TMR1IE :1;
        unsigned TMR2IE :1;
        unsigned CCP1IE :1;
        unsigned SSPIE :1;
        unsigned TXIE :1;
        unsigned RCIE :1;
        unsigned ADIE :1;
    };
} PIE1bits_t;
extern volatile PIE1bits_t PIE1bits __attribute__((address(0x08C)));
# 1759 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char PIE2 __attribute__((address(0x08D)));

__asm("PIE2 equ 08Dh");


typedef union {
    struct {
        unsigned CCP2IE :1;
        unsigned :1;
        unsigned ULPWUIE :1;
        unsigned BCLIE :1;
        unsigned EEIE :1;
        unsigned C1IE :1;
        unsigned C2IE :1;
        unsigned OSFIE :1;
    };
} PIE2bits_t;
extern volatile PIE2bits_t PIE2bits __attribute__((address(0x08D)));
# 1816 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char PCON __attribute__((address(0x08E)));

__asm("PCON equ 08Eh");


typedef union {
    struct {
        unsigned nBOR :1;
        unsigned nPOR :1;
        unsigned :2;
        unsigned SBOREN :1;
        unsigned ULPWUE :1;
    };
    struct {
        unsigned nBO :1;
    };
} PCONbits_t;
extern volatile PCONbits_t PCONbits __attribute__((address(0x08E)));
# 1863 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char OSCCON __attribute__((address(0x08F)));

__asm("OSCCON equ 08Fh");


typedef union {
    struct {
        unsigned SCS :1;
        unsigned LTS :1;
        unsigned HTS :1;
        unsigned OSTS :1;
        unsigned IRCF :3;
    };
    struct {
        unsigned :4;
        unsigned IRCF0 :1;
        unsigned IRCF1 :1;
        unsigned IRCF2 :1;
    };
} OSCCONbits_t;
extern volatile OSCCONbits_t OSCCONbits __attribute__((address(0x08F)));
# 1928 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char OSCTUNE __attribute__((address(0x090)));

__asm("OSCTUNE equ 090h");


typedef union {
    struct {
        unsigned TUN :5;
    };
    struct {
        unsigned TUN0 :1;
        unsigned TUN1 :1;
        unsigned TUN2 :1;
        unsigned TUN3 :1;
        unsigned TUN4 :1;
    };
} OSCTUNEbits_t;
extern volatile OSCTUNEbits_t OSCTUNEbits __attribute__((address(0x090)));
# 1980 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char SSPCON2 __attribute__((address(0x091)));

__asm("SSPCON2 equ 091h");


typedef union {
    struct {
        unsigned SEN :1;
        unsigned RSEN :1;
        unsigned PEN :1;
        unsigned RCEN :1;
        unsigned ACKEN :1;
        unsigned ACKDT :1;
        unsigned ACKSTAT :1;
        unsigned GCEN :1;
    };
} SSPCON2bits_t;
extern volatile SSPCON2bits_t SSPCON2bits __attribute__((address(0x091)));
# 2042 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char PR2 __attribute__((address(0x092)));

__asm("PR2 equ 092h");




extern volatile unsigned char SSPADD __attribute__((address(0x093)));

__asm("SSPADD equ 093h");




extern volatile unsigned char SSPMSK __attribute__((address(0x093)));

__asm("SSPMSK equ 093h");


extern volatile unsigned char MSK __attribute__((address(0x093)));

__asm("MSK equ 093h");


typedef union {
    struct {
        unsigned MSK0 :1;
        unsigned MSK1 :1;
        unsigned MSK2 :1;
        unsigned MSK3 :1;
        unsigned MSK4 :1;
        unsigned MSK5 :1;
        unsigned MSK6 :1;
        unsigned MSK7 :1;
    };
} SSPMSKbits_t;
extern volatile SSPMSKbits_t SSPMSKbits __attribute__((address(0x093)));
# 2121 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
typedef union {
    struct {
        unsigned MSK0 :1;
        unsigned MSK1 :1;
        unsigned MSK2 :1;
        unsigned MSK3 :1;
        unsigned MSK4 :1;
        unsigned MSK5 :1;
        unsigned MSK6 :1;
        unsigned MSK7 :1;
    };
} MSKbits_t;
extern volatile MSKbits_t MSKbits __attribute__((address(0x093)));
# 2178 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char SSPSTAT __attribute__((address(0x094)));

__asm("SSPSTAT equ 094h");


typedef union {
    struct {
        unsigned BF :1;
        unsigned UA :1;
        unsigned R_nW :1;
        unsigned S :1;
        unsigned P :1;
        unsigned D_nA :1;
        unsigned CKE :1;
        unsigned SMP :1;
    };
    struct {
        unsigned :2;
        unsigned R :1;
        unsigned :2;
        unsigned D :1;
    };
    struct {
        unsigned :2;
        unsigned I2C_READ :1;
        unsigned I2C_START :1;
        unsigned I2C_STOP :1;
        unsigned I2C_DATA :1;
    };
    struct {
        unsigned :2;
        unsigned nW :1;
        unsigned :2;
        unsigned nA :1;
    };
    struct {
        unsigned :2;
        unsigned nWRITE :1;
        unsigned :2;
        unsigned nADDRESS :1;
    };
    struct {
        unsigned :2;
        unsigned R_W :1;
        unsigned :2;
        unsigned D_A :1;
    };
    struct {
        unsigned :2;
        unsigned READ_WRITE :1;
        unsigned :2;
        unsigned DATA_ADDRESS :1;
    };
} SSPSTATbits_t;
extern volatile SSPSTATbits_t SSPSTATbits __attribute__((address(0x094)));
# 2347 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char WPUB __attribute__((address(0x095)));

__asm("WPUB equ 095h");


typedef union {
    struct {
        unsigned WPUB :8;
    };
    struct {
        unsigned WPUB0 :1;
        unsigned WPUB1 :1;
        unsigned WPUB2 :1;
        unsigned WPUB3 :1;
        unsigned WPUB4 :1;
        unsigned WPUB5 :1;
        unsigned WPUB6 :1;
        unsigned WPUB7 :1;
    };
} WPUBbits_t;
extern volatile WPUBbits_t WPUBbits __attribute__((address(0x095)));
# 2417 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char IOCB __attribute__((address(0x096)));

__asm("IOCB equ 096h");


typedef union {
    struct {
        unsigned IOCB :8;
    };
    struct {
        unsigned IOCB0 :1;
        unsigned IOCB1 :1;
        unsigned IOCB2 :1;
        unsigned IOCB3 :1;
        unsigned IOCB4 :1;
        unsigned IOCB5 :1;
        unsigned IOCB6 :1;
        unsigned IOCB7 :1;
    };
} IOCBbits_t;
extern volatile IOCBbits_t IOCBbits __attribute__((address(0x096)));
# 2487 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char VRCON __attribute__((address(0x097)));

__asm("VRCON equ 097h");


typedef union {
    struct {
        unsigned VR :4;
        unsigned VRSS :1;
        unsigned VRR :1;
        unsigned VROE :1;
        unsigned VREN :1;
    };
    struct {
        unsigned VR0 :1;
        unsigned VR1 :1;
        unsigned VR2 :1;
        unsigned VR3 :1;
    };
} VRCONbits_t;
extern volatile VRCONbits_t VRCONbits __attribute__((address(0x097)));
# 2557 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char TXSTA __attribute__((address(0x098)));

__asm("TXSTA equ 098h");


typedef union {
    struct {
        unsigned TX9D :1;
        unsigned TRMT :1;
        unsigned BRGH :1;
        unsigned SENDB :1;
        unsigned SYNC :1;
        unsigned TXEN :1;
        unsigned TX9 :1;
        unsigned CSRC :1;
    };
    struct {
        unsigned TXD8 :1;
        unsigned :5;
        unsigned nTX8 :1;
    };
    struct {
        unsigned :6;
        unsigned TX8_9 :1;
    };
} TXSTAbits_t;
extern volatile TXSTAbits_t TXSTAbits __attribute__((address(0x098)));
# 2643 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char SPBRG __attribute__((address(0x099)));

__asm("SPBRG equ 099h");


typedef union {
    struct {
        unsigned BRG0 :1;
        unsigned BRG1 :1;
        unsigned BRG2 :1;
        unsigned BRG3 :1;
        unsigned BRG4 :1;
        unsigned BRG5 :1;
        unsigned BRG6 :1;
        unsigned BRG7 :1;
    };
} SPBRGbits_t;
extern volatile SPBRGbits_t SPBRGbits __attribute__((address(0x099)));
# 2705 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char SPBRGH __attribute__((address(0x09A)));

__asm("SPBRGH equ 09Ah");


typedef union {
    struct {
        unsigned SPBRGH :8;
    };
    struct {
        unsigned BRG8 :1;
        unsigned BRG9 :1;
        unsigned BRG10 :1;
        unsigned BRG11 :1;
        unsigned BRG12 :1;
        unsigned BRG13 :1;
        unsigned BRG14 :1;
        unsigned BRG15 :1;
    };
} SPBRGHbits_t;
extern volatile SPBRGHbits_t SPBRGHbits __attribute__((address(0x09A)));
# 2775 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char PWM1CON __attribute__((address(0x09B)));

__asm("PWM1CON equ 09Bh");


typedef union {
    struct {
        unsigned PDC :7;
        unsigned PRSEN :1;
    };
    struct {
        unsigned PDC0 :1;
        unsigned PDC1 :1;
        unsigned PDC2 :1;
        unsigned PDC3 :1;
        unsigned PDC4 :1;
        unsigned PDC5 :1;
        unsigned PDC6 :1;
    };
} PWM1CONbits_t;
extern volatile PWM1CONbits_t PWM1CONbits __attribute__((address(0x09B)));
# 2845 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char ECCPAS __attribute__((address(0x09C)));

__asm("ECCPAS equ 09Ch");


typedef union {
    struct {
        unsigned PSSBD :2;
        unsigned PSSAC :2;
        unsigned ECCPAS :3;
        unsigned ECCPASE :1;
    };
    struct {
        unsigned PSSBD0 :1;
        unsigned PSSBD1 :1;
        unsigned PSSAC0 :1;
        unsigned PSSAC1 :1;
        unsigned ECCPAS0 :1;
        unsigned ECCPAS1 :1;
        unsigned ECCPAS2 :1;
    };
} ECCPASbits_t;
extern volatile ECCPASbits_t ECCPASbits __attribute__((address(0x09C)));
# 2927 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char PSTRCON __attribute__((address(0x09D)));

__asm("PSTRCON equ 09Dh");


typedef union {
    struct {
        unsigned STRA :1;
        unsigned STRB :1;
        unsigned STRC :1;
        unsigned STRD :1;
        unsigned STRSYNC :1;
    };
} PSTRCONbits_t;
extern volatile PSTRCONbits_t PSTRCONbits __attribute__((address(0x09D)));
# 2971 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char ADRESL __attribute__((address(0x09E)));

__asm("ADRESL equ 09Eh");




extern volatile unsigned char ADCON1 __attribute__((address(0x09F)));

__asm("ADCON1 equ 09Fh");


typedef union {
    struct {
        unsigned :4;
        unsigned VCFG0 :1;
        unsigned VCFG1 :1;
        unsigned :1;
        unsigned ADFM :1;
    };
} ADCON1bits_t;
extern volatile ADCON1bits_t ADCON1bits __attribute__((address(0x09F)));
# 3012 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char WDTCON __attribute__((address(0x105)));

__asm("WDTCON equ 0105h");


typedef union {
    struct {
        unsigned SWDTEN :1;
        unsigned WDTPS :4;
    };
    struct {
        unsigned :1;
        unsigned WDTPS0 :1;
        unsigned WDTPS1 :1;
        unsigned WDTPS2 :1;
        unsigned WDTPS3 :1;
    };
} WDTCONbits_t;
extern volatile WDTCONbits_t WDTCONbits __attribute__((address(0x105)));
# 3065 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char CM1CON0 __attribute__((address(0x107)));

__asm("CM1CON0 equ 0107h");


typedef union {
    struct {
        unsigned C1CH :2;
        unsigned C1R :1;
        unsigned :1;
        unsigned C1POL :1;
        unsigned C1OE :1;
        unsigned C1OUT :1;
        unsigned C1ON :1;
    };
    struct {
        unsigned C1CH0 :1;
        unsigned C1CH1 :1;
    };
} CM1CON0bits_t;
extern volatile CM1CON0bits_t CM1CON0bits __attribute__((address(0x107)));
# 3130 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char CM2CON0 __attribute__((address(0x108)));

__asm("CM2CON0 equ 0108h");


typedef union {
    struct {
        unsigned C2CH :2;
        unsigned C2R :1;
        unsigned :1;
        unsigned C2POL :1;
        unsigned C2OE :1;
        unsigned C2OUT :1;
        unsigned C2ON :1;
    };
    struct {
        unsigned C2CH0 :1;
        unsigned C2CH1 :1;
    };
} CM2CON0bits_t;
extern volatile CM2CON0bits_t CM2CON0bits __attribute__((address(0x108)));
# 3195 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char CM2CON1 __attribute__((address(0x109)));

__asm("CM2CON1 equ 0109h");


typedef union {
    struct {
        unsigned C2SYNC :1;
        unsigned T1GSS :1;
        unsigned :2;
        unsigned C2RSEL :1;
        unsigned C1RSEL :1;
        unsigned MC2OUT :1;
        unsigned MC1OUT :1;
    };
} CM2CON1bits_t;
extern volatile CM2CON1bits_t CM2CON1bits __attribute__((address(0x109)));
# 3246 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char EEDATA __attribute__((address(0x10C)));

__asm("EEDATA equ 010Ch");


extern volatile unsigned char EEDAT __attribute__((address(0x10C)));

__asm("EEDAT equ 010Ch");




extern volatile unsigned char EEADR __attribute__((address(0x10D)));

__asm("EEADR equ 010Dh");




extern volatile unsigned char EEDATH __attribute__((address(0x10E)));

__asm("EEDATH equ 010Eh");




extern volatile unsigned char EEADRH __attribute__((address(0x10F)));

__asm("EEADRH equ 010Fh");




extern volatile unsigned char SRCON __attribute__((address(0x185)));

__asm("SRCON equ 0185h");


typedef union {
    struct {
        unsigned FVREN :1;
        unsigned :1;
        unsigned PULSR :1;
        unsigned PULSS :1;
        unsigned C2REN :1;
        unsigned C1SEN :1;
        unsigned SR0 :1;
        unsigned SR1 :1;
    };
} SRCONbits_t;
extern volatile SRCONbits_t SRCONbits __attribute__((address(0x185)));
# 3336 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char BAUDCTL __attribute__((address(0x187)));

__asm("BAUDCTL equ 0187h");


typedef union {
    struct {
        unsigned ABDEN :1;
        unsigned WUE :1;
        unsigned :1;
        unsigned BRG16 :1;
        unsigned SCKP :1;
        unsigned :1;
        unsigned RCIDL :1;
        unsigned ABDOVF :1;
    };
} BAUDCTLbits_t;
extern volatile BAUDCTLbits_t BAUDCTLbits __attribute__((address(0x187)));
# 3388 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char ANSEL __attribute__((address(0x188)));

__asm("ANSEL equ 0188h");


typedef union {
    struct {
        unsigned ANS0 :1;
        unsigned ANS1 :1;
        unsigned ANS2 :1;
        unsigned ANS3 :1;
        unsigned ANS4 :1;
        unsigned ANS5 :1;
        unsigned ANS6 :1;
        unsigned ANS7 :1;
    };
} ANSELbits_t;
extern volatile ANSELbits_t ANSELbits __attribute__((address(0x188)));
# 3450 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char ANSELH __attribute__((address(0x189)));

__asm("ANSELH equ 0189h");


typedef union {
    struct {
        unsigned ANS8 :1;
        unsigned ANS9 :1;
        unsigned ANS10 :1;
        unsigned ANS11 :1;
        unsigned ANS12 :1;
        unsigned ANS13 :1;
    };
} ANSELHbits_t;
extern volatile ANSELHbits_t ANSELHbits __attribute__((address(0x189)));
# 3500 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char EECON1 __attribute__((address(0x18C)));

__asm("EECON1 equ 018Ch");


typedef union {
    struct {
        unsigned RD :1;
        unsigned WR :1;
        unsigned WREN :1;
        unsigned WRERR :1;
        unsigned :3;
        unsigned EEPGD :1;
    };
} EECON1bits_t;
extern volatile EECON1bits_t EECON1bits __attribute__((address(0x18C)));
# 3545 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile unsigned char EECON2 __attribute__((address(0x18D)));

__asm("EECON2 equ 018Dh");
# 3562 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\proc\\pic16f887.h" 3
extern volatile __bit ABDEN __attribute__((address(0xC38)));


extern volatile __bit ABDOVF __attribute__((address(0xC3F)));


extern volatile __bit ACKDT __attribute__((address(0x48D)));


extern volatile __bit ACKEN __attribute__((address(0x48C)));


extern volatile __bit ACKSTAT __attribute__((address(0x48E)));


extern volatile __bit ADCS0 __attribute__((address(0xFE)));


extern volatile __bit ADCS1 __attribute__((address(0xFF)));


extern volatile __bit ADDEN __attribute__((address(0xC3)));


extern volatile __bit ADFM __attribute__((address(0x4FF)));


extern volatile __bit ADIE __attribute__((address(0x466)));


extern volatile __bit ADIF __attribute__((address(0x66)));


extern volatile __bit ADON __attribute__((address(0xF8)));


extern volatile __bit ANS0 __attribute__((address(0xC40)));


extern volatile __bit ANS1 __attribute__((address(0xC41)));


extern volatile __bit ANS10 __attribute__((address(0xC4A)));


extern volatile __bit ANS11 __attribute__((address(0xC4B)));


extern volatile __bit ANS12 __attribute__((address(0xC4C)));


extern volatile __bit ANS13 __attribute__((address(0xC4D)));


extern volatile __bit ANS2 __attribute__((address(0xC42)));


extern volatile __bit ANS3 __attribute__((address(0xC43)));


extern volatile __bit ANS4 __attribute__((address(0xC44)));


extern volatile __bit ANS5 __attribute__((address(0xC45)));


extern volatile __bit ANS6 __attribute__((address(0xC46)));


extern volatile __bit ANS7 __attribute__((address(0xC47)));


extern volatile __bit ANS8 __attribute__((address(0xC48)));


extern volatile __bit ANS9 __attribute__((address(0xC49)));


extern volatile __bit BCLIE __attribute__((address(0x46B)));


extern volatile __bit BCLIF __attribute__((address(0x6B)));


extern volatile __bit BF __attribute__((address(0x4A0)));


extern volatile __bit BRG0 __attribute__((address(0x4C8)));


extern volatile __bit BRG1 __attribute__((address(0x4C9)));


extern volatile __bit BRG10 __attribute__((address(0x4D2)));


extern volatile __bit BRG11 __attribute__((address(0x4D3)));


extern volatile __bit BRG12 __attribute__((address(0x4D4)));


extern volatile __bit BRG13 __attribute__((address(0x4D5)));


extern volatile __bit BRG14 __attribute__((address(0x4D6)));


extern volatile __bit BRG15 __attribute__((address(0x4D7)));


extern volatile __bit BRG16 __attribute__((address(0xC3B)));


extern volatile __bit BRG2 __attribute__((address(0x4CA)));


extern volatile __bit BRG3 __attribute__((address(0x4CB)));


extern volatile __bit BRG4 __attribute__((address(0x4CC)));


extern volatile __bit BRG5 __attribute__((address(0x4CD)));


extern volatile __bit BRG6 __attribute__((address(0x4CE)));


extern volatile __bit BRG7 __attribute__((address(0x4CF)));


extern volatile __bit BRG8 __attribute__((address(0x4D0)));


extern volatile __bit BRG9 __attribute__((address(0x4D1)));


extern volatile __bit BRGH __attribute__((address(0x4C2)));


extern volatile __bit C1CH0 __attribute__((address(0x838)));


extern volatile __bit C1CH1 __attribute__((address(0x839)));


extern volatile __bit C1IE __attribute__((address(0x46D)));


extern volatile __bit C1IF __attribute__((address(0x6D)));


extern volatile __bit C1OE __attribute__((address(0x83D)));


extern volatile __bit C1ON __attribute__((address(0x83F)));


extern volatile __bit C1OUT __attribute__((address(0x83E)));


extern volatile __bit C1POL __attribute__((address(0x83C)));


extern volatile __bit C1R __attribute__((address(0x83A)));


extern volatile __bit C1RSEL __attribute__((address(0x84D)));


extern volatile __bit C1SEN __attribute__((address(0xC2D)));


extern volatile __bit C2CH0 __attribute__((address(0x840)));


extern volatile __bit C2CH1 __attribute__((address(0x841)));


extern volatile __bit C2IE __attribute__((address(0x46E)));


extern volatile __bit C2IF __attribute__((address(0x6E)));


extern volatile __bit C2OE __attribute__((address(0x845)));


extern volatile __bit C2ON __attribute__((address(0x847)));


extern volatile __bit C2OUT __attribute__((address(0x846)));


extern volatile __bit C2POL __attribute__((address(0x844)));


extern volatile __bit C2R __attribute__((address(0x842)));


extern volatile __bit C2REN __attribute__((address(0xC2C)));


extern volatile __bit C2RSEL __attribute__((address(0x84C)));


extern volatile __bit C2SYNC __attribute__((address(0x848)));


extern volatile __bit CARRY __attribute__((address(0x18)));


extern volatile __bit CCP1IE __attribute__((address(0x462)));


extern volatile __bit CCP1IF __attribute__((address(0x62)));


extern volatile __bit CCP1M0 __attribute__((address(0xB8)));


extern volatile __bit CCP1M1 __attribute__((address(0xB9)));


extern volatile __bit CCP1M2 __attribute__((address(0xBA)));


extern volatile __bit CCP1M3 __attribute__((address(0xBB)));


extern volatile __bit CCP1X __attribute__((address(0xBD)));


extern volatile __bit CCP1Y __attribute__((address(0xBC)));


extern volatile __bit CCP2IE __attribute__((address(0x468)));


extern volatile __bit CCP2IF __attribute__((address(0x68)));


extern volatile __bit CCP2M0 __attribute__((address(0xE8)));


extern volatile __bit CCP2M1 __attribute__((address(0xE9)));


extern volatile __bit CCP2M2 __attribute__((address(0xEA)));


extern volatile __bit CCP2M3 __attribute__((address(0xEB)));


extern volatile __bit CCP2X __attribute__((address(0xED)));


extern volatile __bit CCP2Y __attribute__((address(0xEC)));


extern volatile __bit CHS0 __attribute__((address(0xFA)));


extern volatile __bit CHS1 __attribute__((address(0xFB)));


extern volatile __bit CHS2 __attribute__((address(0xFC)));


extern volatile __bit CHS3 __attribute__((address(0xFD)));


extern volatile __bit CKE __attribute__((address(0x4A6)));


extern volatile __bit CKP __attribute__((address(0xA4)));


extern volatile __bit CREN __attribute__((address(0xC4)));


extern volatile __bit CSRC __attribute__((address(0x4C7)));


extern volatile __bit DATA_ADDRESS __attribute__((address(0x4A5)));


extern volatile __bit DC __attribute__((address(0x19)));


extern volatile __bit DC1B0 __attribute__((address(0xBC)));


extern volatile __bit DC1B1 __attribute__((address(0xBD)));


extern volatile __bit DC2B0 __attribute__((address(0xEC)));


extern volatile __bit DC2B1 __attribute__((address(0xED)));


extern volatile __bit D_A __attribute__((address(0x4A5)));


extern volatile __bit D_nA __attribute__((address(0x4A5)));


extern volatile __bit ECCPAS0 __attribute__((address(0x4E4)));


extern volatile __bit ECCPAS1 __attribute__((address(0x4E5)));


extern volatile __bit ECCPAS2 __attribute__((address(0x4E6)));


extern volatile __bit ECCPASE __attribute__((address(0x4E7)));


extern volatile __bit EEIE __attribute__((address(0x46C)));


extern volatile __bit EEIF __attribute__((address(0x6C)));


extern volatile __bit EEPGD __attribute__((address(0xC67)));


extern volatile __bit FERR __attribute__((address(0xC2)));


extern volatile __bit FVREN __attribute__((address(0xC28)));


extern volatile __bit GCEN __attribute__((address(0x48F)));


extern volatile __bit GIE __attribute__((address(0x5F)));


extern volatile __bit GO __attribute__((address(0xF9)));


extern volatile __bit GO_DONE __attribute__((address(0xF9)));


extern volatile __bit GO_nDONE __attribute__((address(0xF9)));


extern volatile __bit HTS __attribute__((address(0x47A)));


extern volatile __bit I2C_DATA __attribute__((address(0x4A5)));


extern volatile __bit I2C_READ __attribute__((address(0x4A2)));


extern volatile __bit I2C_START __attribute__((address(0x4A3)));


extern volatile __bit I2C_STOP __attribute__((address(0x4A4)));


extern volatile __bit INTE __attribute__((address(0x5C)));


extern volatile __bit INTEDG __attribute__((address(0x40E)));


extern volatile __bit INTF __attribute__((address(0x59)));


extern volatile __bit IOCB0 __attribute__((address(0x4B0)));


extern volatile __bit IOCB1 __attribute__((address(0x4B1)));


extern volatile __bit IOCB2 __attribute__((address(0x4B2)));


extern volatile __bit IOCB3 __attribute__((address(0x4B3)));


extern volatile __bit IOCB4 __attribute__((address(0x4B4)));


extern volatile __bit IOCB5 __attribute__((address(0x4B5)));


extern volatile __bit IOCB6 __attribute__((address(0x4B6)));


extern volatile __bit IOCB7 __attribute__((address(0x4B7)));


extern volatile __bit IRCF0 __attribute__((address(0x47C)));


extern volatile __bit IRCF1 __attribute__((address(0x47D)));


extern volatile __bit IRCF2 __attribute__((address(0x47E)));


extern volatile __bit IRP __attribute__((address(0x1F)));


extern volatile __bit LTS __attribute__((address(0x479)));


extern volatile __bit MC1OUT __attribute__((address(0x84F)));


extern volatile __bit MC2OUT __attribute__((address(0x84E)));


extern volatile __bit MSK0 __attribute__((address(0x498)));


extern volatile __bit MSK1 __attribute__((address(0x499)));


extern volatile __bit MSK2 __attribute__((address(0x49A)));


extern volatile __bit MSK3 __attribute__((address(0x49B)));


extern volatile __bit MSK4 __attribute__((address(0x49C)));


extern volatile __bit MSK5 __attribute__((address(0x49D)));


extern volatile __bit MSK6 __attribute__((address(0x49E)));


extern volatile __bit MSK7 __attribute__((address(0x49F)));


extern volatile __bit OERR __attribute__((address(0xC1)));


extern volatile __bit OSFIE __attribute__((address(0x46F)));


extern volatile __bit OSFIF __attribute__((address(0x6F)));


extern volatile __bit OSTS __attribute__((address(0x47B)));


extern volatile __bit P1M0 __attribute__((address(0xBE)));


extern volatile __bit P1M1 __attribute__((address(0xBF)));


extern volatile __bit PDC0 __attribute__((address(0x4D8)));


extern volatile __bit PDC1 __attribute__((address(0x4D9)));


extern volatile __bit PDC2 __attribute__((address(0x4DA)));


extern volatile __bit PDC3 __attribute__((address(0x4DB)));


extern volatile __bit PDC4 __attribute__((address(0x4DC)));


extern volatile __bit PDC5 __attribute__((address(0x4DD)));


extern volatile __bit PDC6 __attribute__((address(0x4DE)));


extern volatile __bit PEIE __attribute__((address(0x5E)));


extern volatile __bit PEN __attribute__((address(0x48A)));


extern volatile __bit PRSEN __attribute__((address(0x4DF)));


extern volatile __bit PS0 __attribute__((address(0x408)));


extern volatile __bit PS1 __attribute__((address(0x409)));


extern volatile __bit PS2 __attribute__((address(0x40A)));


extern volatile __bit PSA __attribute__((address(0x40B)));


extern volatile __bit PSSAC0 __attribute__((address(0x4E2)));


extern volatile __bit PSSAC1 __attribute__((address(0x4E3)));


extern volatile __bit PSSBD0 __attribute__((address(0x4E0)));


extern volatile __bit PSSBD1 __attribute__((address(0x4E1)));


extern volatile __bit PULSR __attribute__((address(0xC2A)));


extern volatile __bit PULSS __attribute__((address(0xC2B)));


extern volatile __bit RA0 __attribute__((address(0x28)));


extern volatile __bit RA1 __attribute__((address(0x29)));


extern volatile __bit RA2 __attribute__((address(0x2A)));


extern volatile __bit RA3 __attribute__((address(0x2B)));


extern volatile __bit RA4 __attribute__((address(0x2C)));


extern volatile __bit RA5 __attribute__((address(0x2D)));


extern volatile __bit RA6 __attribute__((address(0x2E)));


extern volatile __bit RA7 __attribute__((address(0x2F)));


extern volatile __bit RB0 __attribute__((address(0x30)));


extern volatile __bit RB1 __attribute__((address(0x31)));


extern volatile __bit RB2 __attribute__((address(0x32)));


extern volatile __bit RB3 __attribute__((address(0x33)));


extern volatile __bit RB4 __attribute__((address(0x34)));


extern volatile __bit RB5 __attribute__((address(0x35)));


extern volatile __bit RB6 __attribute__((address(0x36)));


extern volatile __bit RB7 __attribute__((address(0x37)));


extern volatile __bit RBIE __attribute__((address(0x5B)));


extern volatile __bit RBIF __attribute__((address(0x58)));


extern volatile __bit RC0 __attribute__((address(0x38)));


extern volatile __bit RC1 __attribute__((address(0x39)));


extern volatile __bit RC2 __attribute__((address(0x3A)));


extern volatile __bit RC3 __attribute__((address(0x3B)));


extern volatile __bit RC4 __attribute__((address(0x3C)));


extern volatile __bit RC5 __attribute__((address(0x3D)));


extern volatile __bit RC6 __attribute__((address(0x3E)));


extern volatile __bit RC7 __attribute__((address(0x3F)));


extern volatile __bit RC8_9 __attribute__((address(0xC6)));


extern volatile __bit RC9 __attribute__((address(0xC6)));


extern volatile __bit RCD8 __attribute__((address(0xC0)));


extern volatile __bit RCEN __attribute__((address(0x48B)));


extern volatile __bit RCIDL __attribute__((address(0xC3E)));


extern volatile __bit RCIE __attribute__((address(0x465)));


extern volatile __bit RCIF __attribute__((address(0x65)));


extern volatile __bit RD __attribute__((address(0xC60)));


extern volatile __bit RD0 __attribute__((address(0x40)));


extern volatile __bit RD1 __attribute__((address(0x41)));


extern volatile __bit RD2 __attribute__((address(0x42)));


extern volatile __bit RD3 __attribute__((address(0x43)));


extern volatile __bit RD4 __attribute__((address(0x44)));


extern volatile __bit RD5 __attribute__((address(0x45)));


extern volatile __bit RD6 __attribute__((address(0x46)));


extern volatile __bit RD7 __attribute__((address(0x47)));


extern volatile __bit RE0 __attribute__((address(0x48)));


extern volatile __bit RE1 __attribute__((address(0x49)));


extern volatile __bit RE2 __attribute__((address(0x4A)));


extern volatile __bit RE3 __attribute__((address(0x4B)));


extern volatile __bit READ_WRITE __attribute__((address(0x4A2)));


extern volatile __bit RP0 __attribute__((address(0x1D)));


extern volatile __bit RP1 __attribute__((address(0x1E)));


extern volatile __bit RSEN __attribute__((address(0x489)));


extern volatile __bit RX9 __attribute__((address(0xC6)));


extern volatile __bit RX9D __attribute__((address(0xC0)));


extern volatile __bit R_W __attribute__((address(0x4A2)));


extern volatile __bit R_nW __attribute__((address(0x4A2)));


extern volatile __bit SBOREN __attribute__((address(0x474)));


extern volatile __bit SCKP __attribute__((address(0xC3C)));


extern volatile __bit SCS __attribute__((address(0x478)));


extern volatile __bit SEN __attribute__((address(0x488)));


extern volatile __bit SENDB __attribute__((address(0x4C3)));


extern volatile __bit SMP __attribute__((address(0x4A7)));


extern volatile __bit SPEN __attribute__((address(0xC7)));


extern volatile __bit SR0 __attribute__((address(0xC2E)));


extern volatile __bit SR1 __attribute__((address(0xC2F)));


extern volatile __bit SREN __attribute__((address(0xC5)));


extern volatile __bit SSPEN __attribute__((address(0xA5)));


extern volatile __bit SSPIE __attribute__((address(0x463)));


extern volatile __bit SSPIF __attribute__((address(0x63)));


extern volatile __bit SSPM0 __attribute__((address(0xA0)));


extern volatile __bit SSPM1 __attribute__((address(0xA1)));


extern volatile __bit SSPM2 __attribute__((address(0xA2)));


extern volatile __bit SSPM3 __attribute__((address(0xA3)));


extern volatile __bit SSPOV __attribute__((address(0xA6)));


extern volatile __bit STRA __attribute__((address(0x4E8)));


extern volatile __bit STRB __attribute__((address(0x4E9)));


extern volatile __bit STRC __attribute__((address(0x4EA)));


extern volatile __bit STRD __attribute__((address(0x4EB)));


extern volatile __bit STRSYNC __attribute__((address(0x4EC)));


extern volatile __bit SWDTEN __attribute__((address(0x828)));


extern volatile __bit SYNC __attribute__((address(0x4C4)));


extern volatile __bit T0CS __attribute__((address(0x40D)));


extern volatile __bit T0IE __attribute__((address(0x5D)));


extern volatile __bit T0IF __attribute__((address(0x5A)));


extern volatile __bit T0SE __attribute__((address(0x40C)));


extern volatile __bit T1CKPS0 __attribute__((address(0x84)));


extern volatile __bit T1CKPS1 __attribute__((address(0x85)));


extern volatile __bit T1GINV __attribute__((address(0x87)));


extern volatile __bit T1GIV __attribute__((address(0x87)));


extern volatile __bit T1GSS __attribute__((address(0x849)));


extern volatile __bit T1INSYNC __attribute__((address(0x82)));


extern volatile __bit T1OSCEN __attribute__((address(0x83)));


extern volatile __bit T1SYNC __attribute__((address(0x82)));


extern volatile __bit T2CKPS0 __attribute__((address(0x90)));


extern volatile __bit T2CKPS1 __attribute__((address(0x91)));


extern volatile __bit TMR0IE __attribute__((address(0x5D)));


extern volatile __bit TMR0IF __attribute__((address(0x5A)));


extern volatile __bit TMR1CS __attribute__((address(0x81)));


extern volatile __bit TMR1GE __attribute__((address(0x86)));


extern volatile __bit TMR1IE __attribute__((address(0x460)));


extern volatile __bit TMR1IF __attribute__((address(0x60)));


extern volatile __bit TMR1ON __attribute__((address(0x80)));


extern volatile __bit TMR2IE __attribute__((address(0x461)));


extern volatile __bit TMR2IF __attribute__((address(0x61)));


extern volatile __bit TMR2ON __attribute__((address(0x92)));


extern volatile __bit TOUTPS0 __attribute__((address(0x93)));


extern volatile __bit TOUTPS1 __attribute__((address(0x94)));


extern volatile __bit TOUTPS2 __attribute__((address(0x95)));


extern volatile __bit TOUTPS3 __attribute__((address(0x96)));


extern volatile __bit TRISA0 __attribute__((address(0x428)));


extern volatile __bit TRISA1 __attribute__((address(0x429)));


extern volatile __bit TRISA2 __attribute__((address(0x42A)));


extern volatile __bit TRISA3 __attribute__((address(0x42B)));


extern volatile __bit TRISA4 __attribute__((address(0x42C)));


extern volatile __bit TRISA5 __attribute__((address(0x42D)));


extern volatile __bit TRISA6 __attribute__((address(0x42E)));


extern volatile __bit TRISA7 __attribute__((address(0x42F)));


extern volatile __bit TRISB0 __attribute__((address(0x430)));


extern volatile __bit TRISB1 __attribute__((address(0x431)));


extern volatile __bit TRISB2 __attribute__((address(0x432)));


extern volatile __bit TRISB3 __attribute__((address(0x433)));


extern volatile __bit TRISB4 __attribute__((address(0x434)));


extern volatile __bit TRISB5 __attribute__((address(0x435)));


extern volatile __bit TRISB6 __attribute__((address(0x436)));


extern volatile __bit TRISB7 __attribute__((address(0x437)));


extern volatile __bit TRISC0 __attribute__((address(0x438)));


extern volatile __bit TRISC1 __attribute__((address(0x439)));


extern volatile __bit TRISC2 __attribute__((address(0x43A)));


extern volatile __bit TRISC3 __attribute__((address(0x43B)));


extern volatile __bit TRISC4 __attribute__((address(0x43C)));


extern volatile __bit TRISC5 __attribute__((address(0x43D)));


extern volatile __bit TRISC6 __attribute__((address(0x43E)));


extern volatile __bit TRISC7 __attribute__((address(0x43F)));


extern volatile __bit TRISD0 __attribute__((address(0x440)));


extern volatile __bit TRISD1 __attribute__((address(0x441)));


extern volatile __bit TRISD2 __attribute__((address(0x442)));


extern volatile __bit TRISD3 __attribute__((address(0x443)));


extern volatile __bit TRISD4 __attribute__((address(0x444)));


extern volatile __bit TRISD5 __attribute__((address(0x445)));


extern volatile __bit TRISD6 __attribute__((address(0x446)));


extern volatile __bit TRISD7 __attribute__((address(0x447)));


extern volatile __bit TRISE0 __attribute__((address(0x448)));


extern volatile __bit TRISE1 __attribute__((address(0x449)));


extern volatile __bit TRISE2 __attribute__((address(0x44A)));


extern volatile __bit TRISE3 __attribute__((address(0x44B)));


extern volatile __bit TRMT __attribute__((address(0x4C1)));


extern volatile __bit TUN0 __attribute__((address(0x480)));


extern volatile __bit TUN1 __attribute__((address(0x481)));


extern volatile __bit TUN2 __attribute__((address(0x482)));


extern volatile __bit TUN3 __attribute__((address(0x483)));


extern volatile __bit TUN4 __attribute__((address(0x484)));


extern volatile __bit TX8_9 __attribute__((address(0x4C6)));


extern volatile __bit TX9 __attribute__((address(0x4C6)));


extern volatile __bit TX9D __attribute__((address(0x4C0)));


extern volatile __bit TXD8 __attribute__((address(0x4C0)));


extern volatile __bit TXEN __attribute__((address(0x4C5)));


extern volatile __bit TXIE __attribute__((address(0x464)));


extern volatile __bit TXIF __attribute__((address(0x64)));


extern volatile __bit UA __attribute__((address(0x4A1)));


extern volatile __bit ULPWUE __attribute__((address(0x475)));


extern volatile __bit ULPWUIE __attribute__((address(0x46A)));


extern volatile __bit ULPWUIF __attribute__((address(0x6A)));


extern volatile __bit VCFG0 __attribute__((address(0x4FC)));


extern volatile __bit VCFG1 __attribute__((address(0x4FD)));


extern volatile __bit VR0 __attribute__((address(0x4B8)));


extern volatile __bit VR1 __attribute__((address(0x4B9)));


extern volatile __bit VR2 __attribute__((address(0x4BA)));


extern volatile __bit VR3 __attribute__((address(0x4BB)));


extern volatile __bit VREN __attribute__((address(0x4BF)));


extern volatile __bit VROE __attribute__((address(0x4BE)));


extern volatile __bit VRR __attribute__((address(0x4BD)));


extern volatile __bit VRSS __attribute__((address(0x4BC)));


extern volatile __bit WCOL __attribute__((address(0xA7)));


extern volatile __bit WDTPS0 __attribute__((address(0x829)));


extern volatile __bit WDTPS1 __attribute__((address(0x82A)));


extern volatile __bit WDTPS2 __attribute__((address(0x82B)));


extern volatile __bit WDTPS3 __attribute__((address(0x82C)));


extern volatile __bit WPUB0 __attribute__((address(0x4A8)));


extern volatile __bit WPUB1 __attribute__((address(0x4A9)));


extern volatile __bit WPUB2 __attribute__((address(0x4AA)));


extern volatile __bit WPUB3 __attribute__((address(0x4AB)));


extern volatile __bit WPUB4 __attribute__((address(0x4AC)));


extern volatile __bit WPUB5 __attribute__((address(0x4AD)));


extern volatile __bit WPUB6 __attribute__((address(0x4AE)));


extern volatile __bit WPUB7 __attribute__((address(0x4AF)));


extern volatile __bit WR __attribute__((address(0xC61)));


extern volatile __bit WREN __attribute__((address(0xC62)));


extern volatile __bit WRERR __attribute__((address(0xC63)));


extern volatile __bit WUE __attribute__((address(0xC39)));


extern volatile __bit ZERO __attribute__((address(0x1A)));


extern volatile __bit nA __attribute__((address(0x4A5)));


extern volatile __bit nADDRESS __attribute__((address(0x4A5)));


extern volatile __bit nBO __attribute__((address(0x470)));


extern volatile __bit nBOR __attribute__((address(0x470)));


extern volatile __bit nDONE __attribute__((address(0xF9)));


extern volatile __bit nPD __attribute__((address(0x1B)));


extern volatile __bit nPOR __attribute__((address(0x471)));


extern volatile __bit nRBPU __attribute__((address(0x40F)));


extern volatile __bit nRC8 __attribute__((address(0xC6)));


extern volatile __bit nT1SYNC __attribute__((address(0x82)));


extern volatile __bit nTO __attribute__((address(0x1C)));


extern volatile __bit nTX8 __attribute__((address(0x4C6)));


extern volatile __bit nW __attribute__((address(0x4A2)));


extern volatile __bit nWRITE __attribute__((address(0x4A2)));
# 725 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\pic_chip_select.h" 2 3
# 14 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\pic.h" 2 3
# 76 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\pic.h" 3
__attribute__((__unsupported__("The " "FLASH_READ" " macro function is no longer supported. Please use the MPLAB X MCC."))) unsigned char __flash_read(unsigned short addr);

__attribute__((__unsupported__("The " "FLASH_WRITE" " macro function is no longer supported. Please use the MPLAB X MCC."))) void __flash_write(unsigned short addr, unsigned short data);

__attribute__((__unsupported__("The " "FLASH_ERASE" " macro function is no longer supported. Please use the MPLAB X MCC."))) void __flash_erase(unsigned short addr);



# 1 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\eeprom_routines.h" 1 3
# 114 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\eeprom_routines.h" 3
extern void eeprom_write(unsigned char addr, unsigned char value);
extern unsigned char eeprom_read(unsigned char addr);
# 84 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\pic.h" 2 3
# 118 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\pic.h" 3
extern __bank0 unsigned char __resetbits;
extern __bank0 __bit __powerdown;
extern __bank0 __bit __timeout;
# 29 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\xc.h" 2 3
# 31 "../../Sources/16F887/./../../Libraries/16F887/macros.h" 2
# 1 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdio.h" 1 3



# 1 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\__size_t.h" 1 3



typedef unsigned size_t;
# 5 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdio.h" 2 3
# 1 "E:/Microchip/MPLABX/v6.05/packs/Microchip/PIC16Fxxx_DFP/1.3.42/xc8\\pic\\include\\__null.h" 1 3
# 6 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdio.h" 2 3
# 43 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdio.h" 3
struct __prbuf
{
 char * ptr;
 void (* func)(char);
};
# 85 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdio.h" 3
# 1 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\conio.h" 1 3







# 1 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\errno.h" 1 3
# 29 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\errno.h" 3
extern int errno;
# 9 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\conio.h" 2 3



extern void init_uart(void);

extern char getch(void);
extern char getche(void);
extern void putch(char);
extern void ungetch(char);

extern __bit kbhit(void);



extern char * cgets(char *);
extern void cputs(const char *);
# 86 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdio.h" 2 3


extern int cprintf(char *, ...);
#pragma printf_check(cprintf)



extern int _doprnt(struct __prbuf *, const register char *, register va_list);
# 180 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdio.h" 3
#pragma printf_check(vprintf) const
#pragma printf_check(vsprintf) const

extern char * gets(char *);
extern int puts(const char *);
extern int scanf(const char *, ...) __attribute__((unsupported("scanf() is not supported by this compiler")));
extern int sscanf(const char *, const char *, ...) __attribute__((unsupported("sscanf() is not supported by this compiler")));
extern int vprintf(const char *, va_list) __attribute__((unsupported("vprintf() is not supported by this compiler")));
extern int vsprintf(char *, const char *, va_list) __attribute__((unsupported("vsprintf() is not supported by this compiler")));
extern int vscanf(const char *, va_list ap) __attribute__((unsupported("vscanf() is not supported by this compiler")));
extern int vsscanf(const char *, const char *, va_list) __attribute__((unsupported("vsscanf() is not supported by this compiler")));

#pragma printf_check(printf) const
#pragma printf_check(sprintf) const
extern int sprintf(char *, const char *, ...);
extern int printf(const char *, ...);
# 32 "../../Sources/16F887/./../../Libraries/16F887/macros.h" 2
# 1 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\string.h" 1 3
# 14 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\string.h" 3
extern void * memcpy(void *, const void *, size_t);
extern void * memmove(void *, const void *, size_t);
extern void * memset(void *, int, size_t);
# 36 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\string.h" 3
extern char * strcat(char *, const char *);
extern char * strcpy(char *, const char *);
extern char * strncat(char *, const char *, size_t);
extern char * strncpy(char *, const char *, size_t);
extern char * strdup(const char *);
extern char * strtok(char *, const char *);


extern int memcmp(const void *, const void *, size_t);
extern int strcmp(const char *, const char *);
extern int stricmp(const char *, const char *);
extern int strncmp(const char *, const char *, size_t);
extern int strnicmp(const char *, const char *, size_t);
extern void * memchr(const void *, int, size_t);
extern size_t strcspn(const char *, const char *);
extern char * strpbrk(const char *, const char *);
extern size_t strspn(const char *, const char *);
extern char * strstr(const char *, const char *);
extern char * stristr(const char *, const char *);
extern char * strerror(int);
extern size_t strlen(const char *);
extern char * strchr(const char *, int);
extern char * strichr(const char *, int);
extern char * strrchr(const char *, int);
extern char * strrichr(const char *, int);
# 33 "../../Sources/16F887/./../../Libraries/16F887/macros.h" 2
# 1 "E:\\Microchip\\xc8\\v2.41\\pic\\include\\c90\\stdbool.h" 1 3
# 34 "../../Sources/16F887/./../../Libraries/16F887/macros.h" 2
# 90 "../../Sources/16F887/./../../Libraries/16F887/macros.h"
typedef signed char sint8_t;

typedef signed int sint16_t;

typedef signed long int sint32_t;

typedef unsigned char uint8_t;

typedef unsigned int uint16_t;

typedef unsigned long int uint32_t;

typedef unsigned bit;



extern volatile uint8_t DataFrame __attribute__((address(0x020)));
typedef union{
    struct{
        bit _bit0 :1;
        bit _bit1 :1;
        bit _bit2 :1;
        bit _bit3 :1;
        bit _bit4 :1;
        bit _bit5 :1;
        bit _bit6 :1;
        bit _bit7 :1;
    };
}DataFrame_bit_t;
extern volatile DataFrame_bit_t DataFrame_bit __attribute__((address(0x020)));

void reset_register(void);
void sleep(void);
# 30 "../../Sources/16F887/./../../Libraries/16F887/delay.h" 2





void Delay_us(uint16_t us_count);
void Delay_ms(uint16_t ms_count);
void Delay_sec(uint16_t sec_count);
# 32 "../../Sources/16F887/./../../Libraries/16F887/lcd.h" 2

# 1 "../../Sources/16F887/./../../Libraries/16F887/io.h" 1
# 32 "../../Sources/16F887/./../../Libraries/16F887/io.h"
typedef enum{
    RA_0,RA_1,RA_2,RA_3,RA_4,RA_5,RA_6,RA_7,
    RB_0,RB_1,RB_2,RB_3,RB_4,RB_5,RB_6,RB_7,
    RC_0,RC_1,RC_2,RC_3,RC_4,RC_5,RC_6,RC_7,
    RD_0,RD_1,RD_2,RD_3,RD_4,RD_5,RD_6,RD_7,
    RE_0,RE_1,RE_2,RE_3,RE_4,RE_5,RE_6,RE_7,
    R_NULL = 0xff
}IO_PORT;

void pin_Direction(IO_PORT var_pin, uint8_t var_derection);
void pin_Mode(IO_PORT var_pin, uint8_t mode);
void write_Digital(IO_PORT var_pin, uint8_t value);
uint8_t read_Digital(IO_PORT var_pin);
char read_bit(IO_PORT var_pin);
char read_byte(IO_PORT var_pin);
void write_byte(IO_PORT var_pin, uint8_t var_byte);
# 34 "../../Sources/16F887/./../../Libraries/16F887/lcd.h" 2
# 61 "../../Sources/16F887/./../../Libraries/16F887/lcd.h"
typedef struct{
    uint8_t MaxSupportedLines;
    uint8_t MaxSupportedChars;
    uint8_t LcdMode;
    IO_PORT RS;
    IO_PORT RW;
    IO_PORT EN;
    IO_PORT D0;
    IO_PORT D1;
    IO_PORT D2;
    IO_PORT D3;
    IO_PORT D4;
    IO_PORT D5;
    IO_PORT D6;
    IO_PORT D7;
}LcdConfigs_struct;


void LCD_Setup(IO_PORT RS,IO_PORT RW,IO_PORT EN,IO_PORT D0,
                IO_PORT D1,IO_PORT D2,IO_PORT D3,IO_PORT D4,
                IO_PORT D5,IO_PORT D6,IO_PORT D7);
void LCD_Init(uint8_t var_maxLCDLines,uint8_t var_maxLCDChars);
void LCD_Clear();
void LCD_CMD_Write(uint8_t CMDFrame);
void LCD_GoToLine(uint8_t var_LineNum);
void LCD_GoToNextLine(void);
void LCD_SetCursor(uint8_t var_LineNum,uint8_t var_CharNum);
void LCD_DisplayChar(uint8_t dataFrame);
void LCD_DisplayString(const char *ptr_MessagePointer);
void LCD_ScrollMessage(uint8_t var_LineNum,char *ptr_MessagePointer);
void LCD_DisplayNumber(uint8_t numberic_System,uint32_t var_number32,uint8_t var_numOfDigitsToDisplay);
void LCD_DisplayFloatNumber(double var_number);
void LCD_Printf(const char *argList, ...);
void LCD_CreateCustomChar(uint8_t location,uint8_t *CustomChar);
void LCD_DisplayCustomChar(char location);
# 27 "../../Sources/16F887/lcd.c" 2

#pragma waring push
#pragma warning disable 356
#pragma warning disable 520
#pragma warning disable 752
#pragma warning disable 1496
#pragma warning disable 1498


LcdConfigs_struct LCDConfig;
uint8_t LcdTrackLineNum;
uint8_t LcdTrackCursorPos;
uint8_t Array_LCDLineNumAddress[] = {
    0x80,0xC0,0x90,0xD0
};


static void lcd_DataWrite(uint8_t dataFrame);
static void lcd_BusyCheck(void);
static void lcd_Reset(void);
static void lcd_SendCMDSignlas(void);
static void lcd_SendDataSignlas(void);
static void lcd_SendHigherData(uint8_t dataFrame);
static void lcd_SendLowerData(uint8_t dataFrame);
# 67 "../../Sources/16F887/lcd.c"
void LCD_Setup(IO_PORT RS,IO_PORT RW,IO_PORT EN,IO_PORT D0,
                IO_PORT D1,IO_PORT D2,IO_PORT D3,IO_PORT D4,
                IO_PORT D5,IO_PORT D6,IO_PORT D7){
    LCDConfig.RS = RS;
    LCDConfig.RW = RW;
    LCDConfig.EN = EN;
    LCDConfig.D0 = D0;
    LCDConfig.D1 = D1;
    LCDConfig.D2 = D2;
    LCDConfig.D3 = D3;
    LCDConfig.D4 = D4;
    LCDConfig.D5 = D5;
    LCDConfig.D6 = D6;
    LCDConfig.D7 = D7;
    if((D0 == R_NULL) || (D1 == R_NULL) || (D2 == R_NULL) || (D3 == R_NULL)){
        LCDConfig.LcdMode = 4;
    }else{
        LCDConfig.LcdMode = 8;
        pin_Direction(D0,0x00);
        pin_Direction(D1,0x00);
        pin_Direction(D2,0x00);
        pin_Direction(D3,0x00);
    }
    pin_Direction(RS,0x00);
    pin_Direction(RW,0x00);
    pin_Direction(EN,0x00);
    pin_Direction(D0,0x00);
    pin_Direction(D1,0x00);
    pin_Direction(D2,0x00);
    pin_Direction(D3,0x00);
    pin_Direction(D4,0x00);
    pin_Direction(D5,0x00);
    pin_Direction(D6,0x00);
    pin_Direction(D7,0x00);
}






void LCD_Init(uint8_t var_maxLCDLines,uint8_t var_maxLCDChars){
    LCDConfig.MaxSupportedLines = var_maxLCDLines;
    LCDConfig.MaxSupportedChars = var_maxLCDChars;
    if(var_maxLCDLines > 0x02){
        Array_LCDLineNumAddress[0x02] = 0x90 + (var_maxLCDChars & 0x0F);
        Array_LCDLineNumAddress[0x03] = 0xD0 + (var_maxLCDChars & 0x0F);
    }
    Delay_ms(100);
    if(LCDConfig.LcdMode == 8){
        LCD_CMD_Write(0x38);
    }else if(LCDConfig.LcdMode == 4){
        lcd_Reset();
        LCD_CMD_Write(0x28);
    }
    LCD_CMD_Write(0x0E);
    LCD_Clear();
}





void LCD_Clear(){
    LCD_CMD_Write(0x01);
    LCD_GoToLine(0x00);
}





void LCD_CMD_Write(uint8_t CMDFrame){
    lcd_BusyCheck();
    if(LCDConfig.LcdMode == 8){
        lcd_SendLowerData(CMDFrame);
    }else{
        lcd_SendHigherData(CMDFrame);
        lcd_SendCMDSignlas();
        CMDFrame = CMDFrame << 4;
    }
    lcd_SendHigherData(CMDFrame);
    lcd_SendCMDSignlas();
}





void LCD_GoToLine(uint8_t var_LineNum){
    if(var_LineNum < LCDConfig.MaxSupportedLines){
        LcdTrackCursorPos = 0x00;
        LcdTrackLineNum = var_LineNum;
        LCD_CMD_Write(Array_LCDLineNumAddress[var_LineNum]);
    }
}





void LCD_GoToNextLine(void){
    LcdTrackLineNum++;
    LcdTrackCursorPos = 0x00;
    if(LcdTrackLineNum >= LCDConfig.MaxSupportedLines){
        LcdTrackLineNum = 0x00;
    }
    LCD_CMD_Write(Array_LCDLineNumAddress[LcdTrackLineNum]);
}






void LCD_SetCursor(uint8_t var_LineNum,uint8_t var_CharNum){
    if((var_LineNum < LCDConfig.MaxSupportedLines) && (var_CharNum < LCDConfig.MaxSupportedChars)){
        LcdTrackCursorPos = var_CharNum;
        LcdTrackLineNum = var_LineNum;
        LCD_CMD_Write(Array_LCDLineNumAddress[var_LineNum] + var_CharNum);
    }
}





void LCD_DisplayChar(uint8_t dataFrame){
    if((LcdTrackCursorPos >= LCDConfig.MaxSupportedChars) || (dataFrame == '\n')){
        LCD_GoToNextLine();
    }
    if(dataFrame != '\n'){
        lcd_DataWrite(dataFrame);
        LcdTrackCursorPos++;
    }
}





void LCD_DisplayString(const char *ptr_MessagePointer){
    while((*ptr_MessagePointer) !=0){
        LCD_DisplayChar(*ptr_MessagePointer++);
    }
}






void LCD_ScrollMessage(uint8_t var_LineNum,char *ptr_MessagePointer){
    uint8_t i,j;
    if(var_LineNum >= LCDConfig.MaxSupportedLines){
        var_LineNum = 0x00;
    }
    LCD_CMD_Write(0x0C);
    for(i=0;ptr_MessagePointer[i];i++){
        LCD_GoToLine(var_LineNum);
        for(j=0;(j<LCDConfig.MaxSupportedChars) && (ptr_MessagePointer[i+j]);j++){
            LCD_DisplayChar(ptr_MessagePointer[i+j]);
        }
        while(j<LCDConfig.MaxSupportedChars){
            LCD_DisplayChar(' ');
            j++;
        }
        Delay_ms(200);
    }
    LCD_CMD_Write(0x0E);
}







void LCD_DisplayNumber(uint8_t numberic_System,uint32_t var_number32,uint8_t var_numOfDigitsToDisplay){
    uint8_t i=0,a[10];
    if(numberic_System == 2u){
        while(var_numOfDigitsToDisplay != 0){
            i = (((var_number32)&((1<<((var_numOfDigitsToDisplay - 1)))))!=0u);
            LCD_DisplayChar(((i)+0x30));
            var_numOfDigitsToDisplay--;
        }
    }else if(var_number32 == 0){
        LCD_DisplayChar('0');
    }
    else{
        for(i=0;i<var_numOfDigitsToDisplay;i++){
            if(var_number32 != 0){
                a[i] = (uint32_t) (var_number32 - (numberic_System * (uint32_t) (var_number32/numberic_System)));
                var_number32 = (var_number32 / numberic_System);
            }else if((var_numOfDigitsToDisplay == 0xFF) || (var_numOfDigitsToDisplay > 10)){
                break;
            }
            else{
                a[i] = 0;
            }
        }
        while(i!=0){
            LCD_DisplayChar((((a[i-1])>0x09)?((a[i-1])+0x37):((a[i-1])+0x30)));
            i--;
        }
    }
}





void LCD_DisplayFloatNumber(double var_number){
    uint32_t decNumber;
    decNumber = (uint32_t) var_number;
    LCD_DisplayNumber(10u,decNumber,0xFF);
    LCD_DisplayChar('.');
    var_number = var_number - decNumber;
    decNumber = var_number * 1000000;
    LCD_DisplayNumber(10u,decNumber,0xFF);
}






void LCD_Printf(const char *argList, ...){
    const char *ptr;
    va_list argp;
    sint16_t var_num_s16;
    sint32_t var_num_s32;
    uint16_t var_num_u16;
    uint32_t var_num_u32;
    char *str;
    char ch;
    uint8_t NumOfBinDigitsToDisplay_u8;
    double var_float_num;

    *argp = __va_start();
    for(ptr = argList; *ptr != '\0'; ptr++){
        ch = *ptr;
        if(ch == '%'){
            ptr++;
            ch=*ptr;
            if((ch >= 0x30) && (ch <= 0x39)){
                NumOfBinDigitsToDisplay_u8 = 0;
                while((ch >= 0x30) && (ch <= 0x39)){
                    NumOfBinDigitsToDisplay_u8 = ((NumOfBinDigitsToDisplay_u8 * 10) + (ch - 0x30));
                    ptr++;
                    ch = *ptr;
                }
            }else{
                NumOfBinDigitsToDisplay_u8 = 0xFF;
            }

            switch(ch){
                case 'C':
                case 'c':
                    ch = (*(int *)__va_arg((*(int **)argp), (int)0));
                    LCD_DisplayChar(ch);
                    break;
                case 'd':
                    var_num_s16 = (*(int *)__va_arg((*(int **)argp), (int)0));
                    if(var_num_s16 <0){
                        var_num_s16 = -var_num_s16;
                        LCD_DisplayChar('-');
                    }
                    LCD_DisplayNumber(10u,var_num_s16,NumOfBinDigitsToDisplay_u8);
                    break;
                case 'D':
                    var_num_s32 = (*(sint32_t *)__va_arg((*(sint32_t **)argp), (sint32_t)0));
                    if(var_num_s32 <0){
                        var_num_s32 = - var_num_s32;
                        LCD_DisplayChar('-');
                    }
                    LCD_DisplayNumber(10u,var_num_s32,NumOfBinDigitsToDisplay_u8);
                    break;
                case 'u':
                    var_num_u16 = (*(int *)__va_arg((*(int **)argp), (int)0));
                    LCD_DisplayNumber(10u,var_num_u16,NumOfBinDigitsToDisplay_u8);
                    break;
                case 'U':
                    var_num_u32 = (*(uint32_t *)__va_arg((*(uint32_t **)argp), (uint32_t)0));
                    LCD_DisplayNumber(10u,var_num_u32,NumOfBinDigitsToDisplay_u8);
                    break;
                case 'x':
                    var_num_u16 = (*(int *)__va_arg((*(int **)argp), (int)0));
                    LCD_DisplayNumber(16u,var_num_s16,NumOfBinDigitsToDisplay_u8);
                    break;
                case 'X':
                    var_num_u32 = (*(uint32_t *)__va_arg((*(uint32_t **)argp), (uint32_t)0));
                    LCD_DisplayNumber(16u,var_num_u32,NumOfBinDigitsToDisplay_u8);
                    break;
                case 'b':
                    var_num_u16 = (*(int *)__va_arg((*(int **)argp), (int)0));
                    if(NumOfBinDigitsToDisplay_u8 == 0xFF){
                        NumOfBinDigitsToDisplay_u8 = 16;
                    }
                    LCD_DisplayNumber(2u,var_num_u16,NumOfBinDigitsToDisplay_u8);
                    break;
                case 'B':
                    var_num_u32 = (*(uint32_t *)__va_arg((*(uint32_t **)argp), (uint32_t)0));
                    if(NumOfBinDigitsToDisplay_u8 == 0xFF){
                        NumOfBinDigitsToDisplay_u8 = 16;
                    }
                    LCD_DisplayNumber(2u,var_num_u32,NumOfBinDigitsToDisplay_u8);
                    break;
                case 'F':
                case 'f':
                    var_float_num = (*(double *)__va_arg((*(double **)argp), (double)0));
                    LCD_DisplayFloatNumber(var_float_num);
                    break;
                case 'S':
                case 's':
                    str = (*(char* *)__va_arg((*(char* **)argp), (char*)0));
                    LCD_DisplayString(str);
                    break;
                case '%':
                    LCD_DisplayChar('%');
                    break;
            }
        }else{
            LCD_DisplayChar(ch);
        }
    }
                ;
}


void LCD_CreateCustomChar(uint8_t location,uint8_t *CustomChar){
    uint8_t i;
    if(location <8){
        LCD_CMD_Write(0x40 + (location*8));
        for(i=0;i<7;i++){
            LCD_DisplayChar(CustomChar[i]);
        }
    }
    LCD_GoToNextLine();
}


void LCD_DisplayCustomChar(char location){
    LCD_DisplayChar(location);
}





static void lcd_DataWrite(uint8_t dataFrame){
    lcd_BusyCheck();
    if(LCDConfig.LcdMode == 8){
        lcd_SendLowerData(dataFrame);
    }else{
        lcd_SendHigherData(dataFrame);
        lcd_SendDataSignlas();
        dataFrame = dataFrame << 4;
    }
    lcd_SendHigherData(dataFrame);
    lcd_SendDataSignlas();
}





static void lcd_BusyCheck(void){
    uint8_t busyFlag;
    if(LCDConfig.RW != R_NULL){
        pin_Direction(LCDConfig.D7,0x01);
        write_Digital(LCDConfig.RS,0x00);
        write_Digital(LCDConfig.RW,0x01);

        do{
            write_Digital(LCDConfig.EN, 0x00);
            Delay_us(10);
            write_Digital(LCDConfig.EN,0x01);
            Delay_us(10);
            busyFlag = read_Digital(LCDConfig.D7);

            if(LCDConfig.LcdMode == 4){
                write_Digital(LCDConfig.EN,0x00);
                Delay_us(10);
                write_Digital(LCDConfig.EN,0x01);
                Delay_us(10);
            }
        }while(busyFlag != 0);
        pin_Direction(LCDConfig.D7,0x00);
    }else{
        Delay_ms(1);
    }
}





static void lcd_Reset(void){
    lcd_SendHigherData(0x30);
    lcd_SendCMDSignlas();
    Delay_ms(100);
    lcd_SendHigherData(0x30);
    lcd_SendCMDSignlas();
    Delay_us(200);
    lcd_SendHigherData(0x30);
    lcd_SendCMDSignlas();
    Delay_us(200);
    lcd_SendHigherData(0x20);
    lcd_SendCMDSignlas();
    Delay_us(200);
}





static void lcd_SendCMDSignlas(void){
    write_Digital(LCDConfig.RS,0x00);
    write_Digital(LCDConfig.RW,0x00);
    write_Digital(LCDConfig.EN,0x01);
    Delay_us(10);
    write_Digital(LCDConfig.EN,0x00);
}





static void lcd_SendDataSignlas(void){
    write_Digital(LCDConfig.RS,0x01);
    write_Digital(LCDConfig.RW,0x00);
    write_Digital(LCDConfig.EN,0x01);
    Delay_us(10);
    write_Digital(LCDConfig.EN,0x00);
}





static void lcd_SendHigherData(uint8_t dataFrame){
    write_Digital(LCDConfig.D4,(((dataFrame)&((1<<(4))))!=0u));
    write_Digital(LCDConfig.D5,(((dataFrame)&((1<<(5))))!=0u));
    write_Digital(LCDConfig.D6,(((dataFrame)&((1<<(6))))!=0u));
    write_Digital(LCDConfig.D7,(((dataFrame)&((1<<(7))))!=0u));
}





static void lcd_SendLowerData(uint8_t dataFrame){
    write_Digital(LCDConfig.D0,(((dataFrame)&((1<<(0))))!=0u));
    write_Digital(LCDConfig.D1,(((dataFrame)&((1<<(1))))!=0u));
    write_Digital(LCDConfig.D2,(((dataFrame)&((1<<(2))))!=0u));
    write_Digital(LCDConfig.D3,(((dataFrame)&((1<<(3))))!=0u));
}
#pragma warning pop
# 525 "../../Sources/16F887/lcd.c"

