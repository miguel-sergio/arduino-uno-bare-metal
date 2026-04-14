/* ATmega328P register addresses */
#define DDRB   (*(volatile unsigned char *)0x24)
#define PORTB  (*(volatile unsigned char *)0x25)

/* Busy-loop delay: wastes CPU cycles to approximate a delay in ms.
 * 800 is the closest value found visually for 1 ms at 16 MHz.
 * A timer-based delay will replace this in a later project. */
static void delay_ms(unsigned int ms) {
    for (unsigned int i = 0; i < ms; i++) {
        for (volatile unsigned int j = 0; j < 800; j++);
    }
}

int main(void) {
    DDRB |= (1U << 5); /* PB5 as output */

    while (1) {
        PORTB |= (1U << 5); /* LED ON  */
        delay_ms(500);

        PORTB &= ~(1U << 5); /* LED OFF */
        delay_ms(500);
    }

    return 0;
}