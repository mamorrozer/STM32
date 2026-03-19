/*
 * Motor.h
 *
 *  Created on: Mar 10, 2026
 *      Author: Song
 */

#ifndef INC_MOTOR_H_
#define INC_MOTOR_H_
#include <stdint.h>

void Motor_Init(void);
void Motor_SetRightSpeed(int8_t Speed);
void Motor_SetLeftSpeed(int8_t Speed);


#endif /* INC_MOTOR_H_ */
