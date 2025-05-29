// magic_attack.h
#ifndef MAGIC_ATTACK_H
#define MAGIC_ATTACK_H

#include "attack_strategy.h"
#include <iostream>

class MagicAttack : public AttackStrategy {
public:
    void attack() override {
        std::cout << "Кастую заклинание!" << std::endl;
    }
};

#endif
