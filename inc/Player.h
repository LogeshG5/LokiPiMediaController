/*
 * Player.h
 *
 *  Created on: 30-Jul-2014
 *      Author: loki
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include "PlayerController.h"
#include "UIController.h"

class Player
{
public:

	UIController* uiController;

	Player(UIController*);
	Player();
	~Player();
};


#endif /* PLAYER_H_ */
