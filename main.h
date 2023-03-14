/*
 * main.h
 *
 *  Created on: Dec 14, 2022
 *      Author: dagrawal23, jdhunt
 */

#ifndef MAIN_H_
#define MAIN_H_
#include "msp.h"
#include "msp432p401r.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <FreeRTOS.h>
#include <task.h>
#include <semphr.h>
#include <math.h>
#include "lcd.h"
#include "msp.h"
#include "images.h"
#include "i2c.h"
#include "draw.h"
#include "accelerometer.h"
#include "buzzer.h"
#include "light.h"
#include <stdbool.h>
#include "ece353.h"


void init(void);

#endif /* MAIN_H_ */
