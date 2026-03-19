################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Lib/Src/font.c \
../Lib/Src/kk_knob.c \
../Lib/Src/kk_rtc.c \
../Lib/Src/oled.c 

OBJS += \
./Lib/Src/font.o \
./Lib/Src/kk_knob.o \
./Lib/Src/kk_rtc.o \
./Lib/Src/oled.o 

C_DEPS += \
./Lib/Src/font.d \
./Lib/Src/kk_knob.d \
./Lib/Src/kk_rtc.d \
./Lib/Src/oled.d 


# Each subdirectory must supply rules for building sources it contributes
Lib/Src/%.o Lib/Src/%.su Lib/Src/%.cyclo: ../Lib/Src/%.c Lib/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../App/Inc -I../Lib/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Lib-2f-Src

clean-Lib-2f-Src:
	-$(RM) ./Lib/Src/font.cyclo ./Lib/Src/font.d ./Lib/Src/font.o ./Lib/Src/font.su ./Lib/Src/kk_knob.cyclo ./Lib/Src/kk_knob.d ./Lib/Src/kk_knob.o ./Lib/Src/kk_knob.su ./Lib/Src/kk_rtc.cyclo ./Lib/Src/kk_rtc.d ./Lib/Src/kk_rtc.o ./Lib/Src/kk_rtc.su ./Lib/Src/oled.cyclo ./Lib/Src/oled.d ./Lib/Src/oled.o ./Lib/Src/oled.su

.PHONY: clean-Lib-2f-Src

