#include "Smoke.hpp"
#include <graphics.h>

Smoke::Smoke(int x, int y) : GameObject(x, y, DARKGRAY) {}

void Smoke::show() {
    setcolor(color);
    setfillstyle(SOLID_FILL, color);
    fillellipse(x, y, 25, 25); // Filled gray smoke puff
}

void Smoke::rise() {
    y -= 4; // Moderate speed
}

int Smoke::pop() {
    return -2; // -2 points
}
