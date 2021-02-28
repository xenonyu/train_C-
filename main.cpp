#include <iostream>
#include <vector>
#include <string>
#include "src/log.h"
#include "src/add.cpp"

using namespace std;

int main()
{
    void* ptr = nullptr;
    int var = 8;
    ptr = &var;
    cout << "the address of var 8: " << ptr << endl;
    int result = sum(2, 3);
    cout << "result = " << result << endl;
    Log("hello world.");
}
