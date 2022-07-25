#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/PIC16F887.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/PIC16F887.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

ifdef SUB_IMAGE_ADDRESS

else
SUB_IMAGE_ADDRESS_COMMAND=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=../../Sources/analog.c ../../Sources/delay.c ../../Sources/eeprom.c ../../Sources/i2c.c ../../Sources/interrupts.c ../../Sources/io.c ../../Sources/lcd.c ../../Sources/macros.c ../../Sources/main.c ../../Sources/nec.c ../../Sources/onewire.c ../../Sources/oscillator.c ../../Sources/pwm.c ../../Sources/rtc.c ../../Sources/timer.c ../../Sources/uart.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/_ext/436103672/analog.p1 ${OBJECTDIR}/_ext/436103672/delay.p1 ${OBJECTDIR}/_ext/436103672/eeprom.p1 ${OBJECTDIR}/_ext/436103672/i2c.p1 ${OBJECTDIR}/_ext/436103672/interrupts.p1 ${OBJECTDIR}/_ext/436103672/io.p1 ${OBJECTDIR}/_ext/436103672/lcd.p1 ${OBJECTDIR}/_ext/436103672/macros.p1 ${OBJECTDIR}/_ext/436103672/main.p1 ${OBJECTDIR}/_ext/436103672/nec.p1 ${OBJECTDIR}/_ext/436103672/onewire.p1 ${OBJECTDIR}/_ext/436103672/oscillator.p1 ${OBJECTDIR}/_ext/436103672/pwm.p1 ${OBJECTDIR}/_ext/436103672/rtc.p1 ${OBJECTDIR}/_ext/436103672/timer.p1 ${OBJECTDIR}/_ext/436103672/uart.p1
POSSIBLE_DEPFILES=${OBJECTDIR}/_ext/436103672/analog.p1.d ${OBJECTDIR}/_ext/436103672/delay.p1.d ${OBJECTDIR}/_ext/436103672/eeprom.p1.d ${OBJECTDIR}/_ext/436103672/i2c.p1.d ${OBJECTDIR}/_ext/436103672/interrupts.p1.d ${OBJECTDIR}/_ext/436103672/io.p1.d ${OBJECTDIR}/_ext/436103672/lcd.p1.d ${OBJECTDIR}/_ext/436103672/macros.p1.d ${OBJECTDIR}/_ext/436103672/main.p1.d ${OBJECTDIR}/_ext/436103672/nec.p1.d ${OBJECTDIR}/_ext/436103672/onewire.p1.d ${OBJECTDIR}/_ext/436103672/oscillator.p1.d ${OBJECTDIR}/_ext/436103672/pwm.p1.d ${OBJECTDIR}/_ext/436103672/rtc.p1.d ${OBJECTDIR}/_ext/436103672/timer.p1.d ${OBJECTDIR}/_ext/436103672/uart.p1.d

# Object Files
OBJECTFILES=${OBJECTDIR}/_ext/436103672/analog.p1 ${OBJECTDIR}/_ext/436103672/delay.p1 ${OBJECTDIR}/_ext/436103672/eeprom.p1 ${OBJECTDIR}/_ext/436103672/i2c.p1 ${OBJECTDIR}/_ext/436103672/interrupts.p1 ${OBJECTDIR}/_ext/436103672/io.p1 ${OBJECTDIR}/_ext/436103672/lcd.p1 ${OBJECTDIR}/_ext/436103672/macros.p1 ${OBJECTDIR}/_ext/436103672/main.p1 ${OBJECTDIR}/_ext/436103672/nec.p1 ${OBJECTDIR}/_ext/436103672/onewire.p1 ${OBJECTDIR}/_ext/436103672/oscillator.p1 ${OBJECTDIR}/_ext/436103672/pwm.p1 ${OBJECTDIR}/_ext/436103672/rtc.p1 ${OBJECTDIR}/_ext/436103672/timer.p1 ${OBJECTDIR}/_ext/436103672/uart.p1

