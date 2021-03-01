#include <iostream>
#include <vector>
#include <string>
#include "src/log.h"
#include "src/add.h"
#include "src/Singleton.h"
#include "src/Player.h"
#include  "src/Entity.h"
#ifndef LOG
#define LOG(x) std::cout << x << std::endl
#endif

void Increment(int &value)
{
    value++;
}


/**
 * 初始化类静态成员变量,必须在类外面初始化
 */
Log::Level Log::m_LogLevel;
int main()
{
    Log::setLevel(Log::LogLevelInfo);
    Log::Info("测试struct");

    Log::Info("测试class");
    Singleton::Get().Hello();
    Player e(1, 1);
    e.Move(1, 2);
    e.Name = "aaa";
    e.PrintName();

    Log::Info("测试引用");
    int a = 5;
    int &ref = a;
    Increment(a);
    LOG("the value of a is:");
    LOG(a);

    Log::Info("测试模板");
    int result = sum(2, 3);
    std::cout << "result = " << result << std::endl;
}