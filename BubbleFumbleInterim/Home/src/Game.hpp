// Game.hpp
#ifndef GAME_HPP
#define GAME_HPP

#include "Environment.hpp"

class Game {
private:
    Environment environment;
public:
    Game();
    void start();
};

#endif
