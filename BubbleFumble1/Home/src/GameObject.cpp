#include "GameObject.hpp"

// Constructor
GameObject::GameObject(int x, int y, int color)
    : x(x), y(y), color(color) {}

// Destructor
GameObject::~GameObject() {}

// Accessors
int GameObject::getX() const {
    return x;
}

int GameObject::getY() const {
    return y;
}
