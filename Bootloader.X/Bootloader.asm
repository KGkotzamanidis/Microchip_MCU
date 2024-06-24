; CONFIG1
  CONFIG  FOSC = INTRC_CLKOUT   ; Oscillator Selection bits (INTOSC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN)
  CONFIG  WDTE = ON             ; Watchdog Timer Enable bit (WDT enabled)
  CONFIG  PWRTE = OFF           ; Power-up Timer Enable bit (PWRT disabled)
  CONFIG  MCLRE = ON            ; RE3/MCLR pin function select bit (RE3/MCLR pin function is MCLR)
  CONFIG  CP = OFF              ; Code Protection bit (Program memory code protection is disabled)
  CONFIG  CPD = OFF             ; Data Code Protection bit (Data memory code protection is disabled)
  CONFIG  BOREN = ON            ; Brown Out Reset Selection bits (BOR enabled)
  CONFIG  IESO = ON             ; Internal External Switchover bit (Internal/External Switchover mode is enabled)
  CONFIG  FCMEN = ON            ; Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is enabled)
  CONFIG  LVP = OFF             ; Low Voltage Programming Enable bit (RB3 pin has digital I/O, HV on MCLR must be used for programming)
; CONFIG2
  CONFIG  BOR4V = BOR40V        ; Brown-out Reset Selection bit (Brown-out Reset set to 4.0V)
  CONFIG  WRT = OFF             ; Flash Program Memory Self Write Enable bits (Write protection off)
  
  ;CONFIG3 User ID Memory values max value 0x7F
  CONFIG IDLOC0 = 0x0
  CONFIG IDLOC1 = 0x0
  CONFIG IDLOC2 = 0x0
  CONFIG IDLOC3 = 0x0
// config statements should precede project file includes.
#include <xc.inc>
#include <pic16f887.inc>
  
#define BAUDRATE 9600
#define XTAL 8000000
#define SPBRG_VALUE ((XTAL/(16*BAUDRATE))-1)
#define first_address 0x2000-100

  ; Write the credit's into EEPROM
  psect edata,global,class=EEDATA,space=3,delta=2,noexec
  db 'w','e','l','c','o','m','e',' ','t','o',' ','o','u','r',' '
  db 'B','o','o','t','l','o','a','d','e','r',' ','b','y',' ','k','g'
  db 'k','o','t','z','a','m','a','n','i','d','i','s','.'
  
  ; Reset Vector -> 0x0000
  psect Reset_Vec,global,class=CODE,delta=2
  global Reset_Vec
Reset_Vec:
    pagesel Bootloader
    goto Bootloader
    
    ; Interrupt Vector -> 0x0004
    psect Isr_Vec,global,class=CODE,delta=2
    global Isr_Vec
Isr_Vec:
    retfie
    
Bootloader:
    movlw 0x76
    movwf OSCCON
    movlw 0x0F
    movwf OSCTUNE
    
    clrf TXREG
    clrf RCREG
    movlw SPBRG_VALUE
    movwf SPBRG
    
    banksel TXSTA
    bsf TXSTA,2
    bsf TXSTA,5
    
    banksel RCSTA
    bsf RCSTA,5
    bsf RCSTA,4
    
    call SendString
    goto $
    
SendString:
    movlw low(HelloWorldString)
    movwf FSR
    
SendLoop:
    movf INDF,W
    incf FSR,F
    btfsc STATUS,2
    return
    call UART_Send
    goto SendLoop
    
UART_Send:
    btfss PIR1,4
    goto $-1
    movwf TXREG
    return
HelloWorldString:
    db "Hello,World!",0
    
    end Reset_Vec