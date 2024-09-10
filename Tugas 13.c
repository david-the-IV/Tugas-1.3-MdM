#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 1000000UL
#define DELAY_MS 500

int main(void) {
	
	DDRB = 0xFF;
	
	while (1) {
		for (int i = 0; i < 9; i++) {
			PORTB = ~((1 << i) - 1);
			_delay_ms(DELAY_MS);
		}

		for (int i = 7; i < 8; i--) {
			PORTB = ~((1 << i) - 1);
			_delay_ms(DELAY_MS);
			if (i == 0) break;
		}
	}
}