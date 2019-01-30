#include "..\include\Shield.h"

int Shield::button1() {
    return ((1 << BUTTON_1) & PORTC) >> BUTTON_1;
}

int Shield::button2() {
    return ((1 << BUTTON_2) & PORTC) >> BUTTON_2;
}

int Shield::pot() {
    
}