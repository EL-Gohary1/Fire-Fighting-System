
/***************************************************************
       NAME    :TempFilter.c
	   create  :03/07/2024 12:05:07 PM
	   version :_v1_
	   Author  :mahmoud elgohary
****************************************************************/
#include "Utils.h"
#include "StdType.h"
#include "TempFilter.h"
#include "LM35.h"

static u8 TempFilter_Arru8Temp[10]={0};
	
u8 TempFilter_u8MeanTemp=30;
u8 TempFilter_u8BinaryFlagReadyTogetMean=0;

void TempFilter_vRunnable(void)
{
    static u8 index=0;
	TempFilter_Arru8Temp[index]=LM35_u8ReadTemp(LVref_AVCC,5000);
    index++;
	if (index==10)
	{
		index=0;
		TempFilter_u8BinaryFlagReadyTogetMean=1;
	}
}

void TempFilter_vInit(void)
{
	
}

void TempFilter_u8GetFilteredValue(void)
{
	u16 Local_u16SumTemp=0;
	for (int i=0;i<10;i++)
	{
		Local_u16SumTemp+=TempFilter_Arru8Temp[i];
	}
	TempFilter_u8MeanTemp = Local_u16SumTemp/10;
	TempFilter_u8BinaryFlagReadyTogetMean=0;
}

