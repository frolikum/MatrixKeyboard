
#ifndef MTX_KBD
#define MTX_KBD 

#include "stdint.h"

#define MAX_ROWS		4
#define MAX_COLS		4

#define REPETITION_RATE			2
#define EXECUTION_RATE			1000

// Pin connection description
//COLUMN
#define KBD_PIN_C1			GPIO_PIN_5		
#define KBD_PIN_C2			GPIO_PIN_4
#define KBD_PIN_C3			GPIO_PIN_3
#define KBD_PIN_C4			GPIO_PIN_15

#define KBD_PORT_C1			GPIOB
#define KBD_PORT_C2			GPIOB
#define KBD_PORT_C3			GPIOB
#define KBD_PORT_C4			GPIOA

//ROWS
#define KBD_PIN_R1			GPIO_PIN_9
#define KBD_PIN_R2			GPIO_PIN_8
#define KBD_PIN_R3			GPIO_PIN_7
#define KBD_PIN_R4			GPIO_PIN_6

#define KBD_PORT_R1			GPIOB
#define KBD_PORT_R2			GPIOB
#define KBD_PORT_R3			GPIOB
#define KBD_PORT_R4			GPIOB

//Exported function
void KBD_Init(void);
uint8_t KBD_Scan(void);
uint8_t KBD_Handler(void);

#endif //MTX_KBD
