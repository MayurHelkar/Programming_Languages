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

/*
    cout << "helloWorld_printFunction() : ";            helloWorld_printFunction();
    cout << "*helloWorld_printFunction() : ";           *helloWorld_printFunction();         // error: void value not ignored as it ought to be
    cout << "*funtionPointer_declareInitialize() : ";   *funtionPointer_declareInitialize(); // error: void value not ignored as it ought to be

    cout << endl;
*/

    cout << "helloWorld_printFunction() : ";            helloWorld_printFunction();
    cout << "funtionPointer_declareInitialize() : ";    funtionPointer_declareInitialize();

/*
    cout << endl;

    cout << "&helloWorld_printFunction() : ";           &helloWorld_printFunction();          // error: lvalue required as unary '&' operand
    cout << "&funtionPointer_declareInitialize() : ";   &funtionPointer_declareInitialize(); // error: lvalue required as unary '&' operand
*/

    return 0;
}