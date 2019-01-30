#pragma once

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "Shield_pinout_macros.h"

class Shield
{
public:
    Shield();
    ~Shield();

    // Led funtions
    bool r_led(int state);
    bool y_led(int state);
    bool g_led(int state);
    bool rgb_led(int r, int g, int b);

    // Input functions
    int button1();
    int button2();
    int pot();
};