#include <iostream>
#include <array>
#include <string>
#include <utility>
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
/**
 * 测试this
 */
class Entity2;
void PrintEntity2(Entity2* entity);
class Entity2{
public:
    int X, Y;
    Entity2(int x, int y)
        : X(x), Y(x)
    {
        PrintEntity2(this);
    }
    int GetX() const{
        const Entity2* e = this;
        return e->X;
    }
};
void PrintEntity2(Entity2* entity){
    std::cout << entity->X << entity->Y;
}

class tempEntity
{
private:
    std::string m_Name;
public:
    tempEntity(std::string name) : m_Name(name){};
    std::string GetName(){return m_Name;}

};
class ScopedPtr
{
private:
    Entity* m_Ptr;
public:
    ScopedPtr(Entity* ptr)
        : m_Ptr(ptr)
    {
    }
    ~ScopedPtr()
    {
        delete m_Ptr;
    }
};

// 重载 <<
std::ostream& operator<<(std::ostream& stream, const Entity& other){
    return stream << other.X << ", " << other.Y;
}

/**
 * 初始化类静态成员变量,必须在类外面初始化
 */
Log::Level Log::m_LogLevel;
int main()
{
    Entity* ptrEntity = new Entity[50];
    delete[] ptrEntity; // if you delete array, use square brackets

    Log::setLevel(Log::LogLevelInfo);

    Log::Info("train_C++ ternary operater");
    static int s_Level = 1;
    static int s_Speed = 2;
    s_Speed = s_Level > 5 ? 10 : 5;
    std::cout << "s_Speed: " << s_Speed << std::endl;

    Log::Info("train_C++ const");
    const int MAX_AGE = 90;
   //下面两个指针的差别是const在*前还是在*后. 
    const int* ptr = new int; // or (int const* ptr). You can change what you pointer towards, but you can't change the value you point.
    int* const ptr2 = new int; // You can change the value it point, but you can't change what you pointer towards.
    const int* const ptr3 = new int;
    *ptr2 = 2;
//    *ptr = 2;
    std::cout << MAX_AGE << std::endl;
    Log::Info("测试bool类型.");
    //将bool类型的输出变为true, false
    std::cout << std::boolalpha;
    // std::cout << std::noboolalpha;

    Log::Info("测试array");
    std::array<int, 5> A{};
    for(int & i : A){
        i = 2;
    }
    Log::Info("测试string.");
    //用于标识符s能够解析
    using namespace std::string_literals;
    std::string name = "xym"s + " hello!";
    // std::string name = std::string("xym") + " hello!";
    // name += " hello!";
    bool contains = name.find('x') != std::string::npos;
    std::cout << "测试find: xym contains x? : " << contains << std::endl;
    //防止忽略/n
    const char* expression = R"(
测试'R'
Line1
Line2
Line3)";
    std::cout << expression << std::endl;

    Log::Info("测试class");
    Singleton::Get().Hello();
    Player* p = new Player("xym");
    Log::Info("测试引用");
    int a = 5;
    int &ref = a;
    Increment(a);
    LOG("the value of a is:");
    LOG(a);
    Entity v1(1, 2);
    Entity v2(2, 3);
    Log::Info("train_C++ overload operator + and *");
    Entity v3 = v1 + v2;
    std::cout << v3 << std::endl;
    Log::Info("测试智能指针");
    {
        ScopedPtr e = new Entity();
    }

    Log::Info("测试模板");
    int result = sum(2, 3);
    std::cout << "result = " << result << std::endl;
}