#include <iostream>

using namespace std;

char char_G;

void function(void)
{
    char char_F;

    cout << "char_F : " << char_F << ", &char_F : " << &char_F << " and sizeof(char_F) : " << sizeof(char_F) << endl;

    return;
}

int main()
{
    char char_L;

    cout << "main     : " << main << " and &main     : " << &main << endl;
    cout << "function : " << function << " and &function : " << &function << endl;

    cout << endl;

    cout << "char_G : " << char_G << ", &char_G : " << &char_G << " and sizeof(char_G) : " << sizeof(char_G) << endl;
    cout << "char_L : " << char_L << ", &char_L : " << &char_L << " and sizeof(char_L) : " << sizeof(char_L) << endl;
    function();

    return 0;
}