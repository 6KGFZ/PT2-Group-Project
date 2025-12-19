#ifndef SMOKE_HPP
#define SMOKE_HPP

#include "GameObject.hpp"

class Smoke : public GameObject {
public:
    Smoke(int x, int y);
    void show() override;
    void rise() override;
    int pop() override;
};

#endif
