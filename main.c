#define F_CPU 8000000UL

#include <avr/io.h>

#define LED_DDR		DDRA			///< DDR of indicator LED.
#define LED_PORT	PORTA			///< Port of indicator LED.
#define LED_PIN		PA0			///< Pin of indicator LED.

void PORT_INIT(void);
void COMPARATOR_INIT(void);

int main(void){
	PORT_INIT();
	COMPARATOR_INIT();
	
	while(1){
		if(ACSR & (1<<ACO)){
			LED_PORT |= (1<<LED_PIN);
		}
		else{
			LED_PORT &= ~(1<<LED_PIN);
		}
	}
}

/*!
 *	@brief Initialize ports.
 */

void PORT_INIT(void){
	LED_DDR |= (1<<LED_PIN);
}

/*!
 *	@brief Initialize Analog Comparator.
 */

void COMPARATOR_INIT(void){
	ACSR = 0x00;				///< Enable Analog Comparator by setting ACD to 0.
}
