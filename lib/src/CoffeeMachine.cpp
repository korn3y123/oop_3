#include "../include/CoffeeMachine.h"
#include <iostream>

CoffeeMachine::CoffeeMachine(float water) : liters_of_water(water), active(false), cups_made(0) {}

void CoffeeMachine::turn_on() {
    active = true;
}

void CoffeeMachine::turn_off() {
    active = false;
}

void CoffeeMachine::refill_water(float water) {
    if (water > 0) {
        liters_of_water += water;
    }
}

void CoffeeMachine::show_info() const {
    std::cout << "Water: " << liters_of_water << " L" << std::endl;
    std::cout << "Cups made: " << cups_made << std::endl;
    std::cout << "Turn on: " << std::boolalpha << active << std::endl;
}
