#pragma once
#include "Entity.h"
#include "log.h"
class Player : public Entity, public Log
{
public:
    std::string m_Name;

public:
    Player(const std::string name)
        : m_Name(name)
    {
        Info("one player created.");
    }
    std::string GetName() override {return m_Name;}
    std::string GetClassName() const override { return "Player";}
};