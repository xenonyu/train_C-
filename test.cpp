#include <iostream>
#include <vector>
#include <string>
#include "Log.h"
#include "add.h"

using namespace std;

int main()
{
    bool a = true;
    cout << a << endl;
    int result = sum<int>(2, 3);
    cout << "result = " << result << endl;
    Log("hello world.");
}
