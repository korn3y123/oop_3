#ifndef COFFEEMAKER_H
#define COFFEEMAKER_H

#include "CoffeeMachine.h"
#include <string>

class CoffeeMaker : public CoffeeMachine {
public:
    CoffeeMaker(float water, int coffee, int sugar);

    void refill(float water, int coffee, int sugar);
    std::string make_coffee(int coffee, int sugar);

    void show_info() const override;

private:
    int servings_of_coffee;
    int teaspoons_of_sugar;
};

#endif
