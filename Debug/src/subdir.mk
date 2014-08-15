################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Factory.cpp \
../src/GPIOUIController.cpp \
../src/OMXVideoPlayerController.cpp \
../src/Player.cpp \
../src/PlayerController.cpp \
../src/Printer.cpp \
../src/UIController.cpp \
../src/main.cpp 

OBJS += \
./src/Factory.o \
./src/GPIOUIController.o \
./src/OMXVideoPlayerController.o \
./src/Player.o \
./src/PlayerController.o \
./src/Printer.o \
./src/UIController.o \
./src/main.o 

CPP_DEPS += \
./src/Factory.d \
./src/GPIOUIController.d \
./src/OMXVideoPlayerController.d \
./src/Player.d \
./src/PlayerController.d \
./src/Printer.d \
./src/UIController.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/loki/workspace/LokiPiMediaController/inc" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


