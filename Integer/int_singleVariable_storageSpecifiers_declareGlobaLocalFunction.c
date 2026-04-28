#include <stdio.h>

/*
int auto int_auto_G; // error: file-scope declaration of 'int_auto_G' specifies 'auto'
auto int auto_int_G; // error: file-scope declaration of 'auto_int_G' specifies 'auto'
*/

/*
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
    int auto int_auto_L;
    auto int auto_int_L;

/*
    int extern int_extern_L; // undefined reference to `int_extern_L'
    extern int extern_int_L; // undefined reference to `extern_int_L'
*/

    int static int_static_L;
    static int static_int_L;

    int volatile int_volatile_L;
    volatile int volatile_int_L;

/*
    printf("int_auto_G : %c, &int_auto_G : %p, sizeof(int_auto_G) : %d and sizeof(&int_auto_G) : %d\n", int_auto_G, &int_auto_G, sizeof(int_auto_G), sizeof(&int_static_G)); // error: 'int_auto_G' undeclared (first use in this function); did you mean 'int_auto_L'?
                                                                                                                                  // note: each undeclared identifier is reported only once for each function it appears in
    printf("auto_int_G : %c, &auto_int_G : %p, sizeof(auto_int_G) : %d and sizeof(&auto_int_G) : %d\n", auto_int_G, &auto_int_G, sizeof(auto_int_G), sizeof(&auto_int_G)); // error: 'auto_int_G' undeclared (first use in this function); did you mean 'auto_int_L'?
*/

/*
    printf("int_extern_G : %c, &int_extern_G : %p, sizeof(int_extern_G) : %d and sizeof(&int_extern_G) : %d\n", int_extern_G, &int_extern_G, sizeof(int_extern_G), sizeof(&int_extern_G)); // error: 'int_extern_G' undeclared (first use in this function)
                                                                                                                                              // note: each undeclared identifier is reported only once for each function it appears in
    printf("extern_int_G : %c, &extern_int_G : %p, sizeof(extern_int_G) : %d and sizeof(&extern_int_G) : %d\n", extern_int_G, &extern_int_G, sizeof(extern_int_G), sizeof(&extern_int_G)); // error: 'extern_int_G' undeclared (first use in this function)
*/

    printf("int_static_G : %c, &int_static_G : %p and sizeof(int_static_G) : %d and sizeof(&int_static_G) : %d\n", int_static_G, &int_static_G, sizeof(int_static_G), sizeof(&int_static_G));
    printf("static_int_G : %c, &static_int_G : %p and sizeof(static_int_G) : %d and sizeof(&static_int_G) : %d\n", static_int_G, &static_int_G, sizeof(static_int_G), sizeof(&static_int_G));

    printf("int_volatile_G : %c, &int_volatile_G : %p, sizeof(int_volatile_G) : %d and sizeof(&int_volatile_G) : %d\n", int_volatile_G, &int_volatile_G, sizeof(int_volatile_G), sizeof(&int_volatile_G));
    printf("volatile_int_G : %c, &volatile_int_G : %p, sizeof(volatile_int_G) : %d and sizeof(&volatile_int_G) : %d\n", volatile_int_G, &volatile_int_G, sizeof(volatile_int_G), sizeof(&volatile_int_G));

    printf("\n");

    printf("int_auto_L : %c, &int_auto_L : %p and sizeof(int_auto_L) : %d and sizeof(&int_auto_L) : %d\n", int_auto_L, &int_auto_L, sizeof(int_auto_L), sizeof(&int_auto_L));
    printf("auto_int_L : %c, &auto_int_L : %p and sizeof(auto_int_L) : %d and sizeof(&auto_int_L) : %d\n", auto_int_L, &auto_int_L, sizeof(auto_int_L), sizeof(&auto_int_L));

