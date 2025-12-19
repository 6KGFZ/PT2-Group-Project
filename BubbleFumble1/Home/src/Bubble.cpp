// Bubble.cpp
#include "Bubble.hpp"
#include <graphics.h>

Bubble::Bubble(int x, int y) : GameObject(x, y, WHITE) {}

void Bubble::show() {
    setcolor(color);
    circle(x, y, 20);
}

void Bubble::rise() {
    y -= 5;
}

int Bubble::pop() {
    return 1;
}
