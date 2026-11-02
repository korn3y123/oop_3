#include "CoffeeMaker.h"
#include <iostream>

CoffeeMaker::CoffeeMaker(float water, int coffee, int sugar)
    : CoffeeMachine(water),
      servings_of_coffee(coffee),
      teaspoons_of_sugar(sugar) {}

void CoffeeMaker::refill(float water, int coffee, int sugar) {
    refill_water(water);

    if (coffee > 0) {
        servings_of_coffee += coffee;
    }
    if (sugar > 0) {
        teaspoons_of_sugar += sugar;
    }
}

std::string CoffeeMaker::make_coffee(int coffee, int sugar) {
    if (!active) {
        return "The coffee maker isn't turned on!";
    }

    if (coffee <= 0 || sugar < 0) {
        return "Invalid ingredients!";
    }

    std::string missing;

    if (coffee > servings_of_coffee) {
        missing += "coffee ";
    }

    if (sugar > teaspoons_of_sugar) {
        missing += "sugar ";
    }

    if (liters_of_water < 0.5f) {
        missing += "water ";
    }

    if (!missing.empty()) {
        return "Not enough: " + missing;
    }

    servings_of_coffee -= coffee;
    teaspoons_of_sugar -= sugar;
    liters_of_water -= 0.5f;
    cups_made++;

    return "The coffee is ready!";
}

void CoffeeMaker::show_info() const {
    CoffeeMachine::show_info();

    std::cout << "Coffee: " << servings_of_coffee << std::endl;
    std::cout << "Sugar: " << teaspoons_of_sugar << std::endl;
}
