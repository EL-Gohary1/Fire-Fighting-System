

/***************************************************************
       NAME    :LED.h
	   create  :3/20/2024 8:01:45 PM
	   version :_v1_
	   Author  :mahmoud elgohary
****************************************************************/ 


#ifndef LED_H_
#define LED_H_



#define GREEN_LED        PINC1
#define RED_LED          PINC0
#define BLUE_LED         PINC2
#define YELLOW_LED       PINC3

typedef  DIO_Pin_type   Led_t;

void LED_vTurnON(Led_t copy_enumLedName);

void LED_vTurnOFF(Led_t copy_enumLedName);

void LED_vToggle(Led_t copy_enumLedName);




#endif /* LED_H_ */