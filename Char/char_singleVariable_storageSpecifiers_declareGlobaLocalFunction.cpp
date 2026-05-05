#include <iostream>

using namespace std;

/*
char auto char_auto_G; // error: two or more data types in declaration of 'char_auto_G'
auto char auto_char_G; // error: two or more data types in declaration of 'auto_char_G'

char extern char_extern_G; // undefined reference to `char_extern_G'
extern char extern_char_G; // undefined reference to `extern_char_G'
*/

char static char_static_G;
static char static_char_G;

char volatile char_volatile_G;
volatile char volatile_char_G;

void function(void);

int main()
{
/*
    char auto char_auto_L; // error: two or more data types in declaration of 'char_auto_L'
    auto char auto_char_L; // error: two or more data types in declaration of 'auto_char_L'

    char extern char_extern_L; // undefined reference to `char_extern_L'
    extern char extern_char_L; // undefined reference to `extern_char_L'
*/
    char static char_static_L;
    static char static_char_L;

    char volatile char_volatile_L;
    volatile char volatile_char_L;

/*
    cout << "char_auto_G : " << char_auto_G << ", &char_auto_G : " << &char_auto_G << ", sizeof(char_auto_G) : " << sizeof(char_auto_G) << " and sizeof(&char_auto_G) : " << sizeof(&char_auto_G) << endl; // error: 'char_auto_G' was not declared in this scope; did you mean 'char_static_G'?
    cout << "auto_char_G : " << auto_char_G << ", &auto_char_G : " << &auto_char_G << ", sizeof(auto_char_G) : " << sizeof(auto_char_G) << " and sizeof(&auto_char_G) : " << sizeof(&auto_char_G) << endl; // error: 'auto_char_G' was not declared in this scope; did you mean 'static_char_G'?

    cout << "char_extern_G : " << char_extern_G << ", &char_extern_G : " << &char_extern_G << ", sizeof(char_extern_G) : " << sizeof(char_extern_G) << " and sizeof(&char_extern_G) : " << sizeof(&char_extern_G) << endl; // error: 'char_extern_G' was not declared in this scope
    cout << "extern_char_G : " << extern_char_G << ", &extern_char_G : " << &extern_char_G << ", sizeof(extern_char_G) : " << sizeof(extern_char_G) << " and sizeof(&extern_char_G) : " << sizeof(&extern_char_G) << endl; // error: 'extern_char_G' was not declared in this scope
*/

    cout << "char_static_G : " << char_static_G << ", &char_static_G : " << &char_static_G << ", sizeof(char_static_G) : " << sizeof(char_static_G) << " and sizeof(&char_static_G) : " << sizeof(&char_static_G) << endl;
    cout << "static_char_G : " << static_char_G << ", &static_char_G : " << &static_char_G << ", sizeof(static_char_G) : " << sizeof(static_char_G) << " and sizeof(&static_char_G) : " << sizeof(&static_char_G) << endl;

    cout << "char_volatile_G : " << char_volatile_G << ", &char_volatile_G : " << &char_volatile_G << ", sizeof(char_volatile_G) : " << sizeof(char_volatile_G) << " and sizeof(&char_volatile_G) : " << sizeof(&char_volatile_G) << endl;
    cout << "volatile_char_G : " << volatile_char_G << ", &volatile_char_G : " << &volatile_char_G << ", sizeof(volatile_char_G) : " << sizeof(volatile_char_G) << " and sizeof(&volatile_char_G) : " << sizeof(&volatile_char_G) << endl;

    cout << endl;

/*
    cout << "char_auto_L : " << char_auto_L << ", &char_auto_L : " << &char_auto_L << ", sizeof(char_auto_L) : " << sizeof(char_auto_L) << " and sizeof(&char_auto_L) : " << sizeof(&char_auto_L) << endl; // error: 'char_auto_L' was not declared in this scope; did you mean 'char_static_L'?
    cout << "auto_char_L : " << auto_char_L << ", &auto_char_L : " << &auto_char_L << ", sizeof(auto_char_L) : " << sizeof(auto_char_L) << " and sizeof(&auto_char_L) : " << sizeof(&auto_char_L) << endl; // error: 'auto_char_L' was not declared in this scope; did you mean 'static_char_L'?

    cout << "char_extern_L : " << char_extern_L << ", &char_extern_L : " << &char_extern_L << ", sizeof(char_extern_L) : " << sizeof(char_extern_L) << " and sizeof(&char_extern_L) : " << sizeof(&char_extern_L) << endl; // error: 'char_extern_L' was not declared in this scope; did you mean 'char_extern_G'?
    cout << "extern_char_L : " << extern_char_L << ", &extern_char_L : " << &extern_char_L << ", sizeof(extern_char_L) : " << sizeof(extern_char_L) << " and sizeof(&extern_char_L) : " << sizeof(&extern_char_L) << endl; // error: 'extern_char_L' was not declared in this scope; did you mean 'extern_char_G'?
*/

    cout << "char_static_L : " << char_static_L << ", &char_static_L : " << &char_static_L << ", sizeof(char_static_L) : " << sizeof(char_static_L) << " and sizeof(&char_static_L) : " << sizeof(&char_static_L) << endl;
    cout << "static_char_L : " << static_char_L << ", &static_char_L : " << &static_char_L << ", sizeof(static_char_L) : " << sizeof(static_char_L) << " and sizeof(&static_char_L) : " << sizeof(&static_char_L) << endl;

    cout << "char_volatile_L : " << char_volatile_L << ", &char_volatile_L : " << &char_volatile_L << ", sizeof(char_volatile_L) : " << sizeof(char_volatile_L) << " and sizeof(&char_volatile_L) : " << sizeof(&char_volatile_L) << endl;
    cout << "volatile_char_L : " << volatile_char_L << ", &volatile_char_L : " << &volatile_char_L << ", sizeof(volatile_char_L) : " << sizeof(volatile_char_L) << " and sizeof(&volatile_char_L) : " << sizeof(&volatile_char_L) << endl;

    cout << endl;

    function();

    return 0;
}

