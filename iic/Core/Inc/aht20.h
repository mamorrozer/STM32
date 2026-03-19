/*
 * aht20.h
 *
 *  Created on: Nov 9, 2025
 *      Author: Song
 */

#ifndef INC_AHT20_H_
#define INC_AHT20_H_

#include "i2c.h"

void AHT_Red(float *Temperature,float *Humidity);
void AHT20_Init();

#endif /* INC_AHT20_H_ */
