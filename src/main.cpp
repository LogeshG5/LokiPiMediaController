//============================================================================
// Name        : HelloWorld.cpp
// Author      : Loki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Printer.h"
#include "Factory.h"
#include "Player.h"
#include "GPIOUIController.h"
#include "OMXVideoPlayerController.h"
#include <wiringPi.h>
using namespace std;

UIController* uiController;


void fnPlay()
{
	uiController->play();
	delay(1000);
}

void registerCallbacks()
{
	wiringPiSetup();
	wiringPiISR(1, INT_EDGE_FALLING, *fnPlay);
}

int main() {

	uiController = Factory::getUIController();/*getUIControllerToControl(playerController);*/

	registerCallbacks();

	uiController->play();

	for(;;)
	{
		delay(1000);
	}

	delete(uiController);

	return 0;
}