# Source Files
SOURCEFILES=../../Sources/analog.c ../../Sources/delay.c ../../Sources/eeprom.c ../../Sources/i2c.c ../../Sources/interrupts.c ../../Sources/io.c ../../Sources/lcd.c ../../Sources/macros.c ../../Sources/main.c ../../Sources/nec.c ../../Sources/onewire.c ../../Sources/oscillator.c ../../Sources/pwm.c ../../Sources/rtc.c ../../Sources/timer.c ../../Sources/uart.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-default.mk ${DISTDIR}/PIC16F887.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=16F887
# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/_ext/436103672/analog.p1: ../../Sources/analog.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/analog.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/analog.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/analog.p1 ../../Sources/analog.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/analog.d ${OBJECTDIR}/_ext/436103672/analog.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/analog.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/delay.p1: ../../Sources/delay.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/delay.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/delay.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/delay.p1 ../../Sources/delay.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/delay.d ${OBJECTDIR}/_ext/436103672/delay.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/delay.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/eeprom.p1: ../../Sources/eeprom.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/eeprom.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/eeprom.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/eeprom.p1 ../../Sources/eeprom.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/eeprom.d ${OBJECTDIR}/_ext/436103672/eeprom.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/eeprom.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/i2c.p1: ../../Sources/i2c.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/i2c.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/i2c.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/i2c.p1 ../../Sources/i2c.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/i2c.d ${OBJECTDIR}/_ext/436103672/i2c.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/i2c.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/interrupts.p1: ../../Sources/interrupts.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/interrupts.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/interrupts.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/interrupts.p1 ../../Sources/interrupts.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/interrupts.d ${OBJECTDIR}/_ext/436103672/interrupts.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/interrupts.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/io.p1: ../../Sources/io.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/io.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/io.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/io.p1 ../../Sources/io.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/io.d ${OBJECTDIR}/_ext/436103672/io.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/io.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/lcd.p1: ../../Sources/lcd.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/lcd.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/lcd.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/lcd.p1 ../../Sources/lcd.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/lcd.d ${OBJECTDIR}/_ext/436103672/lcd.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/lcd.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/macros.p1: ../../Sources/macros.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/macros.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/macros.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/macros.p1 ../../Sources/macros.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/macros.d ${OBJECTDIR}/_ext/436103672/macros.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/macros.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/main.p1: ../../Sources/main.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/main.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/main.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/main.p1 ../../Sources/main.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/main.d ${OBJECTDIR}/_ext/436103672/main.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/main.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/nec.p1: ../../Sources/nec.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/nec.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/nec.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/nec.p1 ../../Sources/nec.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/nec.d ${OBJECTDIR}/_ext/436103672/nec.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/nec.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/onewire.p1: ../../Sources/onewire.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/onewire.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/onewire.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/onewire.p1 ../../Sources/onewire.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/onewire.d ${OBJECTDIR}/_ext/436103672/onewire.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/onewire.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/oscillator.p1: ../../Sources/oscillator.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/oscillator.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/oscillator.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/oscillator.p1 ../../Sources/oscillator.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/oscillator.d ${OBJECTDIR}/_ext/436103672/oscillator.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/oscillator.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/pwm.p1: ../../Sources/pwm.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/pwm.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/pwm.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/pwm.p1 ../../Sources/pwm.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/pwm.d ${OBJECTDIR}/_ext/436103672/pwm.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/pwm.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/rtc.p1: ../../Sources/rtc.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/rtc.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/rtc.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/rtc.p1 ../../Sources/rtc.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/rtc.d ${OBJECTDIR}/_ext/436103672/rtc.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/rtc.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/timer.p1: ../../Sources/timer.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/timer.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/timer.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/timer.p1 ../../Sources/timer.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/timer.d ${OBJECTDIR}/_ext/436103672/timer.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/timer.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/uart.p1: ../../Sources/uart.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/uart.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/uart.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/uart.p1 ../../Sources/uart.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/uart.d ${OBJECTDIR}/_ext/436103672/uart.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/uart.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
else
${OBJECTDIR}/_ext/436103672/analog.p1: ../../Sources/analog.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/analog.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/analog.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/analog.p1 ../../Sources/analog.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/analog.d ${OBJECTDIR}/_ext/436103672/analog.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/analog.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/delay.p1: ../../Sources/delay.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/delay.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/delay.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/delay.p1 ../../Sources/delay.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/delay.d ${OBJECTDIR}/_ext/436103672/delay.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/delay.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/eeprom.p1: ../../Sources/eeprom.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/eeprom.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/eeprom.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/eeprom.p1 ../../Sources/eeprom.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/eeprom.d ${OBJECTDIR}/_ext/436103672/eeprom.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/eeprom.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/i2c.p1: ../../Sources/i2c.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/i2c.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/i2c.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/i2c.p1 ../../Sources/i2c.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/i2c.d ${OBJECTDIR}/_ext/436103672/i2c.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/i2c.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/interrupts.p1: ../../Sources/interrupts.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/interrupts.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/interrupts.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/interrupts.p1 ../../Sources/interrupts.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/interrupts.d ${OBJECTDIR}/_ext/436103672/interrupts.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/interrupts.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/io.p1: ../../Sources/io.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/io.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/io.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/io.p1 ../../Sources/io.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/io.d ${OBJECTDIR}/_ext/436103672/io.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/io.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/lcd.p1: ../../Sources/lcd.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/lcd.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/lcd.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/lcd.p1 ../../Sources/lcd.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/lcd.d ${OBJECTDIR}/_ext/436103672/lcd.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/lcd.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/macros.p1: ../../Sources/macros.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/macros.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/macros.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/macros.p1 ../../Sources/macros.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/macros.d ${OBJECTDIR}/_ext/436103672/macros.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/macros.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/main.p1: ../../Sources/main.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/main.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/main.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/main.p1 ../../Sources/main.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/main.d ${OBJECTDIR}/_ext/436103672/main.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/main.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/nec.p1: ../../Sources/nec.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/nec.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/nec.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/nec.p1 ../../Sources/nec.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/nec.d ${OBJECTDIR}/_ext/436103672/nec.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/nec.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/onewire.p1: ../../Sources/onewire.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/onewire.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/onewire.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/onewire.p1 ../../Sources/onewire.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/onewire.d ${OBJECTDIR}/_ext/436103672/onewire.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/onewire.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/oscillator.p1: ../../Sources/oscillator.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/oscillator.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/oscillator.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/oscillator.p1 ../../Sources/oscillator.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/oscillator.d ${OBJECTDIR}/_ext/436103672/oscillator.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/oscillator.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/pwm.p1: ../../Sources/pwm.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/pwm.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/pwm.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/pwm.p1 ../../Sources/pwm.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/pwm.d ${OBJECTDIR}/_ext/436103672/pwm.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/pwm.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/rtc.p1: ../../Sources/rtc.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/rtc.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/rtc.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/rtc.p1 ../../Sources/rtc.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/rtc.d ${OBJECTDIR}/_ext/436103672/rtc.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/rtc.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/timer.p1: ../../Sources/timer.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/timer.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/timer.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/timer.p1 ../../Sources/timer.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/timer.d ${OBJECTDIR}/_ext/436103672/timer.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/timer.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/436103672/uart.p1: ../../Sources/uart.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/436103672" 
	@${RM} ${OBJECTDIR}/_ext/436103672/uart.p1.d 
	@${RM} ${OBJECTDIR}/_ext/436103672/uart.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/436103672/uart.p1 ../../Sources/uart.c 
	@-${MV} ${OBJECTDIR}/_ext/436103672/uart.d ${OBJECTDIR}/_ext/436103672/uart.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/436103672/uart.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${DISTDIR}/PIC16F887.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=${DISTDIR}/PIC16F887.X.${IMAGE_TYPE}.map  -D__DEBUG=1  -mdebugger=none  -DXPRJ_default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits -std=c99 -gdwarf-3 -mstack=compiled:auto:auto        $(COMPARISON_BUILD) -Wl,--memorysummary,${DISTDIR}/memoryfile.xml -o ${DISTDIR}/PIC16F887.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}     
	@${RM} ${DISTDIR}/PIC16F887.X.${IMAGE_TYPE}.hex 
	
else
${DISTDIR}/PIC16F887.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=${DISTDIR}/PIC16F887.X.${IMAGE_TYPE}.map  -DXPRJ_default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     $(COMPARISON_BUILD) -Wl,--memorysummary,${DISTDIR}/memoryfile.xml -o ${DISTDIR}/PIC16F887.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}     
	
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${OBJECTDIR}
	${RM} -r ${DISTDIR}

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
