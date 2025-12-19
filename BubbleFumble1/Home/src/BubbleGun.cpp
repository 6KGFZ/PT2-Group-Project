// BubbleGun.cpp
#include "BubbleGun.hpp"
#include <graphics.h>

void BubbleGun::show() {
    setcolor(DARKGRAY);
    for (int i = 0; i < 5; ++i)
        rectangle(100 + i * 120, 550, 130 + i * 120, 580);
}
