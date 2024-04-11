
/***************************************************************
       NAME    :TempFilter.h
	   create  :03/07/2024 12:05:30 PM
	   version :_v1_
	   Author  :mahmoud elgohary
****************************************************************/


#ifndef TEMPFILTER_H_
#define TEMPFILTER_H_



/*extern in your app
u8 TempFilter_MeanTem
*/
void TempFilter_vRunnable(void);

void TempFilter_vInit(void);

void TempFilter_u8GetFilteredValue(void);


#endif /* TEMPFILTER_H_ */