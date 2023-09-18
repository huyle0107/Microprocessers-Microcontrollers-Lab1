/*
 * LedStatus.c
 *
 *  Created on: Sep 18, 2023
 *      Author: Admin
 */

#include "main.h"
#include "LedStatus.h"

void ledStatus(int counter)
{
	HAL_Init();
	switch (counter)
	{
		case 9:
			HAL_GPIO_WritePin(GPIOA, YELLOW_LED_1_Pin | GREEN_LED_1_Pin | RED_LED_2_Pin | YELLOW_LED_2_Pin, RESET);
			HAL_GPIO_WritePin(GPIOA, RED_LED_1_Pin | GREEN_LED_2_Pin, SET);
			break;
		case 6:
			HAL_GPIO_WritePin(GREEN_LED_2_GPIO_Port, GREEN_LED_2_Pin, RESET);
			HAL_GPIO_WritePin(YELLOW_LED_2_GPIO_Port, YELLOW_LED_2_Pin, SET);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOA, GREEN_LED_1_Pin | RED_LED_2_Pin, SET);
			HAL_GPIO_WritePin(GPIOA, RED_LED_1_Pin | YELLOW_LED_2_Pin, RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(YELLOW_LED_1_GPIO_Port, YELLOW_LED_1_Pin, SET);
			HAL_GPIO_WritePin(GREEN_LED_1_GPIO_Port, GREEN_LED_1_Pin, RESET);
			break;
		default:
			break;
	}
}
