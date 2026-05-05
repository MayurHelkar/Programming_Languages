#include <iostream>

using namespace std;

char char_G1, char_G2;

void function(void)
{
    char char_F1, char_F2;

    cout << "char_F1 : " << char_F1 << ", &char_F1 : " << &char_F1 << " and sizeof(char_F1) : " << sizeof(char_F1) << endl;
    cout << "char_F2 : " << char_F2 << ", &char_F2 : " << &char_F2 << " and sizeof(char_F2) : " << sizeof(char_F2) << endl;

    return;
}

int main()
{
    char char_L1, char_L2;

    cout << "main     : " << main << " and &main     : " << &main << endl;
    cout << "function : " << function << " and &function : " << &function << endl;

    cout << endl;

    cout << "char_G1 : " << char_G1 << ", &char_G1 : " << &char_G1 << " and sizeof(char_G1) : " << sizeof(char_G1) << endl;
    cout << "char_G2 : " << char_G2 << ", &char_G2 : " << &char_G2 << " and sizeof(char_G2) : " << sizeof(char_G2) << endl;

    cout << "char_L1 : " << char_L1 << ", &char_L1 : " << &char_L1 << " and sizeof(char_L1) : " << sizeof(char_L1) << endl;
    cout << "char_L2 : " << char_L2 << ", &char_L2 : " << &char_L2 << " and sizeof(char_L2) : " << sizeof(char_L2) << endl;
    function();

    return 0;
}