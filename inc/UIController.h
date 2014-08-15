/*
 * UIController.h
 *
 *  Created on: 30-Jul-2014
 *      Author: loki
 */

#ifndef UICONTROLLER_H_
#define UICONTROLLER_H_

#include "PlayerController.h"
#include "types.h"
#include <map>
using namespace std;
class UIController
{
protected:
	// map to hold command vs controlstring
	map <tenMediaCommand, tenControlSignal> command;
	PlayerController* playerController;

	virtual tenControlSignal getCommand(tenMediaCommand)=0;
	virtual void initializeCommand()=0;


public:

	virtual void play()=0;
	virtual void pause()=0;
	virtual void increaseVolume()=0;
	virtual void decreaseVolume()=0;
	virtual void fastForward()=0;
	virtual void rewind()=0;
	virtual void hugeFastForward()=0;
	virtual void hugeRewind()=0;


	UIController();
	virtual ~UIController();

};



#endif /* UICONTROLLER_H_ */
