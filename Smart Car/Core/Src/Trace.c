#include "main.h"
#include "Car.h"

#define LL HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_12)
#define LM HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_13)
#define RM HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_11)
#define RR HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_12)

void Trace_task(void){
	if( LM ==0 && RM ==0) Go_Ahead();
	if( LM ==0 && RM ==0 &&LL ==0 && RR ==0) Car_Stop();
	if( LM ==1 && RM ==0) Turn_Right();
	if( LM ==0 && RM ==1) Turn_Left();
	if( LL ==0 && RM ==1) Turn_InPlace_Left();
	if( RR ==0 && LM ==1) Turn_InPlace_Right();
}
