/*
 * Factory.h
 *
 *  Created on: 30-Jul-2014
 *      Author: loki
 */

#ifndef FACTORY_H_
#define FACTORY_H_

#include "PlayerController.h"
#include "UIController.h"

class Factory
{
public:
	Factory();
	~Factory();

	static PlayerController* getPlayerController();
	static UIController* getUIController();
	static UIController* getUIControllerToControl(PlayerController*);
};




#endif /* FACTORY_H_ */
