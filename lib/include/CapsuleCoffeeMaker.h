#ifndef CAPSULECOFFEEMAKER_H
#define CAPSULECOFFEEMAKER_H

#include "CoffeeMachine.h"
#include <string>

class CapsuleCoffeeMaker : public CoffeeMachine {
public:
    CapsuleCoffeeMaker(float water, int capsules);

    void add_capsules(int count);
    std::string make_coffee();

    void show_info() const override;

private:
    int capsules;
};

#endif
