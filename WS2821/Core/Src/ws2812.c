#include "ws2812.h"
#define Code0     30
#define Code1     60
#define CodeReset 0

void ws2812_Update(){
	static uint16_t data[]={
			Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,
						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,

						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,
						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,

						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,
						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,

						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,
						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,

						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,
						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,

						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,
						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,

						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,
						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,

						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,
						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,

						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,
						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,

						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,
						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,

						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,
						Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,
									Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,

									Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,
			CodeReset
	};

	HAL_TIM_PWM_Start_DMA(&htim3, TIM_CHANNEL_1, (uint32_t *)data, sizeof(data)/sizeof(uint16_t));
}

//Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,
//			Code1, Code1, Code1, Code1, Code1, Code1, Code1, Code1,
//			Code0, Code0, Code0, Code0, Code0, Code0, Code0, Code0,
//			CodeReset
//			Code1, Code1, Code1, Code1, Code1, Code1, Code1, Code1,
//			Code1, Code1, Code1, Code1, Code1, Code1, Code1, Code1,
//			Code1, Code1, Code1, Code1, Code1, Code1, Code1, Code1,
//
//			Code1, Code1, Code1, Code1, Code1, Code1, Code1, Code1,
//			Code1, Code1, Code1, Code1, Code1, Code1, Code1, Code1,
//			Code1, Code1, Code1, Code1, Code1, Code1, Code1, Code1,
//
//			Code1, Code1, Code1, Code1, Code1, Code1, Code1, Code1,
//						Code1, Code1, Code1, Code1, Code1, Code1, Code1, Code1,
//						Code1, Code1, Code1, Code1, Code1, Code1, Code1, Code1,
//
//						Code1, Code1, Code1, Code1, Code1, Code1, Code1, Code1,
//									Code1, Code1, Code1, Code1, Code1, Code1, Code1, Code1,
//									Code1, Code1, Code1, Code1, Code1, Code1, Code1, Code1,
//
//									Code1, Code1, Code1, Code1, Code1, Code1, Code1, Code1,
//												Code1, Code1, Code1, Code1, Code1, Code1, Code1, Code1,
//												Code1, Code1, Code1, Code1, Code1, Code1, Code1, Code1,
