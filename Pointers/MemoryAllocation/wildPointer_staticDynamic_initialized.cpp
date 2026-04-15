#include <iostream>

using namespace std;

int main()
{
    int var = 123456;
    int *staticPointer = &var;
    int *dynamicPointer= new int(987654);

    cout << "*staticPointer : " << *staticPointer << ", staticPointer : " << staticPointer << " and &staticPointer : " << &staticPointer << endl;
    cout << "*dynamicPointer : " << *dynamicPointer << ", dynamicPointer : " << dynamicPointer << " and &dynamicPointer : " << &dynamicPointer << endl;

    return 0;
}