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
using namespace std;

int main() {

	UIController* uiController = Factory::getUIController();/*getUIControllerToControl(playerController);*/

	uiController->play();

	delete(uiController);

	return 0;
}
