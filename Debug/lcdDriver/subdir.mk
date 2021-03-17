################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lcdDriver/lcdDriverInterface.c \
../lcdDriver/lcd_i2cModule.c 

OBJS += \
./lcdDriver/lcdDriverInterface.o \
./lcdDriver/lcd_i2cModule.o 

C_DEPS += \
./lcdDriver/lcdDriverInterface.d \
./lcdDriver/lcd_i2cModule.d 


# Each subdirectory must supply rules for building sources it contributes
lcdDriver/lcdDriverInterface.o: ../lcdDriver/lcdDriverInterface.c lcdDriver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I"C:/Users/nesat/STM32CubeIDE/workspace_1.6.0/cleaningRobotf4/analogValuesController" -I"C:/Users/nesat/STM32CubeIDE/workspace_1.6.0/cleaningRobotf4/buttonController" -I"C:/Users/nesat/STM32CubeIDE/workspace_1.6.0/cleaningRobotf4/lcdDriver" -I"C:/Users/nesat/STM32CubeIDE/workspace_1.6.0/cleaningRobotf4/motorDriverInterface" -I"C:/Users/nesat/STM32CubeIDE/workspace_1.6.0/cleaningRobotf4/taskManagerInterface" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"lcdDriver/lcdDriverInterface.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
lcdDriver/lcd_i2cModule.o: ../lcdDriver/lcd_i2cModule.c lcdDriver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I"C:/Users/nesat/STM32CubeIDE/workspace_1.6.0/cleaningRobotf4/analogValuesController" -I"C:/Users/nesat/STM32CubeIDE/workspace_1.6.0/cleaningRobotf4/buttonController" -I"C:/Users/nesat/STM32CubeIDE/workspace_1.6.0/cleaningRobotf4/lcdDriver" -I"C:/Users/nesat/STM32CubeIDE/workspace_1.6.0/cleaningRobotf4/motorDriverInterface" -I"C:/Users/nesat/STM32CubeIDE/workspace_1.6.0/cleaningRobotf4/taskManagerInterface" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"lcdDriver/lcd_i2cModule.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

