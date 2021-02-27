#include <iostream>
#include <vector>
#include <string>

using namespace std;
void Log(const char *message);

template <typename T>
T sum(T a, T b)
{
    return a + b;
}

int main()
{
    bool a = true;
    cout << a << endl;
    int result = sum<int>(2, 3);
    cout << "result = " << result << endl;
    Log("hello world.");
}
