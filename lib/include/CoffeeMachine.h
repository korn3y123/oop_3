#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H

class CoffeeMachine {
public:
    CoffeeMachine(float water);
    virtual ~CoffeeMachine() = default;

    void turn_on();
    void turn_off();
    void refill_water(float water);

    virtual void show_info() const;

protected:
    float liters_of_water;
    bool active;
    int cups_made;
};

#endif
