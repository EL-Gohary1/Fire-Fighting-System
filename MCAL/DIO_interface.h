
#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_





/**********************************************memorymapforDIO*********************************************************/
#define PORTA  (*(volatile unsigned char *)0x3B)
#define DDRA   (*(volatile unsigned char *)0x3A)
#define PINA   (*(volatile unsigned char *)0x39)

#define PORTB  (*(volatile unsigned char *)0x38)
#define DDRB   (*(volatile unsigned char *)0x37)
#define PINB   (*(volatile unsigned char *)0x36)

#define PORTC  (*(volatile unsigned char *)0x35)
#define DDRC   (*(volatile unsigned char *)0x34)
#define PINC   (*(volatile unsigned char *)0x33)

#define PORTD  (*(volatile unsigned char *)0x32)
#define DDRD   (*(volatile unsigned char *)0x31)
#define PIND   (*(volatile unsigned char *)0x30)
/*********************************************************************************************************************/
typedef enum{
	OUTPUT,
	INFREE,
	INPULL
	}DIO_PinMode_type;
typedef enum{
	PA=0,
	PB,
	PC,
	PD
	}DIO_Port_type;
	
typedef enum{
	LOW=0,
	HIGH
    }DIO_PinVoltage_type;
	
typedef enum{
	PINA0=0,
	PINA1,
	PINA2,
	PINA3,
	PINA4,
	PINA5,
	PINA6,
	PINA7,
	PINB0,
	PINB1,
	PINB2,
	PINB3,
	PINB4,
	PINB5,
	PINB6,
	PINB7,
	PINC0,
	PINC1,
	PINC2,
	PINC3,
	PINC4,
	PINC5,
	PINC6,
	PINC7,
	PIND0,
	PIND1,
	PIND2,
	PIND3,
	PIND4,
	PIND5,
	PIND6,
	PIND7,
	TOTAL_PINS
}DIO_Pin_type;
	
extern void DIO_WritePin(DIO_Pin_type pin,DIO_PinVoltage_type volt);
extern void DIO_TogglePin(DIO_Pin_type pin);
extern u8   DIO_ReadPort(DIO_Port_type port);
extern void DIO_WritePort(DIO_Port_type port,u8 value);
extern DIO_PinVoltage_type DIO_ReadPin(DIO_Pin_type pin);
extern void DIO_Init(void);


#endif /* DIO_INTERFACE_H_ */