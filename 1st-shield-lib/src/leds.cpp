#include "..\include\Shield.h"

bool Shield::r_led(int state) {
    if(state == 0) {
        PORTC &= ~(1 << LED_RED_PIN);
        return true;
    } else if(state == 1) {
        PORTC |= (1 << LED_RED_PIN);
        return true;
    }
    return false;
}

bool Shield::y_led(int state) {
    if(state == 0) {
        PORTC &= ~(1 << LED_YELLOW_PIN);
        return true;
    } else if(state == 1) {
        PORTC |= (1 << LED_YELLOW_PIN);
        return true;
    }
    return false;
}
bool Shield::g_led(int state) {
    if(state == 0) {
        PORTC &= ~(1 << LED_GREEN_PIN);
        return true;
    } else if(state == 1) {
        PORTC |= (1 << LED_GREEN_PIN);
        return true;
    }
    return false;
}

bool Shield::rgb_led(int r, int g, int b) {
    TCCR2A = 0;
    return false;
}