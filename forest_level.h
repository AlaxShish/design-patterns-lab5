// forest_level.h
#ifndef FOREST_LEVEL_H
#define FOREST_LEVEL_H

#include "level.h"

class ForestLevel : public Level {
protected:
    void prepare() override {
        std::cout << "Готовим лесной уровень..." << std::endl;
    }

    void play() override {
        std::cout << "Проходим лес и сражаемся с врагами!" << std::endl;
    }
};

#endif
