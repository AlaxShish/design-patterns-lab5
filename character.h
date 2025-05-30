// character.h
#ifndef CHARACTER_H
#define CHARACTER_H

#include "attack_strategy.h"

class Character {
private:
    AttackStrategy* strategy;

public:
    Character(AttackStrategy* strat) : strategy(strat) {}

    void setStrategy(AttackStrategy* strat) {
        strategy = strat;
    }

    void performAttack() {
        strategy->attack();
    }
};

#endif
