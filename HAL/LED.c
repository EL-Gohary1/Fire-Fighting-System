
/***************************************************************
       NAME    :LED.c
	   create  :3/20/2024 8:02:10 PM
	   version :_v1_
	   Author  :mahmoud elgohary
****************************************************************/ 
#include "Utils.h"
#include "StdType.h"
#include "DIO_interface.h"
#include "LED.h"



void LED_vTurnON(Led_t copy_enumLedName)
{
	DIO_WritePin(copy_enumLedName,HIGH);
}

void LED_vTurnOFF(Led_t copy_enumLedName)
{
	DIO_WritePin(copy_enumLedName,LOW);
}

void LED_vToggle(Led_t copy_enumLedName)
{
	DIO_TogglePin(copy_enumLedName);
}