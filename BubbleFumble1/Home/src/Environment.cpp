// Environment.cpp
#include "Environment.hpp"
#include "Bubble.hpp"
#include "BigBubble.hpp"
#include "Smoke.hpp"
#include <cstdlib>

Environment::Environment() : speed(1) {}
Environment::~Environment() {
    for (auto obj : objects) delete obj;
}

void Environment::show() {
    bubbleGun.show();
    scoreboard.show();
    for (auto obj : objects) obj->show();
}

void Environment::update() {
    if (rand() % 20 == 0) {
        int type = rand() % 3;
        int x = 100 + rand() % 600;
        if (type == 0) objects.push_back(new Bubble(x, 550));
        else if (type == 1) objects.push_back(new BigBubble(x, 550));
        else objects.push_back(new Smoke(x, 550));
    }

    for (auto obj : objects) obj->rise();
}

void Environment::reset() {
    for (auto obj : objects) delete obj;
    objects.clear();
    scoreboard.reset();
}

void Environment::handleClick(int mx, int my) {
    for (auto it = objects.begin(); it != objects.end(); ++it) {
        GameObject* obj = *it;
        int dx = mx - obj->getX();
        int dy = my - obj->getY();
        if (dx * dx + dy * dy <= 400) {
            scoreboard.calculate(obj->pop());
            delete obj;
            objects.erase(it);
            break;
        }
    }
}
