/***************************************************************
       NAME    :BUZZER.c
	   create  :04/10/2024 1:25:25 PM
	   version :_v1_
	   Author  :mahmoud elgohary
****************************************************************/

#include "Utils.h"
#include "StdType.h"
#include "DIO_interface.h"
#include "Buzzer.h"


void Buzzer_vTurnON(void)
{
    DIO_WritePin(BUZZER_PIN,HIGH);	
}


void Buzzer_vTurnOFF(void)
{
	DIO_WritePin(BUZZER_PIN,LOW);
}

