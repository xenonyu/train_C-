#include <iostream>
#include <vector>
#include <string>

using namespace std;
void Log(const char* message);

template <typename T>
T sum(T a, T b){
    return a+b;
}

int main(){
    int a = 3, b = 4, result;
    long c = 3;
    char d = 65;
    cout << "char version of 4:  " << d << endl;
    cout << "size of long: " << sizeof(long) << endl;
    result = sum<int> (a, b);
    cout << "result = " << result << endl;
    Log("hello world.");
}
