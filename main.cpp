#include <iostream>
#include <vector>
#include <array>
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

void PrintName(const Entity* entity)
{
    std::cout << entity->GetClassName() << std::endl;
}

class tempEntity
{
private:
    std::string m_Name;
public:
    tempEntity(std::string name) : m_Name(name){};
    std::string GetName(){return m_Name;}

};
/**
 * 初始化类静态成员变量,必须在类外面初始化
 */
Log::Level Log::m_LogLevel;
int main()
{
    Log::setLevel(Log::LogLevelInfo);

    Log::Info("test ternary operater");
    static int s_Level = 1;
    static int s_Speed = 2;
    s_Speed = s_Level > 5 ? 10 : 5;
    std::cout << "s_Speed: " << s_Speed << std::endl;

    Log::Info("test const");
    const int MAX_AGE = 90;
   //下面两个指针的差别是const在*前还是在*后. 
    const int* ptr = new int; // or (int const* ptr). You can change what you pointer towards, but you can't change the value you point.
    int* const ptr2 = new int; // You can change the value it point, but you can't change what you pointer towards.
    const int* const ptr3 = new int;
    *ptr2 = 2;
    // *ptr = 2;
    ptr = (int*)&MAX_AGE;
    std::cout << MAX_AGE << std::endl;
    Log::Info("测试bool类型.");
    //将bool类型的输出变为true, false
    std::cout << std::boolalpha;
    // std::cout << std::noboolalpha;

    Log::Info("测试array");
    std::array<int, 5> A;
    for(int i; i < A.size(); i++){
        A[i] = 2;
    }
    Log::Info("测试string.");
    //用于标识符s能够解析
    using namespace std::string_literals;
    std::string name = "xym"s + " hello!";
    // std::string name = std::string("xym") + " hello!";
    // name += " hello!";
    bool contains = name.find("x") != std::string::npos;
    std::cout << "测试find: xym contains x? : " << contains << std::endl;
    //防止忽略/n
    const char* ex = R"(
测试'R'
Line1
Line2
Line3)";
    std::cout << ex << std::endl;

    Log::Info("测试class");
    Singleton::Get().Hello();
    Player* p = new Player("xym");
    // Entity* e;
    // Entity* entity = p;
    // PrintName(entity);
    // PrintName(e);
    tempEntity* e;
    {
        tempEntity* entity = new tempEntity("xym");
        e = entity;
    }
    std::cout << e->GetName() << std::endl;
    delete e;
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