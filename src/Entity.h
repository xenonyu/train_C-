#pragma once
#include <iostream>
#include "Printable.h"

class Entity : public Printable
{
public:
    float X, Y;
    mutable float m_DebugCount = 0;

    Entity() : X(0),Y(0) {}
    Entity(float x, float y)
        :X(x), Y(y)
    {
        std::cout << "entity created." << std::endl;
    }
    ~Entity(){
        std::cout << "entity destroyed." << std::endl;
    }
    void Move(int aX, int aY){
        X += aX;
        Y += aY;
    }
    void Print()
    {
        std::cout << "the corrdinates of player: " << X << ", " << Y << std::endl;
    }
    float GetX() const{
        // you can't change the value of members with a const function like: X = 3;
        // m_DebugCount = 3; //this work
        return X;
    }
    Entity operator+(Entity& b) const{
        return Entity(X + b.X, Y + b.Y);
    }
    virtual std::string GetName() {return "Entity";}
    std::string GetClassName() const override {return "Entity";}
};

