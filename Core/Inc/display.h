/*
 * display.h
 *
 *  Created on: Nov 4, 2022
 *      Author: anhni
 */

#ifndef INC_DISPLAY_H_
#define INC_DISPLAY_H_

#include "global.h"
#include "software_timer.h"
//#include "input_processing.h"
//#include "input_reading.h"
#include "button.h"
void fsm_simple_buttons_run ();
void update7SEG(int index);
void display_led();

#endif /* INC_DISPLAY_H_ */
