#include "..\include\Shield.h"

Shield::Shield() {
    // Clear data direction registers
    DDRB = 0b00000000;
    DDRC = 0b0000000;
    DDRD = 0b00000000;

    // Setup register B
    DDRB |= (1 << SEG_D);
    DDRB |= (1 << RGB_GREEN);
    DDRB |= (1 << RGB_BLUE);
    DDRB |= (1 << RGB_RED);
    DDRB |= (1 << DIGIT_1);
    DDRB |= (1 << DIGIT_2);

    // Setup register C
    DDRC |= (1 << LED_RED_PIN);
    DDRC |= (1 << LED_YELLOW_PIN);
    DDRC |= (1 << LED_GREEN_PIN);
    DDRC &= ~(1 << BUTTON_1);
    DDRC &= ~(1 << BUTTON_2);
    DDRC &= ~(1 << POT);

    //Seup register D
    DDRD |= (1 << SEG_A);
    DDRD |= (1 << SEG_B);
    DDRD |= (1 << SEG_C);
    DDRD |= (1 << SEG_E);
    DDRD |= (1 << SEG_F);
    DDRD |= (1 << SEG_G);

    // Clear PORT registers
    PORTB = 0b00000000;
    PORTC = 0b1000000;
    PORTD = 0b00000000;

    // Preset PORTB register
    PORTB |= (1 << SEG_D);
    PORTB |= (1 << RGB_GREEN);
    PORTB |= (1 << RGB_BLUE);
    PORTB |= (1 << RGB_RED);
    PORTB &= ~(1 << DIGIT_1);
    PORTB &= ~(1 << DIGIT_2);

    // Preset PORTC register
    PORTC &= ~(1 << LED_RED_PIN);
    PORTC &= ~(1 << LED_YELLOW_PIN);
    PORTC &= ~(1 << LED_GREEN_PIN);
    PORTC |= (1 << BUTTON_1) | PORTC;
    PORTC |= (1 << BUTTON_2) | PORTC;

    // Preset PORTD register
    PORTD |= (1 << SEG_A);
    PORTD |= (1 << SEG_B);
    PORTD |= (1 << SEG_C);
    PORTD |= (1 << SEG_E);
    PORTD |= (1 << SEG_F);
    PORTD |= (1 << SEG_G);
}

Shield::~Shield() {
    // Clear data direction registers
    DDRB = 0b00000000;
    DDRC = 0b0000000;
    DDRD = 0b00000000;
}
