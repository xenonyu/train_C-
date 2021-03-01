#include <iostream>
#include <vector>
#include <string>
#include "src/log.h"
#include "src/add.h"
#ifndef LOG
#define LOG(x) std::cout << x << std::endl
#endif
using namespace std;

void Increment(int &value)
{
    value++;
}

class Singleton
{
public:
    static Singleton& Get(){
        Log::Warn("there should be static unless the instance will get destroyed at close brace");
        static Singleton instance;
        return instance;
        }
    void Hello() { LOG("Hello."); }
};
int Log::m_LogLevel;
int main()
{
    Log::m_LogLevel=Log::LogLevelInfo;
    Log::Info("测试struct");

    Log::Info("测试class");
    Singleton::Get().Hello();

    Log::Info("测试引用");
    int a = 5;
    int &ref = a;
    Increment(a);
    LOG("the value of a is:");
    LOG(a);

    Log::Info("测试模板");
    int result = sum(2, 3);
    cout << "result = " << result << endl;
}
