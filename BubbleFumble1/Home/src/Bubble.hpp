// Bubble.hpp
#ifndef BUBBLE_HPP
#define BUBBLE_HPP

#include "GameObject.hpp"

class Bubble : public GameObject {
public:
    Bubble(int x, int y);
    void show() override;
    void rise() override;
    int pop() override;
};

#endif
