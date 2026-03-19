#ifndef INC_SERVO_H_
#define INC_SERVO_H_

#include <stdint.h>
#include "tim.h"

void Servo_Init(void);

void Servo_SetAngle(float Angle);


#endif /* INC_SERVO_H_ */
