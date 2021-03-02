# pragma once
#  include "log.h"
class Singleton : public Log
{
public:
    static Singleton &Get()
    {
        Warn("there should be static unless the instance will get destroyed at close brace");
        static Singleton instance;
        return instance;
    }
    void Hello() { Info("Singleton: Hello, you successfully create a instance to call non-static function."); }
};