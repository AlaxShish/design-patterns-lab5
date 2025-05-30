#include <iostream>
#include "sword_attack.h"
#include "magic_attack.h"
#include "character.h"
#include "forest_level.h"

int main() {
    // Демонстрация стратегии
    SwordAttack sword;
    MagicAttack magic;

    Character hero(&sword);
    std::cout << "Герой атакует: ";
    hero.performAttack();

    std::cout << "Герой меняет стиль атаки..." << std::endl;
    hero.setStrategy(&magic);
    std::cout << "Герой атакует: ";
    hero.performAttack();

    // Демонстрация шаблонного метода
    ForestLevel level1;
    std::cout << "\nПрохождение уровня:\n";
    level1.playLevel();

    return 0;
}
