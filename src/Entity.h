# pragma once
# include <iostream>
class Entity
{
public:
    float X, Y;

    Entity()
    {
        X = 0;
        Y = 0;
    }
    Entity(float x, float y)
    {
        X = x;
        Y = y;
    }
    void Move(int aX, int aY){
        X += aX;
        Y += aY;
    }
    void Print()
    {
        std::cout << "the corrdinates of player: " << X << ", " << Y << std::endl;
    }
};