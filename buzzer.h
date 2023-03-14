/*
 * buzzer.h
 *
 *  Created on: Dec 14, 2022
 *      Author: dagrawal23, jdhunt
 */

#ifndef BUZZER_H_
#define BUZZER_H_

#include "main.h"

extern SemaphoreHandle_t Sem_Score;
extern SemaphoreHandle_t Sem_Win;
extern TaskHandle_t scoreSoundTaskHandle;
extern TaskHandle_t winSoundTaskHandle;

void buzzerInit();
void task_scoresound(void *pvParameters);
void task_winsound(void *pvParameters);


#endif /* BUZZER_H_ */
