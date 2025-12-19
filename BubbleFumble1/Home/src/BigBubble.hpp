#ifndef BIGBUBBLE_HPP
#define BIGBUBBLE_HPP

#include "GameObject.hpp"

class BigBubble : public GameObject {
public:
    BigBubble(int x, int y);
    void show() override;
    void rise() override;
    int pop() override;
};

#endif