void function(void)
{
/*
    char auto char_auto_F; // error: two or more data types in declaration of 'char_auto_F'
    auto char auto_char_F; // error: two or more data types in declaration of 'auto_char_F'

    char extern char_extern_F; // undefined reference to `char_extern_F'
    extern char extern_char_F; // undefined reference to `extern_char_F'
*/

    char static char_static_F;
    static char static_char_F;

    char volatile char_volatile_F;
    volatile char volatile_char_F;
/*
    cout << "char_auto_F : " << char_auto_F << ", &char_auto_F : " << &char_auto_F << ", sizeof(char_auto_F) : " << sizeof(char_auto_F) << " and sizeof(&char_auto_F) : " << sizeof(&char_auto_F) << endl; // error: 'char_auto_F' was not declared in this scope; did you mean 'char_static_F'?
    cout << "auto_char_F : " << auto_char_F << ", &auto_char_F : " << &auto_char_F << ", sizeof(auto_char_F) : " << sizeof(auto_char_F) << " and sizeof(&auto_char_F) : " << sizeof(&auto_char_F) << endl; // error: 'auto_char_F' was not declared in this scope; did you mean 'static_char_F'?

    cout << "char_extern_F : " << char_extern_F << ", &char_extern_F : " << &char_extern_F << ", sizeof(char_extern_F) : " << sizeof(char_extern_F) << " and sizeof(&char_extern_F) : " << sizeof(&char_extern_F) << endl; // error: 'char_extern_F' was not declared in this scope; did you mean 'char_extern_G'?
    cout << "extern_char_F : " << extern_char_F << ", &extern_char_F : " << &extern_char_F << ", sizeof(extern_char_F) : " << sizeof(extern_char_F) << " and sizeof(&extern_char_F) : " << sizeof(&extern_char_F) << endl; // error: 'extern_char_F' was not declared in this scope; did you mean 'extern_char_G'?
*/

    cout << "char_static_F : " << char_static_F << ", &char_static_F : " << &char_static_F << ", sizeof(char_static_F) : " << sizeof(char_static_F) << " and sizeof(&char_static_F) : " << sizeof(&char_static_F) << endl;
    cout << "static_char_F : " << static_char_F << ", &static_char_F : " << &static_char_F << ", sizeof(static_char_F) : " << sizeof(static_char_F) << " and sizeof(&static_char_F) : " << sizeof(&static_char_F) << endl;

    cout << "char_volatile_F : " << char_volatile_F << ", &char_volatile_F : " << &char_volatile_F << ", sizeof(char_volatile_F) : " << sizeof(char_volatile_F) << " and sizeof(&char_volatile_F) : " << sizeof(&char_volatile_F) << endl;
    cout << "volatile_char_F : " << volatile_char_F << ", &volatile_char_F : " << &volatile_char_F << ", sizeof(volatile_char_F) : " << sizeof(volatile_char_F) << " and sizeof(&volatile_char_F) : " << sizeof(&volatile_char_F) << endl;

    return;
}