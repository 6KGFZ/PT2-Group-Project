// Environment.hpp
#ifndef ENVIRONMENT_HPP
#define ENVIRONMENT_HPP

#include <vector>
#include "BubbleGun.hpp"
#include "GameObject.hpp"

class Environment {
private:
    BubbleGun bubbleGun;
    std::vector<GameObject*> objects;
    int speed;
public:
    Environment();
    ~Environment();
    void show();
    void update();
    void reset();
    void handleClick(int mx, int my);
};

#endif
