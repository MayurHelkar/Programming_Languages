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

    cout << "Address using dereference, direct and reference :: " << endl;

    cout << endl;

    cout << "*helloWorld_printFunction : " << *helloWorld_printFunction << endl;
    cout << "helloWorld_printFunction : " << helloWorld_printFunction << endl;
    cout << "&helloWorld_printFunction : " << &helloWorld_printFunction << endl;

    cout << endl;

    cout << "*funtionPointer_declareInitialize : " << *funtionPointer_declareInitialize << endl;
    cout << "funtionPointer_declareInitialize : " << funtionPointer_declareInitialize << endl;
    cout << "&funtionPointer_declareInitialize : " << &funtionPointer_declareInitialize << endl;

    cout << endl;

    cout << "*funtionPointer_define : " << *funtionPointer_define << endl;
    cout << "funtionPointer_define : " << funtionPointer_define << endl;
    cout << "&funtionPointer_define : " << &funtionPointer_define << endl;
    
    return 0;
}