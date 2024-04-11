
/***************************************************************
       NAME    :Switch.c
	   create  : 3/21/2024 5:33:15 PM
	   version :_v1_
	   Author  :mahmoud elgohary
****************************************************************/ 





#include "Utils.h"
#include "StdType.h"
#include "DIO_interface.h"
#include "Switch.h"




void Switch_vEN(void)
{
    DIO_WritePin(SWITCH1,HIGH);
}

void Switch_vDisable(void)
{
	DIO_WritePin(SWITCH1,LOW);
}