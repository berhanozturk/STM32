################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
led_on.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
led_on.list \


# All Target
all: led_on.elf secondary-outputs

# Tool invocations
led_on.elf: $(OBJS) $(USER_OBJS) C:\Users\Berhan\Desktop\Berhan\kurslar\Embedded-C-master\my_workspace\target\led_on\STM32F100RBTX_FLASH.ld
	arm-none-eabi-gcc -o "led_on.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\Berhan\Desktop\Berhan\kurslar\Embedded-C-master\my_workspace\target\led_on\STM32F100RBTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="led_on.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

led_on.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "led_on.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
