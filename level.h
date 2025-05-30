// level.h
#ifndef LEVEL_H
#define LEVEL_H

#include <iostream>

class Level {
public:
    void playLevel() {
        prepare();
        play();
        finish();
    }

protected:
    virtual void prepare() = 0;
    virtual void play() = 0;
    virtual void finish() {
        std::cout << "Завершаем уровень." << std::endl;
    }

    virtual ~Level() = default;
};

#endif
