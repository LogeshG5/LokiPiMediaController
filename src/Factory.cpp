/*
 * Factory.cpp
 *
 *  Created on: 30-Jul-2014
 *      Author: loki
 */



#include "PlayerController.h"
#include "UIController.h"
#include "OMXVideoPlayerController.h"
#include "GPIOUIController.h"
#include "Factory.h"


	PlayerController* Factory::getPlayerController()
	{
		return new OMXVideoPlayerController();
	}

	UIController* Factory::getUIControllerToControl(PlayerController* playerController)
	{
		return new GPIOUIController(playerController);
	}

	UIController* Factory::getUIController()
	{
		return new GPIOUIController();
	}

