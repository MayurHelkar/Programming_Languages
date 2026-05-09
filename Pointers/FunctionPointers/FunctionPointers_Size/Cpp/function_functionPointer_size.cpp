#include <iostream>

using namespace std;

void helloWorld_printFunction(void)
{
    cout << "Hello World" << endl;

    return;
}

void (*funtionPointer_declareInitialize)(void);
void (*funtionPointer_define)(void) = &helloWorld_printFunction;

int main()
{
    funtionPointer_declareInitialize = helloWorld_printFunction;

    cout << "Sizes of Functions ::" << endl;
    
    cout << endl;

    cout << "*helloWorld_printFunction : " << sizeof(*helloWorld_printFunction) << endl; // warning: invalid application of 'sizeof' to a function type [-Wpointer-arith]
/*
    cout << "helloWorld_printFunction : " << sizeof(helloWorld_printFunction) << endl; // warning: invalid application of 'sizeof' to a function type [-Wpointer-arith]
    cout << "&helloWorld_printFunction : " << sizeof(&helloWorld_printFunction) << endl; // error: ISO C++ forbids applying 'sizeof' to an expression of function type [-fpermissive]
*/

    cout << endl;

    cout << "*funtionPointer_declareInitialize : " << sizeof(*funtionPointer_declareInitialize) << endl; // warning: invalid application of 'sizeof' to a function type [-Wpointer-arith]
    cout << "funtionPointer_declareInitialize : " << sizeof(funtionPointer_declareInitialize) << endl;
    cout << "&funtionPointer_declareInitialize : " << sizeof(&funtionPointer_declareInitialize) << endl;
    
    cout << endl;

    cout << "*funtionPointer_define : " << sizeof(*funtionPointer_define) << endl; // warning: invalid application of 'sizeof' to a function type [-Wpointer-arith]
    cout << "funtionPointer_define : " << sizeof(funtionPointer_define) << endl;
    cout << "&funtionPointer_define : " << sizeof(&funtionPointer_define) << endl;
    
    return 0;
}