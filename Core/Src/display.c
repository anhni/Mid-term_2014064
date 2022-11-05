/*
 * display.c
 *
 *  Created on: Nov 4, 2022
 *      Author: anhni
 */

#include "display.h"
#include "software_timer.h"
#include "button.h"
#include "main.h"

void display7SEG(int num){
	if(num == 0){
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
	}
	if(num == 1){
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
		}
	if(num == 2){
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		}
	if(num == 3){
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		}
	if(num == 4){
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		}
	if(num == 5){
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		}
	if(num == 6){
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		}
	if(num == 7){
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
		}
	if(num == 8){
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		}
	if(num == 9){
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		}
}
void fsm_simple_buttons_run () {
	switch(mode){
		case MODE_INIT:
			setTimer0(1000);
			mode = MODE_1;
		break;
		case MODE_WAITING:
			setTimer0(10000);
			mode = MODE_2;
		break;
		case MODE_1:
			display7SEG(counter);
			if(timer0_flag == 1){
				if(counter > 0){
					counter--;
					setTimer0(1000);
				}
			}
			if(is_Button0_Pressed()){
				counter = 0;
				mode = MODE_WAITING;
			}
			if(is_Button1_Pressed()){
				counter ++;
				mode = MODE_WAITING;
			}
			if(is_Button2_Pressed()){
				counter --;
				mode = MODE_WAITING;
			}
		break;
		case MODE_2:
			display7SEG(counter);
			if(is_Button0_Pressed()){
				counter = 0;
				mode = MODE_WAITING;
			}
			if(is_Button1_Pressed()){
				counter++;
				if(counter > 9) counter = 0;
				mode = MODE_WAITING;
			}
			if(is_Button1_Pressed_3s()){
				setTimer1(1000);
				mode = MODE_3;
			}
			if(is_Button2_Pressed()){
				counter--;
				if(counter < 0) counter = 9;
				mode = MODE_WAITING;
			}
			if(is_Button2_Pressed_3s()){
				setTimer2(1000);
				mode = MODE_4;
			}
			if(timer0_flag == 1){
				mode = MODE_INIT;
			}
		break;
		case MODE_3:
			display7SEG(counter);

			if(timer1_flag == 1){
				counter ++;
				if(counter > 9) counter = 0;
				mode = MODE_WAITING;
			}
		break;
		case MODE_4:
			display7SEG(counter);

			if(timer2_flag == 1){
				counter --;
				if(counter < 0) counter = 9;
				mode = MODE_WAITING;
			}
		break;
	}
}
void led_blinky (){
	switch(mode_led){
	case MODE_LED_INIT:
		setTimer3(500);
		mode_led = MODE_LED_BLINKY;
	break;
	case MODE_LED_BLINKY:
		if(timer3_flag == 1){
			HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
			setTimer3(500);
		}
	break;
	}
}
//void setEnPin(int num){
//	if(num == 0){
//		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
//		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
//		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
//		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
//	}
//	if(num == 1){
//		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
//		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
//		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
//		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
//		}
//	if(num == 2){
//		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
//		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
//		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
//		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
//		}
//	if(num == 3){
//		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
//		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
//		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
//		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
//		}
//}

