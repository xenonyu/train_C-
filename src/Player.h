#pragma once
#include "Entity.h"
#include "log.h"
class Player : public Entity
{
public:
    const char *Name;

public:
    Player(float x, float y)
    {
        Log::Info("one player created.");
        Entity(x, y);
    }
    void PrintName()
    {
        std::cout << "the name of player: " << Name << std::endl;
    }
};