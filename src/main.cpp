#include <iostream>
#include "CoffeeMaker.h"
#include "CapsuleCoffeeMaker.h"


int main() {
    CoffeeMaker coffee_maker(0, 0, 0);
    CapsuleCoffeeMaker capsule_maker(1.0f, 5);

    std::cout << "==== Coffee Maker ====" << std::endl;

    coffee_maker.show_info();
    coffee_maker.turn_on();

    std::cout << coffee_maker.make_coffee(2, 3) << std::endl;

    coffee_maker.refill(3.0f, 8, 10);

    std::cout << coffee_maker.make_coffee(2, 3) << std::endl;
    coffee_maker.show_info();

    coffee_maker.turn_off();

    std::cout << std::endl << "==== Capsule Coffee Maker ====" << std::endl;

    capsule_maker.show_info();
    capsule_maker.turn_on();

    std::cout << capsule_maker.make_coffee() << std::endl;

    capsule_maker.add_capsules(3);
    capsule_maker.show_info();

    capsule_maker.turn_off();

    return 0;
}
