#include <iostream>

using namespace std;

int int_G1;
int int_G2;

void function(void)
{
    int int_F1;
    int int_F2;

    cout << "int_F1 : " << int_F1 << ", &int_F1 : " << &int_F1 << " and sizeof(int_F1) : " << sizeof(int_F1) << endl;
    cout << "int_F2 : " << int_F2 << ", &int_F2 : " << &int_F2 << " and sizeof(int_F2) : " << sizeof(int_F2) << endl;

    return;
}

int main()
{
    int int_L1;
    int int_L2;

    cout << "main     : " << main << " and &main     : " << &main << endl;
    cout << "function : " << function << " and &function : " << &function << endl;

    cout << endl;

    cout << "int_G1 : " << int_G1 << ", &int_G1 : " << &int_G1 << " and sizeof(int_G1) : " << sizeof(int_G1) << endl;
    cout << "int_G2 : " << int_G2 << ", &int_G2 : " << &int_G2 << " and sizeof(int_G2) : " << sizeof(int_G2) << endl;

    cout << "int_L1 : " << int_L1 << ", &int_L1 : " << &int_L1 << " and sizeof(int_L1) : " << sizeof(int_L1) << endl;
    cout << "int_L2 : " << int_L2 << ", &int_L2 : " << &int_L2 << " and sizeof(int_L2) : " << sizeof(int_L2) << endl;
    function();

    return 0;
}