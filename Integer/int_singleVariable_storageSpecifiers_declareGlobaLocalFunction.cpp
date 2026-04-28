#include <iostream>

using namespace std;

/*
int auto int_auto_G; // error: two or more data types in declaration of 'int_auto_G'
auto int auto_int_G; // error: two or more data types in declaration of 'auto_int_G'

int extern int_extern_G; // undefined reference to `int_extern_G'
extern int extern_int_G; // undefined reference to `extern_int_G'
*/

int static int_static_G;
static int static_int_G;

int volatile int_volatile_G;
volatile int volatile_int_G;

void function(void);

int main()
{
/*
    int auto int_auto_L; // error: two or more data types in declaration of 'int_auto_L'
    auto int auto_int_L; // error: two or more data types in declaration of 'auto_int_L'

    int extern int_extern_L; // undefined reference to `int_extern_L'
    extern int extern_int_L; // undefined reference to `extern_int_L'
*/
    int static int_static_L;
    static int static_int_L;

    int volatile int_volatile_L;
    volatile int volatile_int_L;

/*
    cout << "int_auto_G : " << int_auto_G << ", &int_auto_G : " << &int_auto_G << ", sizeof(int_auto_G) : " << sizeof(int_auto_G) << " and sizeof(&int_auto_G) : " << sizeof(&int_auto_G) << endl; // error: 'int_auto_G' was not declared in this scope; did you mean 'int_static_G'?
    cout << "auto_int_G : " << auto_int_G << ", &auto_int_G : " << &auto_int_G << ", sizeof(auto_int_G) : " << sizeof(auto_int_G) << " and sizeof(&auto_int_G) : " << sizeof(&auto_int_G) << endl; // error: 'auto_int_G' was not declared in this scope; did you mean 'static_int_G'?

    cout << "int_extern_G : " << int_extern_G << ", &int_extern_G : " << &int_extern_G << ", sizeof(int_extern_G) : " << sizeof(int_extern_G) << " and sizeof(&int_extern_G) : " << sizeof(&int_extern_G) << endl; // error: 'int_extern_G' was not declared in this scope
    cout << "extern_int_G : " << extern_int_G << ", &extern_int_G : " << &extern_int_G << ", sizeof(extern_int_G) : " << sizeof(extern_int_G) << " and sizeof(&extern_int_G) : " << sizeof(&extern_int_G) << endl; // error: 'extern_int_G' was not declared in this scope
*/

    cout << "int_static_G : " << int_static_G << ", &int_static_G : " << &int_static_G << ", sizeof(int_static_G) : " << sizeof(int_static_G) << " and sizeof(&int_static_G) : " << sizeof(&int_static_G) << endl;
    cout << "static_int_G : " << static_int_G << ", &static_int_G : " << &static_int_G << ", sizeof(static_int_G) : " << sizeof(static_int_G) << " and sizeof(&static_int_G) : " << sizeof(&static_int_G) << endl;

    cout << "int_volatile_G : " << int_volatile_G << ", &int_volatile_G : " << &int_volatile_G << ", sizeof(int_volatile_G) : " << sizeof(int_volatile_G) << " and sizeof(&int_volatile_G) : " << sizeof(&int_volatile_G) << endl;
    cout << "volatile_int_G : " << volatile_int_G << ", &volatile_int_G : " << &volatile_int_G << ", sizeof(volatile_int_G) : " << sizeof(volatile_int_G) << " and sizeof(&volatile_int_G) : " << sizeof(&volatile_int_G) << endl;

    cout << endl;

/*
    cout << "int_auto_L : " << int_auto_L << ", &int_auto_L : " << &int_auto_L << ", sizeof(int_auto_L) : " << sizeof(int_auto_L) << " and sizeof(&int_auto_L) : " << sizeof(&int_auto_L) << endl; // error: 'int_auto_L' was not declared in this scope; did you mean 'int_static_L'?
    cout << "auto_int_L : " << auto_int_L << ", &auto_int_L : " << &auto_int_L << ", sizeof(auto_int_L) : " << sizeof(auto_int_L) << " and sizeof(&auto_int_L) : " << sizeof(&auto_int_L) << endl; // error: 'auto_int_L' was not declared in this scope; did you mean 'static_int_L'?

    cout << "int_extern_L : " << int_extern_L << ", &int_extern_L : " << &int_extern_L << ", sizeof(int_extern_L) : " << sizeof(int_extern_L) << " and sizeof(&int_extern_L) : " << sizeof(&int_extern_L) << endl; // error: 'int_extern_L' was not declared in this scope; did you mean 'int_extern_G'?
    cout << "extern_int_L : " << extern_int_L << ", &extern_int_L : " << &extern_int_L << ", sizeof(extern_int_L) : " << sizeof(extern_int_L) << " and sizeof(&extern_int_L) : " << sizeof(&extern_int_L) << endl; // error: 'extern_int_L' was not declared in this scope; did you mean 'extern_int_G'?
*/

    cout << "int_static_L : " << int_static_L << ", &int_static_L : " << &int_static_L << ", sizeof(int_static_L) : " << sizeof(int_static_L) << " and sizeof(&int_static_L) : " << sizeof(&int_static_L) << endl;
    cout << "static_int_L : " << static_int_L << ", &static_int_L : " << &static_int_L << ", sizeof(static_int_L) : " << sizeof(static_int_L) << " and sizeof(&static_int_L) : " << sizeof(&static_int_L) << endl;

    cout << "int_volatile_L : " << int_volatile_L << ", &int_volatile_L : " << &int_volatile_L << ", sizeof(int_volatile_L) : " << sizeof(int_volatile_L) << " and sizeof(&int_volatile_L) : " << sizeof(&int_volatile_L) << endl;
    cout << "volatile_int_L : " << volatile_int_L << ", &volatile_int_L : " << &volatile_int_L << ", sizeof(volatile_int_L) : " << sizeof(volatile_int_L) << " and sizeof(&volatile_int_L) : " << sizeof(&volatile_int_L) << endl;

    cout << endl;

    function();

    return 0;
}

