#include "Servo.h"

void Servo_Init(void){
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_3);
}
void Servo_SetAngle(float Angle){
	if(Angle < 0) Angle = 0;
	if(Angle > 180) Angle = 180;
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_3,Angle / 180  * 2000 + 500);
}
