/*
 * types.h
 *
 *  Created on: 13-Aug-2014
 *      Author: loki
 */

#ifndef TYPES_H_
#define TYPES_H_

enum tenMediaCommand {
	ePlay = 0,
	ePause,
	eIncreaseVolume,
	eDecreaseVolume,
	eFastForward,
	eRewind,
	eNext,
	ePrevious,
	eMute,
};

enum tenControlSignal {
	eGPIO17 = 0,
	eGPIO18,
	eGPIO19,
	eGPIO20,
	eGPIO21,
	eIR1,
	eIR2,
	eIR3,
	eIR4,

// command to Omx

};


#endif /* TYPES_H_ */
