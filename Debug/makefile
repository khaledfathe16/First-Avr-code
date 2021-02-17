################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
FirstAvr.lss \

FLASH_IMAGE += \
FirstAvr.hex \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: FirstAvr.elf secondary-outputs

# Tool invocations
FirstAvr.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,FirstAvr.map -mmcu=atmega32 -o "FirstAvr.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

FirstAvr.lss: FirstAvr.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S FirstAvr.elf  >"FirstAvr.lss"
	@echo 'Finished building: $@'
	@echo ' '

FirstAvr.hex: FirstAvr.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex FirstAvr.elf  "FirstAvr.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: FirstAvr.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 FirstAvr.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: FirstAvr.elf
	@echo 'Invoking: AVRDude'
	C:\Users\Algo\Desktop\IMT_SDK_Win_32\WinAVR\bin\avrdude -pm32 -cusbasp -Uflash:w:FirstAvr.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) FirstAvr.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
