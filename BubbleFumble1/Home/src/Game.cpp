// Game.cpp
#include "Game.hpp"
#include <graphics.h>
#include <conio.h>

Game::Game() {}

void Game::start() {
    initwindow(800, 600, "Bubble Fumble");

    while (true) {
        cleardevice();
        environment.update();
        environment.show();

        if (ismouseclick(WM_LBUTTONDOWN)) {
            int mx = mousex();
            int my = mousey();
            clearmouseclick(WM_LBUTTONDOWN);
            environment.handleClick(mx, my);
        }

        if (kbhit() && getch() == 27) break; // ESC to exit
        delay(50);
    }

    closegraph();
}