/*
    printf("int_extern_L : %c, &int_extern_L : %p and sizeof(int_extern_L) : %d and sizeof(&int_extern_L) : %d\n", int_extern_L, &int_extern_L, sizeof(int_extern_L), sizeof(&int_extern_L)); // error: 'int_extern_L' undeclared (first use in this function); did you mean 'int_auto_L'?
    printf("extern_int_L : %c, &extern_int_L : %p and sizeof(extern_int_L) : %d and sizeof(&extern_int_L) : %d\n", extern_int_L, &extern_int_L, sizeof(extern_int_L), sizeof(&extern_int_L)); // error: 'extern_int_L' undeclared (first use in this function); did you mean 'auto_int_L'?
*/

    printf("int_static_L : %c, &int_static_L : %p and sizeof(int_static_L) : %d and sizeof(&int_static_L) : %d\n", int_static_L, &int_static_L, sizeof(int_static_L), sizeof(&int_static_L));
    printf("static_int_L : %c, &static_int_L : %p and sizeof(static_int_L) : %d and sizeof(&static_int_L) : %d\n", static_int_L, &static_int_L, sizeof(static_int_L), sizeof(&static_int_L));

    printf("int_volatile_L : %c, &int_volatile_L : %p and sizeof(int_volatile_L) : %d and sizeof(&int_volatile_L) : %d\n", int_volatile_L, &int_volatile_L, sizeof(int_volatile_L), sizeof(&int_volatile_L));
    printf("volatile_int_L : %c, &volatile_int_L : %p and sizeof(volatile_int_L) : %d and sizeof(&volatile_int_L) : %d\n", volatile_int_L, &volatile_int_L, sizeof(volatile_int_L), sizeof(&volatile_int_L));

    printf("\n");

    function();

    return 0;
}

void function(void)
{
    int auto int_auto_F;
    auto int auto_int_F;

/*
    int extern int_extern_F; // undefined reference to `int_extern_F'
    extern int extern_int_F; // undefined reference to `extern_int_F'
*/

    int static int_static_F;
    static int static_int_F;

    int volatile int_volatile_F;
    volatile int volatile_int_F;

    printf("int_auto_F : %c, &int_auto_F : %p and sizeof(int_auto_F) : %d and sizeof(&int_auto_F) : %d\n", int_auto_F, &int_auto_F, sizeof(int_auto_F), sizeof(&int_auto_F));
    printf("auto_int_F : %c, &auto_int_F : %p and sizeof(auto_int_F) : %d and sizeof(&auto_int_F) : %d\n", auto_int_F, &auto_int_F, sizeof(auto_int_F), sizeof(&auto_int_F));

/*
    printf("int_extern_F : %c, &int_extern_F : %p and sizeof(int_extern_F) : %d and sizeof(&int_extern_F) : %d\n", int_extern_F, &int_extern_F, sizeof(int_extern_F), sizeof(&int_extern_F)); // error: 'int_extern_F' undeclared (first use in this function); did you mean 'int_auto_F'?
    printf("extern_int_F : %c, &extern_int_F : %p and sizeof(extern_int_F) : %d and sizeof(&extern_int_F) : %d\n", extern_int_F, &extern_int_F, sizeof(extern_int_F), sizeof(&extern_int_F)); // error: 'extern_int_F' undeclared (first use in this function); did you mean 'auto_int_F'?
*/
    printf("int_static_F : %c, &int_static_F : %p and sizeof(int_static_F) : %d and sizeof(&int_static_F) : %d\n", int_static_F, &int_static_F, sizeof(int_static_F), sizeof(&int_static_F));
    printf("static_int_F : %c, &static_int_F : %p and sizeof(static_int_F) : %d and sizeof(&static_int_F) : %d\n", static_int_F, &static_int_F, sizeof(static_int_F), sizeof(&static_int_F));

    printf("int_volatile_F : %c, &int_volatile_F : %p and sizeof(int_volatile_F) : %d and sizeof(&int_volatile_F) : %d\n", int_volatile_F, &int_volatile_F, sizeof(int_volatile_F), sizeof(&int_volatile_F));
    printf("volatile_int_F : %c, &volatile_int_F : %p and sizeof(volatile_int_F) : %d and sizeof(&volatile_int_F) : %d\n", volatile_int_F, &volatile_int_F, sizeof(volatile_int_F), sizeof(&volatile_int_F));

    return;
}