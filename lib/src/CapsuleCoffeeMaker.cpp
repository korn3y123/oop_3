#include "CapsuleCoffeeMaker.h"
#include <iostream>

CapsuleCoffeeMaker::CapsuleCoffeeMaker(float water, int capsules) : CoffeeMachine(water), capsules(capsules) {}

void CapsuleCoffeeMaker::add_capsules(int count) {
    if (count > 0) {
        capsules += count;
    }
}

std::string CapsuleCoffeeMaker::make_coffee() {
    if (!active) {
        return "The coffee maker isn't turned on!";
    }

    if (capsules < 1 || liters_of_water < 0.2f) {
        return "Not enough ingredients!";
    }

    capsules--;
    liters_of_water -= 0.2f;
    cups_made++;

    return "The capsule coffee is ready!";
}

void CapsuleCoffeeMaker::show_info() const {
    CoffeeMachine::show_info();

    std::cout << "Capsules: " << capsules << std::endl;
}
