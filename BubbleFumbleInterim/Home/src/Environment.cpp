// Environment.cpp
#include "Environment.hpp"
#include "Bubble.hpp"
#include <cstdlib>

Environment::Environment() : speed(1) {}
Environment::~Environment() {
    for (auto obj : objects) delete obj;
}

void Environment::show() {
    bubbleGun.show();
    for (auto obj : objects) obj->show();
}

void Environment::update() {
    if (rand() % 20 == 0) {
        // Gun barrel positions 
        int barrelX[5] = { 100, 220, 340, 460, 580 };
        int index = rand() % 5;
        int x = barrelX[index];
        objects.push_back(new Bubble(x, 550));
    }

    for (auto obj : objects) obj->rise();
}

void Environment::reset() {
    for (auto obj : objects) delete obj;
    objects.clear();
}

void Environment::handleClick(int mx, int my) {
    for (auto it = objects.begin(); it != objects.end(); ++it) {
        GameObject* obj = *it;
        int dx = mx - obj->getX();
        int dy = my - obj->getY();
        if (dx * dx + dy * dy <= 400) {
            obj->pop();
            delete obj;
            objects.erase(it);
            break;
        }
    }
}