void function(void)
{
/*
    int auto int_auto_F; // error: two or more data types in declaration of 'int_auto_F'
    auto int auto_int_F; // error: two or more data types in declaration of 'auto_int_F'

    int extern int_extern_F; // undefined reference to `int_extern_F'
    extern int extern_int_F; // undefined reference to `extern_int_F'
*/

    int static int_static_F;
    static int static_int_F;

    int volatile int_volatile_F;
    volatile int volatile_int_F;
/*
    cout << "int_auto_F : " << int_auto_F << ", &int_auto_F : " << &int_auto_F << ", sizeof(int_auto_F) : " << sizeof(int_auto_F) << " and sizeof(&int_auto_F) : " << sizeof(&int_auto_F) << endl; // error: 'int_auto_F' was not declared in this scope; did you mean 'int_static_F'?
    cout << "auto_int_F : " << auto_int_F << ", &auto_int_F : " << &auto_int_F << ", sizeof(auto_int_F) : " << sizeof(auto_int_F) << " and sizeof(&auto_int_F) : " << sizeof(&auto_int_F) << endl; // error: 'auto_int_F' was not declared in this scope; did you mean 'static_int_F'?

    cout << "int_extern_F : " << int_extern_F << ", &int_extern_F : " << &int_extern_F << ", sizeof(int_extern_F) : " << sizeof(int_extern_F) << " and sizeof(&int_extern_F) : " << sizeof(&int_extern_F) << endl; // error: 'int_extern_F' was not declared in this scope; did you mean 'int_extern_G'?
    cout << "extern_int_F : " << extern_int_F << ", &extern_int_F : " << &extern_int_F << ", sizeof(extern_int_F) : " << sizeof(extern_int_F) << " and sizeof(&extern_int_F) : " << sizeof(&extern_int_F) << endl; // error: 'extern_int_F' was not declared in this scope; did you mean 'extern_int_G'?
*/

    cout << "int_static_F : " << int_static_F << ", &int_static_F : " << &int_static_F << ", sizeof(int_static_F) : " << sizeof(int_static_F) << " and sizeof(&int_static_F) : " << sizeof(&int_static_F) << endl;
    cout << "static_int_F : " << static_int_F << ", &static_int_F : " << &static_int_F << ", sizeof(static_int_F) : " << sizeof(static_int_F) << " and sizeof(&static_int_F) : " << sizeof(&static_int_F) << endl;

    cout << "int_volatile_F : " << int_volatile_F << ", &int_volatile_F : " << &int_volatile_F << ", sizeof(int_volatile_F) : " << sizeof(int_volatile_F) << " and sizeof(&int_volatile_F) : " << sizeof(&int_volatile_F) << endl;
    cout << "volatile_int_F : " << volatile_int_F << ", &volatile_int_F : " << &volatile_int_F << ", sizeof(volatile_int_F) : " << sizeof(volatile_int_F) << " and sizeof(&volatile_int_F) : " << sizeof(&volatile_int_F) << endl;

    return;
}