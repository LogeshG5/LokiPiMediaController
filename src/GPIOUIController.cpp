/*LICENSE*/

#include "UIController.h"
#include "GPIOUIController.h"
#include "Factory.h"
#include "types.h"
#include <iostream>
using namespace std;

GPIOUIController::GPIOUIController() {
	playerController = Factory::getPlayerController();
	initializeCommand();
}

GPIOUIController::GPIOUIController(PlayerController* l_playerController) {
	this->playerController = l_playerController;
	initializeCommand();
}

GPIOUIController::~GPIOUIController() {
	//	playerController = Factory::getPlayerController(); //new OMXVideoPlayerController();
	if(playerController)
		delete(playerController);
}

void GPIOUIController::play() {
	cout << "echo ";
	playerController->play();
}
void GPIOUIController::pause() {
	cout << "echo ";
	playerController->pause();
}
void GPIOUIController::increaseVolume() {
	cout << "echo ";
	playerController->increaseVolume();
}
void GPIOUIController::decreaseVolume() {
	cout << "echo ";
	playerController->decreaseVolume();
}
void GPIOUIController::fastForward() {
	cout << "echo ";
	playerController->fastForward();
}
void GPIOUIController::rewind() {
	cout << "echo ";
	playerController->rewind();
}

void GPIOUIController::hugeFastForward() {
	cout << "echo ";
	playerController->fastForward();
}
void GPIOUIController::hugeRewind() {
	cout << "echo ";
	playerController->rewind();
}

void GPIOUIController::initializeCommand() {
	command[ePause] = eGPIO17;
	command[eMute] = eGPIO18;
	command[eMute] = eGPIO18;
}

tenControlSignal GPIOUIController::getCommand(tenMediaCommand MediaCommand) {
	return command[MediaCommand];
}

void GPIOUIController::registerCallbacks() {

	//wiringpi wiringPiISR (0, INT_EDGE_FALLING, &this->play() ) ;

	// wiringPiISR( getCommand(ePlay), INT_.., &this->play() );

}
