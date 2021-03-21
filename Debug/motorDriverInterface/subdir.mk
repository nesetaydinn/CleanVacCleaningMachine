################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../motorDriverInterface/motorDriverInterface.c 

OBJS += \
./motorDriverInterface/motorDriverInterface.o 

C_DEPS += \
./motorDriverInterface/motorDriverInterface.d 


# Each subdirectory must supply rules for building sources it contributes
motorDriverInterface/motorDriverInterface.o: ../motorDriverInterface/motorDriverInterface.c motorDriverInterface/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I"C:/Users/nesat/STM32CubeIDE/workspace_1.6.0/cleaningRobotf4/analogValuesController" -I"C:/Users/nesat/STM32CubeIDE/workspace_1.6.0/cleaningRobotf4/buttonController" -I"C:/Users/nesat/STM32CubeIDE/workspace_1.6.0/cleaningRobotf4/lcdDriver" -I"C:/Users/nesat/STM32CubeIDE/workspace_1.6.0/cleaningRobotf4/motorDriverInterface" -I"C:/Users/nesat/STM32CubeIDE/workspace_1.6.0/cleaningRobotf4/taskManagerInterface" -I"C:/Users/nesat/STM32CubeIDE/workspace_1.6.0/cleaningRobotf4/ComputerInterface" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"motorDriverInterface/motorDriverInterface.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

