################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Lib/Src/command.c \
../Lib/Src/ws2812.c 

OBJS += \
./Lib/Src/command.o \
./Lib/Src/ws2812.o 

C_DEPS += \
./Lib/Src/command.d \
./Lib/Src/ws2812.d 


# Each subdirectory must supply rules for building sources it contributes
Lib/Src/%.o Lib/Src/%.su Lib/Src/%.cyclo: ../Lib/Src/%.c Lib/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../App/Inc -I../Lib/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Lib-2f-Src

clean-Lib-2f-Src:
	-$(RM) ./Lib/Src/command.cyclo ./Lib/Src/command.d ./Lib/Src/command.o ./Lib/Src/command.su ./Lib/Src/ws2812.cyclo ./Lib/Src/ws2812.d ./Lib/Src/ws2812.o ./Lib/Src/ws2812.su

.PHONY: clean-Lib-2f-Src

