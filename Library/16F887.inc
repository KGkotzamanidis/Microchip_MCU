#ifndef _16F887_INC
#define _16F887_INC
    ;PIC-16F887 SFRs bank 0
    #define INDF INDF
    INDF equ 0x0

    #define TMR0 TMR0
    TMR0 equ 0x1

    #define PCL PCL
    PCL equ 0x2

    #define STATUS STATUS
    STATUS equ 0x3
    #define C	0
    #define DC	1
    #define Z	2
    #define PD	3
    #define TO	4
    #define RP0	5
    #define RP1	6
    #define IRP	7

    #define FSR FSR
    FSR equ 0x4

    #define PORTA PORTA
    PORTA equ 0x5
    #define RA0	0
    #define RA1	1
    #define RA2	2
    #define RA3	3
    #define RA4	4
    #define RA5	5
    #define RA6	6
    #define RA7	7

    #define PORTB PORTB
    PORTB equ 0x6
    #define RB0	0
    #define RB1	1
    #define RB2	2
    #define RB3	3
    #define RB4	4
    #define RB5	5
    #define RB6	6
    #define RB7	7

    #define PORTC PORTC
    PORTC equ 0x7
    #define RC0	0
    #define RC1	1
    #define RC2	2
    #define RC3	3
    #define RC4	4
    #define RC5	5
    #define RC6	6
    #define RC7	7

    #define PORTD PORTD
    PORTD equ 0x8
    #define RD0	0
    #define RD1	1
    #define RD2	2
    #define RD3	3
    #define RD4	4
    #define RD5	5
    #define RD6	6
    #define RD7	7

    #define PORTE PORTE
    PORTE equ 0x9
    #define RE0	0
    #define RE1	1
    #define RE2	2
    #define RE3	3

    #define PCLATH PCLATH
    PCLATH equ 0xA

    #define INTCON INTCON
    INTCON equ 0xB
    #define RBIF    0
    #define INTF    1
    #define T0IF    2
    #define RBIE    3
    #define INTE    4
    #define T0IE    5
    #define PEIE    6
    #define GIE	    7

    #define PIR1 PIR1
    PIR1 equ 0xC
    #define TMR1IF  0
    #define TMR2IF  1
    #define CCP1IF  2
    #define SSPIF   3
    #define TXIF    4
    #define RCIF    5
    #define ADIF    6

    #define PIR2 PIR2
    PIR2 equ 0xD
    #define CCP2IF  0
    #define ULPWUIF 2
    #define BCLIF   3
    #define EEIF    4
    #define C1IF    5
    #define C2IF    6
    #define OSFIF   7

    #define TMR1L TMR1L
    TMR1L equ 0xE

    #define TMR1H TMR1H
    TMR1H equ 0xF

    #define T1CON T1CON
    T1CON equ 0x10
    #define TMR1ON  0
    #define TRM1CS  1
    #define T1SYNC  2
    #define T1OSCEN 3
    #define T1CKPS0 4
    #define T1CKPS1 5
    #define TMR1GE  6
    #define T1GINV  7

    #define TMR2 TMR2
    TMR2 equ 0x11

    #define T2CON T2CON
    T2CON equ 0x12
    #define T2CKPS0 0
    #define T2CKPS1 1
    #define TMR2ON  2
    #define TOUTPS0 3
    #define TOUTPS1 4
    #define TOUTPS2 5
    #define TOUTPS3 6

    #define SSPBUF SSPBUF
    SSPBUF equ 0x13

    #define SSPCON SSPCON
    SSPCON equ 0x14
    #define SSPM0   0
    #define SSPM1   1
    #define SSPM2   2
    #define SSPM3   3
    #define CKP	    4
    #define SSPEN   5
    #define SSPOV   6
    #define WCOL    7

    #define CCPR1L CCPR1L
    CCPR1L equ 0x15

    #define CCPR1H CCPR1H
    CCPR1H equ 0x16
 
    #define CCP1CON CCP1CON
    CCP1CON equ 0x17
    #define CCP1M0  0
    #define CCP1M1  1
    #define CCP1M2  2
    #define CCP1M3  3
    #define DC1B0   4
    #define DC1B1   5
    #define P1M0    6
    #define P1M1    7
    
    #define RCSTA RCSTA
    RCSTA equ 0x18
    #define RX9D    0
    #define OERR    1
    #define FERR    2
    #define ADDEN   3
    #define CREN    4
    #define SREN    5
    #define RX9	    6
    #define SPEN    7
    
    #define TXREG TXREG
    TXREG equ 0x19
 
    #define RCREG RCREG
    RCREG equ 0x1A
 
    #define CCPR2L CCPR2L
    CCPR2L equ 0x1B
 
    #define CCPR2H CCPR2H
    CCPR2H equ 0x1C
 
    #define CCP2CON CCP2CON
    CCP2CON equ 0x1D
    #define CCP2M0  0
    #define CCP2M1  1
    #define CCP2M2  2
    #define CCP2M3  3
    #define DC2B0   4
    #define DC2B1   5
    
    #define ADRESH ADRESH
    ADRESH equ 0x1E
 
    #define ADCON0 ADCON0
    ADCON0 equ 0x1F
    #define ADON    0
    #define GO_DONE 1
    #define CHS0    2
    #define CHS1    3
    #define CHS2    4
    #define CHS3    5
    #define ADCS0   6
    #define ADCS1   7
    
    ;PIC-16F887 SFRs bank 1
    #define TRISA TRISA
    TRISA equ 0x85
    #define TRISA0  0
    #define TRISA1  1
    #define TRISA2  2
    #define TRISA3  3
    #define TRISA4  4
    #define TRISA5  5
    #define TRISA6  6
    #define TRISA7  7
    
    #define TRISB TRISB
    TRISB equ 0x86
    #define TRISB0  0
    #define TRISB1  1
    #define TRISB2  2
    #define TRISB3  3
    #define TRISB4  4
    #define TRISB5  5
    #define TRISB6  6
    #define TRISB7  7
    
    #define TRISC TRISC
    TRISC equ 0x87
    #define TRISC0  0
    #define TRISC1  1
    #define TRISC2  2
    #define TRISC3  3
    #define TRISC4  4
    #define TRISC5  5
    #define TRISC6  6
    #define TRISC7  7
    
    #define TRISD TRISD
    TRISD equ 0x88
    #define TRISD0  0
    #define TRISD1  1
    #define TRISD2  2
    #define TRISD3  3
    #define TRISD4  4
    #define TRISD5  5
    #define TRISD6  6
    #define TRISD7  7
    
    #define TRISE TRISE
    TRISE equ 0x89
    #define TRISE0  0
    #define TRISE1  1
    #define TRISE2  2
    #define TRISE3  3
    
    #define PIE1 PIE1
    PIE1 equ 0x8C
    #define TMR1IE  0
    #define TMR2IE  1
    #define CCP1IE  2
    #define SSPIE   3
    #define TXIE    4
    #define RCIE    5
    #define ADIE    6
    
    #define PIE2 PIE2
    PIE2 equ 0x8D
    #define CCP2IE  0
    #define ULPWUIE 2
    #define BCLIE   3
    #define EEIE    4
    #define C1IE    5
    #define C2IE    6
    #define OSFIE   7
    
    #define PCON PCON
    PCON equ 0x8E
    #define BOR	    0
    #define POR	    1
    #define SBOREN  4
    #define ULPWUE  5
    
    #define OSCCON OSCCON
    OSCCON equ 0x8F
    #define SCS	    0
    #define LTS	    1
    #define HTS	    2
    #define OSTS    3
    #define IRCF0   4
    #define IRCF1   5
    #define IRCF2   6
    
    #define OSCTUNE OSCTUNE
    OSCTUNE equ 0x90
    #define TUN0    0
    #define TUN1    1
    #define TUN2    2
    #define TUN3    3
    #define TUN4    4
    
    #define SSPCON2 SSPCON2
    SSPCON2 equ 0x91
    #define SEN	    0
    #define RSEN    1
    #define PEN	    2
    #define RCEN    3
    #define ACKEN   4
    #define ACKDIT  5
    #define ACKSTAT 6
    #define GCEN    7
    
    #define PR2 PR2
    PR2 equ 0x92
    
    #define SSPADD SSPADD
    SSPADD equ 0x93
    
    #define SSPMSK SSPMSK
    SSPMSK equ 0x93
    #define MSK0    0
    #define MSK1    1
    #define MSK2    2
    #define MSK3    3
    #define MSK4    4
    #define MSK5    5
    #define MSK6    6
    #define MSK7    7
    
    #define SSPSTAT SSPSTAT
    SSPSTAT equ 0x94
    #define BF	0
    #define UA	1
    #define R_W	2
    #define S	3
    #define P	4
    #define D_A	5
    #define CKE	6
    #define SMP	7
    
    #define WPUB WPUB
    WPUB equ 0x95
    #define WPUB0   0
    #define WPUB1   1
    #define WPUB2   2
    #define WPUB3   3
    #define WPUB4   4
    #define WPUB5   5
    #define WPUB6   6
    #define WPUB7   7
    
    #define IOCB IOCB
    IOCB equ 0x96
    #define IOCB0   0
    #define IOCB1   1
    #define IOCB2   2
    #define IOCB3   3
    #define IOCB4   4
    #define IOCB5   5
    #define IOCB6   6
    #define IOCB7   7
    
    #define VRCON VRCON
    VRCON equ 0x97
    #define VR0	    0
    #define VR1	    1
    #define VR2	    2
    #define VR3	    3
    #define VRSS    4
    #define VRR	    5
    #define VROE    6
    #define VREN    7
    
    #define TXSTA TXSTA
    TXSTA equ 0x98
    #define TX9D    0
    #define TRMT    1
    #define BRGH    2
    #define SENDB   3
    #define SYNC    4
    #define TXEN    5
    #define TX9	    6
    #define CSRC    7
    
    #define SPBRG SPBRG
    SPBRG equ 0x99
    #define BRG0    0
    #define BRG1    1
    #define BRG2    2
    #define BRG3    3
    #define BRG4    4
    #define BRG5    5
    #define BRG6    6
    #define BRG7    7
    
    #define SPBRGH SPBRGH
    SPBRGH  equ 0x9A
    #define BRG8    0
    #define BRG9    1
    #define BRG10   2
    #define BRG11   3
    #define BRG12   4
    #define BRG13   5
    #define BRG14   6
    #define BRG15   7
    
    #define PWM1CON PWM1CON
    PWM1CON equ 0x9B
    #define PDC0    0
    #define PDC1    1
    #define PDC2    2
    #define PDC3    3
    #define PDC4    4
    #define PDC5    5
    #define PDC6    6
    #define PRSEN   7
    
    #define ECCPAS ECCPAS
    ECCPAS equ 0x9C
    #define PSSBD0  0
    #define PSSBD1  1
    #define PSSAC0  2
    #define PSSAC1  3
    #define ECCPAS0 4
    #define ECCPAS1 5
    #define ECCPAS2 6
    #define ECCPASE 7
    
    #define PSTRCON PSTRCON
    PSTRCON equ 0x9D
    #define STRA    0
    #define STRB    1
    #define STRC    2
    #define STRD    3
    #define STRSYNC 4
    
    #define ADRESL ADRESL
    ADRESL equ 0x9E
    
    #define ADCON1 ADCON1
    ADCON1 equ 0x9F
    #define VCFG0   4
    #define VCFG1   5
    #define ADFM    7
    
    ;PIC-16F887 SFRs bank 2
    #define WDTCON WDTCON
    WDTCON equ 0x105
    #define SWDTEN  0
    #define WDTPS0  1
    #define WDTPS1  2
    #define WDTPS2  3
    #define WDTPS3  4
    
    #define CM1CON0 CM1CON0
    CM1CON0 equ 0x107
    #define C1CH0   0
    #define C1CH1   1
    #define C1R	    2
    #define C1POL   4
    #define C1OE    5
    #define C1OUT   6
    #define C1ON    7
    
    #define CM2CON0 CM2CON0
    CM2CON0 equ 0x108
    #define C2CH0   0
    #define C2CH1   1
    #define C2R	    2
    #define C2POL   4
    #define C2OE    5
    #define C2OUT   6
    #define C2ON    7
    
    #define CM2CON1 CM2CON1
    CM2CON1 equ 0x109
    #define C2SYNC  0
    #define T1GSS   1
    #define C2RSEL  4
    #define C1RSEL  5
    #define MC2OUT  6
    #define MC1OUT  7
    
    #define EEDAT EEDAT
    EEDAT equ 0x10C
    #define EEDAT0  0
    #define EEDAT1  1
    #define EEDAT2  2
    #define EEDAT3  3
    #define EEDAT4  4
    #define EEDAT5  5
    #define EEDAT6  6
    #define EEDAT7  7
    
    #define EEADR EEADR
    EEADR equ 0x10D
    #define EEADR0  0
    #define EEADR1  1
    #define EEADR2  2
    #define EEADR3  3
    #define EEADR4  4
    #define EEADR5  5
    #define EEADR6  6
    #define EEADR7  7
    
    #define EEDATH EEDATH
    EEDATH equ 0x10E
    #define EEDATH0 0
    #define EEDATH1 1
    #define EEDATH2 2
    #define EEDATH3 3
    #define EEDATH4 4
    #define EEDATH5 5
    
    #define EEADRH EEADRH
    EEADRH equ 0x10F
    #define EEADRH0 0
    #define EEADRH1 1
    #define EEADRH2 2
    #define EEADRH3 3
    #define EEADRH4 4
    
    ;PIC-16F887 SFRs bank 3
    #define SRCON SRCON
    SRCON equ 0x185
    #define FVREN   0
    #define PULSR   2
    #define PULSS   3
    #define C2REN   4
    #define C1SEN   5
    #define SR0	    6
    #define SR1	    7
    
    #define BAUDCTL BAUDCTL
    BAUDCTL equ 0x187
    #define ABDEN   0
    #define WUE	    1
    #define BRG16   3
    #define SCKP    4
    #define RCIDL   6
    #define ABDOVF  7
    
    #define ANSEL ANSEL
    ANSEL equ 0x188
    #define ANS0 0
    #define ANS1 1
    #define ANS2 2
    #define ANS3 3
    #define ANS4 4
    #define ANS5 5
    #define ANS6 6
    #define ANS7 7
    
    #define ANSELH ANSELH
    ANSELH equ 0x189
    #define ANS8    0
    #define ANS9    1
    #define ANS10   2
    #define ANS11   3
    #define ANS12   4
    #define ANS13   5
    
    #define EECON1 EECON1
    EECON1 equ 0x18C
    #define RD	    0
    #define WR	    1
    #define WREN    2
    #define WRERR   3
    #define EEPGD   7
    
    #define EECON2 EECON2
    EECON2 equ 0x18D
    
    ;PIC-16F887 Memory MAP
    #define SPACE_CODE	    0
    #define SPACE_DATA	    1
    #define SPACE_EEPROM    3
    psect udata_shr,class=COMMON,space=SPACE_DATA,noexec
    psect udata,class=RAM,space=SPACE_DATA,noexec
    psect udata_bank0,class=BANK0,space=SPACE_DATA,noexec
    psect udata_bank1,class=BANK1,space=SPACE_DATA,noexec
    psect udata_bank2,class=BANK2,space=SPACE_DATA,noexec
    psect udata_bank3,class=BANK3,space=SPACE_DATA,noexec
    psect code,class=CODE,space=SPACE_CODE,delta=2
    psect data,class=STRCODE,space=SPACE_CODE,delta=2,noexec
    psect edata,class=EEDATA,space=SPACE_EEPROM,delta=2,noexec
#endif