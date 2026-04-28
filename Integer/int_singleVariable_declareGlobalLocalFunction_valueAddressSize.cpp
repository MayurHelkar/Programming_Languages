#include <iostream>

using namespace std;

int int_G;

void function(void)
{
    int int_F;

    cout << "int_F : " << int_F << ", &int_F : " << &int_F << " and sizeof(int_F) : " << sizeof(int_F) << endl;

    return;
}

int main()
{
    int int_L;

    cout << "main     : " << main << " and &main     : " << &main << endl;
    cout << "function : " << function << " and &function : " << &function << endl;

    cout << endl;

    cout << "int_G : " << int_G << ", &int_G : " << &int_G << " and sizeof(int_G) : " << sizeof(int_G) << endl;
    cout << "int_L : " << int_L << ", &int_L : " << &int_L << " and sizeof(int_L) : " << sizeof(int_L) << endl;
    function();

    return 0;
}