//GameObject.hpp
#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

class GameObject {
protected:
    int x, y;
    int color;
public:
    GameObject(int x, int y, int color);
    virtual ~GameObject();

    virtual void show() = 0;
    virtual void rise() = 0;
    virtual int pop() = 0;

    int getX() const;
    int getY() const;
};

#endif