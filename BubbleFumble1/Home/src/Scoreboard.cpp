// Scoreboard.cpp
#include "Scoreboard.hpp"
#include <graphics.h>

Scoreboard::Scoreboard() : score(0) {}

void Scoreboard::show() {
    setcolor(WHITE);
    char buffer[20];
    sprintf(buffer, "SCORE: %d", score);
    outtextxy(10, 10, buffer);
}

void Scoreboard::calculate(int points) {
    score += points;
}

void Scoreboard::reset() {
    score = 0;
}

int Scoreboard::getScore() const {
    return score;
}
