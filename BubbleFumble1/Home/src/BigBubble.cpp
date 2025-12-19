#include "BigBubble.hpp"
#include <graphics.h>

BigBubble::BigBubble(int x, int y) : GameObject(x, y, WHITE) {}

void BigBubble::show() {
    setcolor(color);
    setlinestyle(SOLID_LINE, 0, 3);
    circle(x, y, 30); // Larger radius than normal bubble
}

void BigBubble::rise() {
    y -= 3; // Slightly slower rise
}

int BigBubble::pop() {
    return 3; // +3 points
}
