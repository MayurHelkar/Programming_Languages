#include <iostream>

using namespace std;

int main()
{
    int *staticPointer;
    int *dynamicPointer;

    cout << "*staticPointer : " << *staticPointer << ", staticPointer : " << staticPointer << " and &staticPointer : " << &staticPointer << endl;
    cout << "*dynamicPointer : " << *dynamicPointer << ", dynamicPointer : " << dynamicPointer << " and &dynamicPointer : " << &dynamicPointer << endl;

    cout << endl;

    int var = 123456;
    staticPointer = &var;
    dynamicPointer = new int(987654);

    cout << "*staticPointer : " << *staticPointer << ", staticPointer : " << staticPointer << " and &staticPointer : " << &staticPointer << endl;
    cout << "*dynamicPointer : " << *dynamicPointer << ", dynamicPointer : " << dynamicPointer << " and &dynamicPointer : " << &dynamicPointer << endl;

    return 0;
}