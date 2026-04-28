#include <iostream>

using namespace std;

/*
int const int_const_G; // error: uninitialized 'const int_const_G' [-fpermissive]
const int const_int_G; // error: uninitialized 'const const_int_G' [-fpermissive]
*/

void function(void)
{
/*
    int const int_const_F; // error: uninitialized 'const int_const_F' [-fpermissive]
    const int const_int_F; // error: uninitialized 'const const_int_F' [-fpermissive]
*/

/*
    cout << "int_const_F : " << int_const_F << ", &int_const_F : " << &int_const_F << ", sizeof(int_const_F) : " << sizeof(int_const_F) << " and sizeof(&int_const_F) : " << sizeof(&int_const_F) << endl;
    cout << "const_int_F : " << const_int_F << ", &const_int_F : " << &const_int_F << ", sizeof(const_int_F) : " << sizeof(const_int_F) << " and sizeof(&const_int_F) : " << sizeof(&const_int_F) << endl;
*/
    return;
}

int main()
{
/*
    int const int_const_L; // error: uninitialized 'const int_const_L' [-fpermissive]
    const int const_int_L; // error: uninitialized 'const const_int_L' [-fpermissive]
*/

/*
    cout << "int_const_G : " << int_const_G << ", &int_const_G : " << &int_const_G << ", sizeof(int_const_G) : " << sizeof(int_const_G) << " and sizeof(&int_const_G) : " << sizeof(&int_const_G) << endl;
    cout << "const_int_G : " << const_int_G << ", &const_int_G : " << &const_int_G << ", sizeof(const_int_G) : " << sizeof(const_int_G) << " and sizeof(&const_int_G) : " << sizeof(&const_int_G) << endl;

    cout << "int_const_L : " << int_const_L << ", &int_const_L : " << &int_const_L << ", sizeof(int_const_L) : " << sizeof(int_const_L) << " and sizeof(&int_const_L) : " << sizeof(&int_const_L) << endl;
    cout << "const_int_L : " << const_int_L << ", &const_int_L : " << &const_int_L << ", sizeof(const_int_L) : " << sizeof(const_int_L) << " and sizeof(&const_int_L) : " << sizeof(&const_int_L) << endl;

    function();
*/
    return 0;
}