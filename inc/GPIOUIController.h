/*
 * GPIOUIController.h
 *
 *  Created on: 30-Jul-2014
 *      Author: loki
 */

#ifndef GPIOUICONTROLLER_H_
#define GPIOUICONTROLLER_H_


#include "UIController.h"

class GPIOUIController : public UIController
{
private:
	virtual tenControlSignal getCommand(tenMediaCommand);
	virtual void initializeCommand();
	void registerCallbacks();

public:
	GPIOUIController();
	GPIOUIController(PlayerController* playerController);
	~GPIOUIController();

	virtual void play();
	virtual void pause();
	virtual void increaseVolume();
	virtual void decreaseVolume();
	virtual void fastForward();
	virtual void rewind();
	virtual void hugeFastForward();
	virtual void hugeRewind();

};



#endif /* GPIOUICONTROLLER_H_ */
