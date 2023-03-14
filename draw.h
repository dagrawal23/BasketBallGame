/*
 * draw.h
 *
 *  Created on: Dec 13, 2022
 *      Author: dagrawal23, jdhunt
 */

#ifndef DRAW_H_
#define DRAW_H_
#include "main.h"


extern QueueHandle_t LightData;
extern TaskHandle_t Task_Draw_Images;
void task_draw_images();



#endif /* DRAW_H_ */
