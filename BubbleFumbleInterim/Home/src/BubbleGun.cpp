// BubbleGun.cpp
#include "BubbleGun.hpp"
#include <graphics.h>

void BubbleGun::show() {
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    int barrelX[5] = { 100, 220, 340, 460, 580 };
    for (int i = 0; i < 5; ++i) {
        bar(barrelX[i] - 20, 560, barrelX[i] + 20, 580); // Draw filled rectangle
    }
}
