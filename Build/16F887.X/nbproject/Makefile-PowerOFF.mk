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
ifeq "$(wildcard nbproject/Makefile-local-PowerOFF.mk)" "nbproject/Makefile-local-PowerOFF.mk"
include nbproject/Makefile-local-PowerOFF.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=PowerOFF
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/16F887.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/16F887.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
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
SOURCEFILES_QUOTED_IF_SPACED=main.c ../../Sources/16F887/analog.c ../../Sources/16F887/delay.c ../../Sources/16F887/eeprom.c ../../Sources/16F887/i2c.c ../../Sources/16F887/interrupts.c ../../Sources/16F887/io.c ../../Sources/16F887/lcd.c ../../Sources/16F887/macros.c ../../Sources/16F887/nec.c ../../Sources/16F887/onewire.c ../../Sources/16F887/oscillator.c ../../Sources/16F887/pwm.c ../../Sources/16F887/rtc.c ../../Sources/16F887/timer.c ../../Sources/16F887/uart.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/main.p1 ${OBJECTDIR}/_ext/1456006861/analog.p1 ${OBJECTDIR}/_ext/1456006861/delay.p1 ${OBJECTDIR}/_ext/1456006861/eeprom.p1 ${OBJECTDIR}/_ext/1456006861/i2c.p1 ${OBJECTDIR}/_ext/1456006861/interrupts.p1 ${OBJECTDIR}/_ext/1456006861/io.p1 ${OBJECTDIR}/_ext/1456006861/lcd.p1 ${OBJECTDIR}/_ext/1456006861/macros.p1 ${OBJECTDIR}/_ext/1456006861/nec.p1 ${OBJECTDIR}/_ext/1456006861/onewire.p1 ${OBJECTDIR}/_ext/1456006861/oscillator.p1 ${OBJECTDIR}/_ext/1456006861/pwm.p1 ${OBJECTDIR}/_ext/1456006861/rtc.p1 ${OBJECTDIR}/_ext/1456006861/timer.p1 ${OBJECTDIR}/_ext/1456006861/uart.p1
POSSIBLE_DEPFILES=${OBJECTDIR}/main.p1.d ${OBJECTDIR}/_ext/1456006861/analog.p1.d ${OBJECTDIR}/_ext/1456006861/delay.p1.d ${OBJECTDIR}/_ext/1456006861/eeprom.p1.d ${OBJECTDIR}/_ext/1456006861/i2c.p1.d ${OBJECTDIR}/_ext/1456006861/interrupts.p1.d ${OBJECTDIR}/_ext/1456006861/io.p1.d ${OBJECTDIR}/_ext/1456006861/lcd.p1.d ${OBJECTDIR}/_ext/1456006861/macros.p1.d ${OBJECTDIR}/_ext/1456006861/nec.p1.d ${OBJECTDIR}/_ext/1456006861/onewire.p1.d ${OBJECTDIR}/_ext/1456006861/oscillator.p1.d ${OBJECTDIR}/_ext/1456006861/pwm.p1.d ${OBJECTDIR}/_ext/1456006861/rtc.p1.d ${OBJECTDIR}/_ext/1456006861/timer.p1.d ${OBJECTDIR}/_ext/1456006861/uart.p1.d

# Object Files
OBJECTFILES=${OBJECTDIR}/main.p1 ${OBJECTDIR}/_ext/1456006861/analog.p1 ${OBJECTDIR}/_ext/1456006861/delay.p1 ${OBJECTDIR}/_ext/1456006861/eeprom.p1 ${OBJECTDIR}/_ext/1456006861/i2c.p1 ${OBJECTDIR}/_ext/1456006861/interrupts.p1 ${OBJECTDIR}/_ext/1456006861/io.p1 ${OBJECTDIR}/_ext/1456006861/lcd.p1 ${OBJECTDIR}/_ext/1456006861/macros.p1 ${OBJECTDIR}/_ext/1456006861/nec.p1 ${OBJECTDIR}/_ext/1456006861/onewire.p1 ${OBJECTDIR}/_ext/1456006861/oscillator.p1 ${OBJECTDIR}/_ext/1456006861/pwm.p1 ${OBJECTDIR}/_ext/1456006861/rtc.p1 ${OBJECTDIR}/_ext/1456006861/timer.p1 ${OBJECTDIR}/_ext/1456006861/uart.p1

# Source Files
SOURCEFILES=main.c ../../Sources/16F887/analog.c ../../Sources/16F887/delay.c ../../Sources/16F887/eeprom.c ../../Sources/16F887/i2c.c ../../Sources/16F887/interrupts.c ../../Sources/16F887/io.c ../../Sources/16F887/lcd.c ../../Sources/16F887/macros.c ../../Sources/16F887/nec.c ../../Sources/16F887/onewire.c ../../Sources/16F887/oscillator.c ../../Sources/16F887/pwm.c ../../Sources/16F887/rtc.c ../../Sources/16F887/timer.c ../../Sources/16F887/uart.c



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
	${MAKE}  -f nbproject/Makefile-PowerOFF.mk dist/${CND_CONF}/${IMAGE_TYPE}/16F887.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=16F887
# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/main.p1: main.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.p1.d 
	@${RM} ${OBJECTDIR}/main.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/main.p1 main.c 
	@-${MV} ${OBJECTDIR}/main.d ${OBJECTDIR}/main.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/main.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/analog.p1: ../../Sources/16F887/analog.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/analog.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/analog.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/analog.p1 ../../Sources/16F887/analog.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/analog.d ${OBJECTDIR}/_ext/1456006861/analog.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/analog.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/delay.p1: ../../Sources/16F887/delay.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/delay.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/delay.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/delay.p1 ../../Sources/16F887/delay.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/delay.d ${OBJECTDIR}/_ext/1456006861/delay.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/delay.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/eeprom.p1: ../../Sources/16F887/eeprom.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/eeprom.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/eeprom.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/eeprom.p1 ../../Sources/16F887/eeprom.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/eeprom.d ${OBJECTDIR}/_ext/1456006861/eeprom.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/eeprom.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/i2c.p1: ../../Sources/16F887/i2c.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/i2c.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/i2c.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/i2c.p1 ../../Sources/16F887/i2c.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/i2c.d ${OBJECTDIR}/_ext/1456006861/i2c.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/i2c.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/interrupts.p1: ../../Sources/16F887/interrupts.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/interrupts.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/interrupts.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/interrupts.p1 ../../Sources/16F887/interrupts.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/interrupts.d ${OBJECTDIR}/_ext/1456006861/interrupts.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/interrupts.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/io.p1: ../../Sources/16F887/io.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/io.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/io.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/io.p1 ../../Sources/16F887/io.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/io.d ${OBJECTDIR}/_ext/1456006861/io.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/io.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/lcd.p1: ../../Sources/16F887/lcd.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/lcd.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/lcd.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/lcd.p1 ../../Sources/16F887/lcd.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/lcd.d ${OBJECTDIR}/_ext/1456006861/lcd.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/lcd.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/macros.p1: ../../Sources/16F887/macros.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/macros.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/macros.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/macros.p1 ../../Sources/16F887/macros.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/macros.d ${OBJECTDIR}/_ext/1456006861/macros.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/macros.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/nec.p1: ../../Sources/16F887/nec.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/nec.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/nec.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/nec.p1 ../../Sources/16F887/nec.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/nec.d ${OBJECTDIR}/_ext/1456006861/nec.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/nec.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/onewire.p1: ../../Sources/16F887/onewire.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/onewire.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/onewire.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/onewire.p1 ../../Sources/16F887/onewire.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/onewire.d ${OBJECTDIR}/_ext/1456006861/onewire.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/onewire.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/oscillator.p1: ../../Sources/16F887/oscillator.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/oscillator.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/oscillator.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/oscillator.p1 ../../Sources/16F887/oscillator.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/oscillator.d ${OBJECTDIR}/_ext/1456006861/oscillator.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/oscillator.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/pwm.p1: ../../Sources/16F887/pwm.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/pwm.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/pwm.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/pwm.p1 ../../Sources/16F887/pwm.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/pwm.d ${OBJECTDIR}/_ext/1456006861/pwm.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/pwm.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/rtc.p1: ../../Sources/16F887/rtc.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/rtc.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/rtc.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/rtc.p1 ../../Sources/16F887/rtc.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/rtc.d ${OBJECTDIR}/_ext/1456006861/rtc.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/rtc.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/timer.p1: ../../Sources/16F887/timer.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/timer.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/timer.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/timer.p1 ../../Sources/16F887/timer.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/timer.d ${OBJECTDIR}/_ext/1456006861/timer.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/timer.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/uart.p1: ../../Sources/16F887/uart.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/uart.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/uart.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/uart.p1 ../../Sources/16F887/uart.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/uart.d ${OBJECTDIR}/_ext/1456006861/uart.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/uart.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
