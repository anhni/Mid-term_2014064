
#include "button.h"
#include "main.h"

int button1_flag=0;
int button2_flag=0;
int button0_flag=0;

int button1_3s_flag=0;
int button2_3s_flag=0;
int button0_1s_flag=0;

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int KeyReg4 = NORMAL_STATE;
int KeyReg5 = NORMAL_STATE;
int KeyReg6 = NORMAL_STATE;
int KeyReg7 = NORMAL_STATE;

int KeyReg8 = NORMAL_STATE;
int KeyReg9 = NORMAL_STATE;
int KeyReg10 = NORMAL_STATE;
int KeyReg11 = NORMAL_STATE;
int downtime = 100;
int counter_time = 0;
int TimeOutForKeyPress =  10;
////////////press////////////
int is_Button1_Pressed(){
	if(button1_flag == 1)
	{
		button1_flag =0;
		return 1;
	}
	return 0;
}
int is_Button2_Pressed(){
	if(button2_flag == 1)
	{
		button2_flag =0;
		return 1;
	}
	return 0;
}
int is_Button0_Pressed(){
	if(button0_flag == 1)
	{
		button0_flag =0;
		return 1;
	}
	return 0;
}

/////////press1s//////////
int is_Button0_Pressed_1s(){
	if(button0_1s_flag == 1)
	{
		button0_1s_flag =0;
		return 1;
	}
	return 0;
}
int is_Button1_Pressed_3s(){
	if(button1_3s_flag == 1)
	{
		button1_3s_flag =0;
		return 1;
	}
	return 0;
}
int is_Button2_Pressed_3s(){
	if(button2_3s_flag == 1)
	{
		button2_3s_flag = 0;
		return 1;
	}
	return 0;
}


///////////subkey////////////

void subKeyProcess_1(){
	button1_flag=1;
}
void subKeyProcess_2(){
	button2_flag=1;
}
void subKeyProcess_0(){
	button0_flag=1;
}
void getKeyInput_1(){
  KeyReg2 = KeyReg1;
  KeyReg1 = KeyReg0;
  KeyReg0 = HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port, BUTTON_1_Pin);
  if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
	if (KeyReg2 != KeyReg3){
		KeyReg3 = KeyReg0;

		if (KeyReg3 == PRESSED_STATE){
			button1_flag = 1;
			TimeOutForKeyPress = 100;
		}
    }else{
    	if (KeyReg3 == PRESSED_STATE){
    		if( counter_time < 300 ) {
    			counter_time++;
    		}else {
    			button1_flag = 0;
    			button1_3s_flag = 1;
    		}
    	}else{
    		TimeOutForKeyPress --;
    		if (TimeOutForKeyPress == 0){
    			KeyReg3 = NORMAL_STATE;
    			counter_time = 0;
    			button1_3s_flag = 0;
    			button1_flag = 0;
    		}
    	}
	}
  }
}


void getKeyInput_2(){
  KeyReg6 = KeyReg5;
  KeyReg5 = KeyReg4;
  KeyReg4 = HAL_GPIO_ReadPin(BUTTON_2_GPIO_Port, BUTTON_2_Pin);
  if ((KeyReg5 == KeyReg4) && (KeyReg5 == KeyReg6)){
	  if (KeyReg6 != KeyReg7){
		  KeyReg7 = KeyReg6;

		  if (KeyReg7 == PRESSED_STATE){
			  button2_flag = 1;
			  TimeOutForKeyPress = 100;
		  }
	  }else{
		  if(KeyReg7 == PRESSED_STATE){
	    	  if( counter_time < 300 ) {
	    		  counter_time++;
	    	  }else {
	            button2_3s_flag = 1;
	            button2_flag = 0;
	    	  }
		  }
		  else{
			  TimeOutForKeyPress --;
			  if (TimeOutForKeyPress == 0){
		          KeyReg3 = NORMAL_STATE;
		          counter_time = 0;
		          button2_3s_flag = 0;
		          button2_flag = 0;
			  }
		  }
	  }
  }
}

void getKeyInput_0(){
  KeyReg10 = KeyReg9;
  KeyReg9 = KeyReg8;
  KeyReg8 = HAL_GPIO_ReadPin(BUTTON_0_GPIO_Port, BUTTON_0_Pin);
  if ((KeyReg9 == KeyReg8) && (KeyReg9 == KeyReg10)){
    if (KeyReg10 != KeyReg11){
      KeyReg11 = KeyReg10;

      if (KeyReg10 == PRESSED_STATE){
        TimeOutForKeyPress = 100;
        subKeyProcess_0();
        if( counter_time < 100 ) {
                	counter_time++;
                }else {
                	button0_1s_flag = 1;
                }
      }
    }else{
       TimeOutForKeyPress --;
        if (TimeOutForKeyPress == 0){
          //KeyReg3 = NORMAL_STATE;
        	if (KeyReg10 == PRESSED_STATE){
        		subKeyProcess_0();
        	}
        	TimeOutForKeyPress = 100;
        }
    }
  }
}
