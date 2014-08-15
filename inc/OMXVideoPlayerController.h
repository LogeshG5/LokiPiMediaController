/*
 * OMXVideoPlayerController.h
 *
 *  Created on: 30-Jul-2014
 *      Author: loki
 */

#ifndef OMXVIDEOPLAYERCONTROLLER_H_
#define OMXVIDEOPLAYERCONTROLLER_H_


#include "PlayerController.h"
#include <string>

using namespace std;

class OMXVideoPlayerController : public PlayerController
{
private:
	const char* mPipeFile;

	virtual const char* getCommand(tenMediaCommand MediaCommand);
	virtual void initializeCommand();
	void initialize();
	void sendCommand(const char* );


public:
	OMXVideoPlayerController();
	OMXVideoPlayerController(string l_pipeFile);
	~OMXVideoPlayerController();

	void play();
	void pause();
	void increaseVolume();
	void decreaseVolume();
	void fastForward();
	void rewind();


};


#endif /* OMXVIDEOPLAYERCONTROLLER_H_ */
