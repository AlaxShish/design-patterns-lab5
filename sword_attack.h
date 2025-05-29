
#ifndef SWORD_ATTACK_H
#define SWORD_ATTACK_H

#include "attack_strategy.h"
#include <iostream>

class SwordAttack : public AttackStrategy {
public:
    void attack() override {
        std::cout << "Махаю мечом!" << std::endl;
    }
};

#endif
