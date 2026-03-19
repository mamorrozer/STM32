#include "Motor.h"
#include "tim.h"

void Motor_Init(void){
	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_2);
}
void Motor_SetLeftSpeed(int8_t Speed){
	if(Speed>0){
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
		__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,Speed);
	}
	else if(Speed==0){
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
		__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,Speed);
	}
	else{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
		__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,-Speed);
	}
}

void Motor_SetRightSpeed(int8_t Speed){
	if(Speed>0){
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
		__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_2,Speed);
	}
	else if(Speed==0){
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
		__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_2,Speed);
	}
	else{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
		__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_2,-Speed);
	}
}
