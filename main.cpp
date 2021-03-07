#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <utility>
#include "src/log.h"
#include "src/add.h"
#include "src/Singleton.h"
#include "src/Player.h"
#include  "src/Entity.h"
#include "src/Entity2.h"
#include "src/ScopedPtr.h"
#include "src/String.h"
#ifndef LOG
#define LOG(x) std::cout << x << std::endl
#endif

void PrintString(const String& s){
    std::cout << s << std::endl;
}

struct Vertex
{
    float x, y, z;
    Vertex(float x, float y, float z)
        : x(x), y(y), z(z) {

    }
    Vertex(const Vertex& vertex)
        : x(vertex.x), y(vertex.y), z(vertex.z)
    {
        std::cout << "copied." << std::endl;
    }
};


std::ostream& operator<<(std::ostream& stream, const Vertex& vector) {
    return stream << vector.x << ", " << vector.y << ", " << vector.z;
}
/**
 * 初始化类静态成员变量,必须在类外面初始化
 */
Log::Level Log::m_LogLevel;
int main()
{
//    Entity* ptrEntity = new Entity[50];
//    delete[] ptrEntity; // if you delete array, use square brackets
    Log::setLevel(Log::LogLevelInfo);

    Log::Info("test unique pointer and shared pointer.");
    {
        std::shared_ptr<Entity> e1; //will add ref count
        std::weak_ptr<Entity> e2;  // won't add ref count
        {
//            std::unique_ptr<Entity> entity = std::make_unique<Entity>(1, 2);
//            entity->Print();
            std::shared_ptr<Entity> e0 = std::make_shared<Entity>(1, 2);
            e1 = e0;
            e1->Print();
        }
    }

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
    Log::Info("测试vector");
    std::vector<Vertex> vertices;
    vertices.reserve(3);
    vertices.emplace_back(1, 2, 3);
    vertices.emplace_back(1, 2, 3);
    vertices.emplace_back(7, 8, 9);
    for(int i = 0; i < vertices.size(); i++)
        std::cout <<vertices[i] << std::endl;
    vertices.erase(vertices.begin() + 1);
    for(const Vertex& v: vertices)
        std::cout << v << std::endl;
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
    String wangzheng(String("Wang Zheng"));
    String gaowang = wangzheng;
    gaowang[2] = 'c';
    PrintString(wangzheng);
    PrintString(gaowang);

    Log::Info("测试class");
    Singleton::Get().Hello();
    {
        Log::Info("test overload operator <<");
        Entity v1(1, 2);
        Entity v2(2, 3);
        Log::Info("test overload operator + and *");
        Entity v3 = v1 + v2;
        std::cout << v3 << std::endl;
    }
    Log::Info("测试引用");
    int a = 5;
    int &ref = a;
    Increment(a);
    LOG("the value of a is:");
    LOG(a);
    Log::Info("测试智能指针");
    {
        //这里重载了->让ScopedPtr能够直接使用Entity的函数
        ScopedPtr e(new Entity());
        e->GetClassName();
    }

    Log::Info("测试模板");
    auto result = sum(2, 3);
    std::cout << "result = " << result << std::endl;
    Log::Info("test struct.");
    auto offset = (uintptr_t)&((Vertex*) nullptr)->y;
    std::cout << offset << std::endl;
}