//int led_buffer [4] = {1 , 2 , 3 , 4};
//void update7SEG ( int index ) {
//	switch ( index ) {
//	case 0:
//		setEnPin(index);
//		display7SEG(led_buffer [0]);
//		// Display the first 7 SEG with led_buffer [0]
//		break ;
//	case 1:
//		setEnPin(index);
//		display7SEG(led_buffer [1]);
//		// Display the second 7 SEG with led_buffer [1]
//		break ;
//	case 2:
//		setEnPin(index);
//		display7SEG(led_buffer [2]);
//		// Display the third 7 SEG with led_buffer [2]
//		break ;
//	case 3:
//		setEnPin(index);
//		display7SEG(led_buffer [3]);
//		// Display the forth 7 SEG with led_buffer [3]
//		break ;
//	default :
//		break ;
//	}
//}
//
//void updateClockBuffer(int time, int time1){
//		led_buffer [0] = time/10;
//		led_buffer [1] = time%10;
//		led_buffer [2] = time1/10;
//		led_buffer [3] = time1%10;
//}
//
//void display_led(){
//	switch(mode){
//		case MODE_INIT:
//			  setTimer3(250);
//			  setTimer0(1000);
//			  mode = MODE_1;
//			  led01 = red_time;
//			  led23 = green_time;
//		break;
//		case MODE_1:
//			fsm_automatic_run();
//			updateClockBuffer(led01, led23);
//			update7SEG(index_led);
//
//			if(timer0_flag == 1){
//				led01--;
//				led23--;
//				setTimer0(1000);
//
//			}
//			if(timer3_flag == 1){
//				index_led++;
//				if(index_led >= 4) index_led = 0;
//				setTimer3(250);
//			}
//			if(is_Button0_Pressed()){
//				mode = MODE_2;
//			}
//
//		break;
//		case MODE_2:
//			led01 = mode;
//			led23 = red_time;
//			updateClockBuffer(led01, led23);
//			update7SEG(index_led);
//
//			HAL_GPIO_WritePin(GREEN_GPIO_Port, GREEN_Pin, SET);
//			HAL_GPIO_WritePin(AMBER_GPIO_Port, AMBER_Pin, SET);
//			HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, SET);
//			HAL_GPIO_WritePin(AMBER1_GPIO_Port, AMBER1_Pin, SET);
//
//			if(timer3_flag == 1){
//				HAL_GPIO_TogglePin(RED_GPIO_Port, RED_Pin);
//				HAL_GPIO_TogglePin(RED1_GPIO_Port, RED1_Pin);
//				index_led++;
//				if(index_led >= 4) index_led = 0;
//				setTimer3(250);
//			}
////			if(is_button_pressed(0)){
////				mode = MODE_3;
////			}
//			if(is_Button0_Pressed()){
//				mode = MODE_3;
//			}
//		break;
//		case MODE_3:
//			led01 = mode;
//			led23 = green_time;
//			updateClockBuffer(led01, led23);
//			update7SEG(index_led);
//
//			HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, SET);
//			HAL_GPIO_WritePin(AMBER_GPIO_Port, AMBER_Pin, SET);
//			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
//			HAL_GPIO_WritePin(AMBER1_GPIO_Port, AMBER1_Pin, SET);
//
//			if(timer3_flag == 1){
//				HAL_GPIO_TogglePin(GREEN_GPIO_Port, GREEN_Pin);
//				HAL_GPIO_TogglePin(GREEN1_GPIO_Port, GREEN1_Pin);
//				index_led++;
//				if(index_led >= 4) index_led = 0;
//				setTimer3(250);
//			}
////			if(is_button_pressed(0)){
////				mode = MODE_4;
////			}
//			if(is_Button0_Pressed()){
//				mode = MODE_4;
//			}
//		break;
//		case MODE_4:
//			led01 = mode;
//			led23 = green_time;
//			updateClockBuffer(led01, led23);
//			update7SEG(index_led);
//
//			HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, SET);
//			HAL_GPIO_WritePin(GREEN_GPIO_Port, GREEN_Pin, SET);
//			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
//			HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, SET);
//
//			if(timer3_flag == 1){
//				HAL_GPIO_TogglePin(AMBER_GPIO_Port, AMBER_Pin);
//				HAL_GPIO_TogglePin(AMBER1_GPIO_Port, AMBER1_Pin);
//				index_led++;
//				if(index_led >= 4) index_led = 0;
//				setTimer3(250);
//			}
////			if(is_button_pressed(0)){
////				mode = MODE_INIT;
////			}
//			if(is_Button0_Pressed()){
//				mode = MODE_INIT;
//			}
//		break;
//	}
//}

