#include <stdio.h>

/*
char const char_const_G; // error: uninitialized 'const char_const_G' [-fpermissive]
const char const_char_G; // error: uninitialized 'const const_char_G' [-fpermissive]
*/

void function(void)
{
/*
    char const char_const_F; // error: uninitialized 'const char_const_F' [-fpermissive]
    const char const_char_F; // error: uninitialized 'const const_char_F' [-fpermissive]
*/

/*
    printf("char_const_F : " << char_const_F << ", &char_const_F : " << &char_const_F << ", sizeof(char_const_F) : " << sizeof(char_const_F) << " and sizeof(&char_const_F) : " << sizeof(&char_const_F) << endl;
    printf("const_char_F : " << const_char_F << ", &const_char_F : " << &const_char_F << ", sizeof(const_char_F) : " << sizeof(const_char_F) << " and sizeof(&const_char_F) : " << sizeof(&const_char_F) << endl;
*/
    return;
}

int main()
{
/*
    char const char_const_L; // error: uninitialized 'const char_const_L' [-fpermissive]
    const char const_char_L; // error: uninitialized 'const const_char_L' [-fpermissive]
*/

/*
    printf("char_const_G : " <<  << ", &char_const_G : " << &char_const_G << ", sizeof(char_const_G) : " << sizeof(char_const_G) << " and sizeof(&char_const_G) : " << sizeof(&char_const_G) << endl;
    printf("const_char_G : " << const_char_G << ", &const_char_G : " << &const_char_G << ", sizeof(const_char_G) : " << sizeof(const_char_G) << " and sizeof(&const_char_G) : " << sizeof(&const_char_G) << endl;

    printf("char_const_L : " << char_const_L << ", &char_const_L : " << &char_const_L << ", sizeof(char_const_L) : " << sizeof(char_const_L) << " and sizeof(&char_const_L) : " << sizeof(&char_const_L) << endl;
    printf("const_char_L : " << const_char_L << ", &const_char_L : " << &const_char_L << ", sizeof(const_char_L) : " << sizeof(const_char_L) << " and sizeof(&const_char_L) : " << sizeof(&const_char_L) << endl;

    function();
*/
    return 0;
}