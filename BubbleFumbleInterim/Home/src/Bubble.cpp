// Bubble.cpp
#include "Bubble.hpp"
#include <graphics.h>

Bubble::Bubble(int x, int y) : GameObject(x, y, WHITE) {}

void Bubble::show() {
    setcolor(color);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(x, y, 20, 20);
}

void Bubble::rise() {
    y -= 5;
}

int Bubble::pop() {
    return 1;
}
