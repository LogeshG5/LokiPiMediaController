/*
 * PlayerController.h
 *
 *  Created on: 30-Jul-2014
 *      Author: loki
 */

#ifndef PLAYERCONTROLLER_H_
#define PLAYERCONTROLLER_H_


#include "types.h"
#include <map>
using namespace std;

class PlayerController
{
protected:
	map <tenMediaCommand, const char*> command;
	virtual const char* getCommand(tenMediaCommand)=0;
	virtual void initializeCommand()=0;

public:
	virtual void play()=0;
	virtual void pause()=0;
	virtual void increaseVolume()=0;
	virtual void decreaseVolume()=0;
	virtual void fastForward()=0;
	virtual void rewind()=0;


	PlayerController();
	virtual ~PlayerController();


	//virtual tenControlSignal getCommand(tenMediaCommand)=0;
};



#endif /* PLAYERCONTROLLER_H_ */
