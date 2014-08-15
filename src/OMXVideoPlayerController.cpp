/*LICENSE*/

#include "PlayerController.h"
#include "OMXVideoPlayerController.h"
#include<iostream>
#include <string>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

OMXVideoPlayerController::OMXVideoPlayerController() {

	mPipeFile = "/tmp/omxfifo";
	initialize();
}

OMXVideoPlayerController::OMXVideoPlayerController(string l_pipeFile) {

	mPipeFile = l_pipeFile.c_str();
	initialize();

}

void OMXVideoPlayerController::initialize() {

	mkfifo(mPipeFile, 0666);
	initializeCommand();
}

OMXVideoPlayerController::~OMXVideoPlayerController() {

	// TODO: To fix pipe file deletion.
	cout << "unlinking";
	unlink(mPipeFile);
}

void OMXVideoPlayerController::sendCommand(const char* command) {

	char commandString[100] = "echo -n ";

	strcat(commandString, command);
	strcat(commandString, " > ");
	strcat(commandString, mPipeFile);

	cout << endl << "sending \"" << commandString <<"\"...";

	system(commandString);

}

void OMXVideoPlayerController::initializeCommand() {
	command[ePlay] = "p";
	command[ePause] = "p";
	command[eIncreaseVolume] = "+";
	command[eDecreaseVolume] = "-";
	command[eFastForward] = "p";
	command[eRewind] = "p";
}

const char* OMXVideoPlayerController::getCommand(tenMediaCommand MediaCommand){
	return command[MediaCommand];
}

void OMXVideoPlayerController::play() {
	sendCommand(getCommand(ePlay));
}
void OMXVideoPlayerController::pause() {
	sendCommand(getCommand(ePause));
}
void OMXVideoPlayerController::increaseVolume() {
	sendCommand(getCommand(eIncreaseVolume));
}
void OMXVideoPlayerController::decreaseVolume() {
	sendCommand(getCommand(eDecreaseVolume));
}
void OMXVideoPlayerController::fastForward() {
	sendCommand(getCommand(eFastForward));
}
void OMXVideoPlayerController::rewind() {
	sendCommand(getCommand(eRewind));
}
