#ifndef ATTACK_STRATEGY_H
#define ATTACK_STRATEGY_H

class AttackStrategy {
public:
    virtual void attack() = 0;
    virtual ~AttackStrategy() = default;
};

#endif