else
${OBJECTDIR}/main.p1: main.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.p1.d 
	@${RM} ${OBJECTDIR}/main.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/main.p1 main.c 
	@-${MV} ${OBJECTDIR}/main.d ${OBJECTDIR}/main.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/main.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/analog.p1: ../../Sources/16F887/analog.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/analog.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/analog.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/analog.p1 ../../Sources/16F887/analog.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/analog.d ${OBJECTDIR}/_ext/1456006861/analog.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/analog.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/delay.p1: ../../Sources/16F887/delay.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/delay.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/delay.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/delay.p1 ../../Sources/16F887/delay.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/delay.d ${OBJECTDIR}/_ext/1456006861/delay.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/delay.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/eeprom.p1: ../../Sources/16F887/eeprom.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/eeprom.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/eeprom.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/eeprom.p1 ../../Sources/16F887/eeprom.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/eeprom.d ${OBJECTDIR}/_ext/1456006861/eeprom.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/eeprom.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/i2c.p1: ../../Sources/16F887/i2c.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/i2c.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/i2c.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/i2c.p1 ../../Sources/16F887/i2c.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/i2c.d ${OBJECTDIR}/_ext/1456006861/i2c.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/i2c.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/interrupts.p1: ../../Sources/16F887/interrupts.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/interrupts.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/interrupts.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/interrupts.p1 ../../Sources/16F887/interrupts.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/interrupts.d ${OBJECTDIR}/_ext/1456006861/interrupts.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/interrupts.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/io.p1: ../../Sources/16F887/io.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/io.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/io.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/io.p1 ../../Sources/16F887/io.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/io.d ${OBJECTDIR}/_ext/1456006861/io.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/io.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/lcd.p1: ../../Sources/16F887/lcd.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/lcd.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/lcd.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/lcd.p1 ../../Sources/16F887/lcd.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/lcd.d ${OBJECTDIR}/_ext/1456006861/lcd.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/lcd.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/macros.p1: ../../Sources/16F887/macros.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/macros.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/macros.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/macros.p1 ../../Sources/16F887/macros.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/macros.d ${OBJECTDIR}/_ext/1456006861/macros.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/macros.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/nec.p1: ../../Sources/16F887/nec.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/nec.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/nec.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/nec.p1 ../../Sources/16F887/nec.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/nec.d ${OBJECTDIR}/_ext/1456006861/nec.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/nec.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/onewire.p1: ../../Sources/16F887/onewire.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/onewire.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/onewire.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/onewire.p1 ../../Sources/16F887/onewire.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/onewire.d ${OBJECTDIR}/_ext/1456006861/onewire.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/onewire.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/oscillator.p1: ../../Sources/16F887/oscillator.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/oscillator.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/oscillator.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/oscillator.p1 ../../Sources/16F887/oscillator.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/oscillator.d ${OBJECTDIR}/_ext/1456006861/oscillator.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/oscillator.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/pwm.p1: ../../Sources/16F887/pwm.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/pwm.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/pwm.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/pwm.p1 ../../Sources/16F887/pwm.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/pwm.d ${OBJECTDIR}/_ext/1456006861/pwm.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/pwm.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/rtc.p1: ../../Sources/16F887/rtc.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/rtc.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/rtc.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/rtc.p1 ../../Sources/16F887/rtc.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/rtc.d ${OBJECTDIR}/_ext/1456006861/rtc.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/rtc.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/timer.p1: ../../Sources/16F887/timer.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/timer.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/timer.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/timer.p1 ../../Sources/16F887/timer.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/timer.d ${OBJECTDIR}/_ext/1456006861/timer.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/timer.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1456006861/uart.p1: ../../Sources/16F887/uart.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/_ext/1456006861" 
	@${RM} ${OBJECTDIR}/_ext/1456006861/uart.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1456006861/uart.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_PowerOFF=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     -o ${OBJECTDIR}/_ext/1456006861/uart.p1 ../../Sources/16F887/uart.c 
	@-${MV} ${OBJECTDIR}/_ext/1456006861/uart.d ${OBJECTDIR}/_ext/1456006861/uart.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1456006861/uart.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
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
dist/${CND_CONF}/${IMAGE_TYPE}/16F887.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=dist/${CND_CONF}/${IMAGE_TYPE}/16F887.X.${IMAGE_TYPE}.map  -D__DEBUG=1  -DXPRJ_PowerOFF=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -std=c99 -gdwarf-3 -mstack=compiled:auto:auto        $(COMPARISON_BUILD) -Wl,--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml -o dist/${CND_CONF}/${IMAGE_TYPE}/16F887.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}     
	@${RM} dist/${CND_CONF}/${IMAGE_TYPE}/16F887.X.${IMAGE_TYPE}.hex 
	
else
dist/${CND_CONF}/${IMAGE_TYPE}/16F887.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=dist/${CND_CONF}/${IMAGE_TYPE}/16F887.X.${IMAGE_TYPE}.map  -DXPRJ_PowerOFF=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -std=c99 -gdwarf-3 -mstack=compiled:auto:auto     $(COMPARISON_BUILD) -Wl,--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml -o dist/${CND_CONF}/${IMAGE_TYPE}/16F887.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}     
	
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/PowerOFF
	${RM} -r dist/PowerOFF

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
