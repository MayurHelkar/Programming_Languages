#include <stdio.h>

/*
char auto char_auto_G; // error: file-scope declaration of 'char_auto_G' specifies 'auto'
auto char auto_char_G; // error: file-scope declaration of 'auto_char_G' specifies 'auto'
*/

/*
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
    char auto char_auto_L;
    auto char auto_char_L;

/*
    char extern char_extern_L; // undefined reference to `char_extern_L'
    extern char extern_char_L; // undefined reference to `extern_char_L'
*/

    char static char_static_L;
    static char static_char_L;

    char volatile char_volatile_L;
    volatile char volatile_char_L;

/*
    printf("char_auto_G : %c, &char_auto_G : %p, sizeof(char_auto_G) : %d and sizeof(&char_auto_G) : %d\n", char_auto_G, &char_auto_G, sizeof(char_auto_G), sizeof(&char_static_G)); // error: 'char_auto_G' undeclared (first use in this function); did you mean 'char_auto_L'?
                                                                                                                                  // note: each undeclared identifier is reported only once for each function it appears in
    printf("auto_char_G : %c, &auto_char_G : %p, sizeof(auto_char_G) : %d and sizeof(&auto_char_G) : %d\n", auto_char_G, &auto_char_G, sizeof(auto_char_G), sizeof(&auto_char_G)); // error: 'auto_char_G' undeclared (first use in this function); did you mean 'auto_char_L'?
*/

/*
    printf("char_extern_G : %c, &char_extern_G : %p, sizeof(char_extern_G) : %d and sizeof(&char_extern_G) : %d\n", char_extern_G, &char_extern_G, sizeof(char_extern_G), sizeof(&char_extern_G)); // error: 'char_extern_G' undeclared (first use in this function)
                                                                                                                                              // note: each undeclared identifier is reported only once for each function it appears in
    printf("extern_char_G : %c, &extern_char_G : %p, sizeof(extern_char_G) : %d and sizeof(&extern_char_G) : %d\n", extern_char_G, &extern_char_G, sizeof(extern_char_G), sizeof(&extern_char_G)); // error: 'extern_char_G' undeclared (first use in this function)
*/

    printf("char_static_G : %c, &char_static_G : %p and sizeof(char_static_G) : %d and sizeof(&char_static_G) : %d\n", char_static_G, &char_static_G, sizeof(char_static_G), sizeof(&char_static_G));
    printf("static_char_G : %c, &static_char_G : %p and sizeof(static_char_G) : %d and sizeof(&static_char_G) : %d\n", static_char_G, &static_char_G, sizeof(static_char_G), sizeof(&static_char_G));

    printf("char_volatile_G : %c, &char_volatile_G : %p, sizeof(char_volatile_G) : %d and sizeof(&char_volatile_G) : %d\n", char_volatile_G, &char_volatile_G, sizeof(char_volatile_G), sizeof(&char_volatile_G));
    printf("volatile_char_G : %c, &volatile_char_G : %p, sizeof(volatile_char_G) : %d and sizeof(&volatile_char_G) : %d\n", volatile_char_G, &volatile_char_G, sizeof(volatile_char_G), sizeof(&volatile_char_G));

    printf("\n");

    printf("char_auto_L : %c, &char_auto_L : %p and sizeof(char_auto_L) : %d and sizeof(&char_auto_L) : %d\n", char_auto_L, &char_auto_L, sizeof(char_auto_L), sizeof(&char_auto_L));
    printf("auto_char_L : %c, &auto_char_L : %p and sizeof(auto_char_L) : %d and sizeof(&auto_char_L) : %d\n", auto_char_L, &auto_char_L, sizeof(auto_char_L), sizeof(&auto_char_L));

/*
    printf("char_extern_L : %c, &char_extern_L : %p and sizeof(char_extern_L) : %d and sizeof(&char_extern_L) : %d\n", char_extern_L, &char_extern_L, sizeof(char_extern_L), sizeof(&char_extern_L)); // error: 'char_extern_L' undeclared (first use in this function); did you mean 'char_auto_L'?
    printf("extern_char_L : %c, &extern_char_L : %p and sizeof(extern_char_L) : %d and sizeof(&extern_char_L) : %d\n", extern_char_L, &extern_char_L, sizeof(extern_char_L), sizeof(&extern_char_L)); // error: 'extern_char_L' undeclared (first use in this function); did you mean 'auto_char_L'?
*/

    printf("char_static_L : %c, &char_static_L : %p and sizeof(char_static_L) : %d and sizeof(&char_static_L) : %d\n", char_static_L, &char_static_L, sizeof(char_static_L), sizeof(&char_static_L));
    printf("static_char_L : %c, &static_char_L : %p and sizeof(static_char_L) : %d and sizeof(&static_char_L) : %d\n", static_char_L, &static_char_L, sizeof(static_char_L), sizeof(&static_char_L));

    printf("char_volatile_L : %c, &char_volatile_L : %p and sizeof(char_volatile_L) : %d and sizeof(&char_volatile_L) : %d\n", char_volatile_L, &char_volatile_L, sizeof(char_volatile_L), sizeof(&char_volatile_L));
    printf("volatile_char_L : %c, &volatile_char_L : %p and sizeof(volatile_char_L) : %d and sizeof(&volatile_char_L) : %d\n", volatile_char_L, &volatile_char_L, sizeof(volatile_char_L), sizeof(&volatile_char_L));

    printf("\n");

    function();

    return 0;
}

void function(void)
{
    char auto char_auto_F;
    auto char auto_char_F;

/*
    char extern char_extern_F; // undefined reference to `char_extern_F'
    extern char extern_char_F; // undefined reference to `extern_char_F'
*/

    char static char_static_F;
    static char static_char_F;

    char volatile char_volatile_F;
    volatile char volatile_char_F;

    printf("char_auto_F : %c, &char_auto_F : %p and sizeof(char_auto_F) : %d and sizeof(&char_auto_F) : %d\n", char_auto_F, &char_auto_F, sizeof(char_auto_F), sizeof(&char_auto_F));
    printf("auto_char_F : %c, &auto_char_F : %p and sizeof(auto_char_F) : %d and sizeof(&auto_char_F) : %d\n", auto_char_F, &auto_char_F, sizeof(auto_char_F), sizeof(&auto_char_F));

/*
    printf("char_extern_F : %c, &char_extern_F : %p and sizeof(char_extern_F) : %d and sizeof(&char_extern_F) : %d\n", char_extern_F, &char_extern_F, sizeof(char_extern_F), sizeof(&char_extern_F)); // error: 'char_extern_F' undeclared (first use in this function); did you mean 'char_auto_F'?
    printf("extern_char_F : %c, &extern_char_F : %p and sizeof(extern_char_F) : %d and sizeof(&extern_char_F) : %d\n", extern_char_F, &extern_char_F, sizeof(extern_char_F), sizeof(&extern_char_F)); // error: 'extern_char_F' undeclared (first use in this function); did you mean 'auto_char_F'?
*/
    printf("char_static_F : %c, &char_static_F : %p and sizeof(char_static_F) : %d and sizeof(&char_static_F) : %d\n", char_static_F, &char_static_F, sizeof(char_static_F), sizeof(&char_static_F));
    printf("static_char_F : %c, &static_char_F : %p and sizeof(static_char_F) : %d and sizeof(&static_char_F) : %d\n", static_char_F, &static_char_F, sizeof(static_char_F), sizeof(&static_char_F));

    printf("char_volatile_F : %c, &char_volatile_F : %p and sizeof(char_volatile_F) : %d and sizeof(&char_volatile_F) : %d\n", char_volatile_F, &char_volatile_F, sizeof(char_volatile_F), sizeof(&char_volatile_F));
    printf("volatile_char_F : %c, &volatile_char_F : %p and sizeof(volatile_char_F) : %d and sizeof(&volatile_char_F) : %d\n", volatile_char_F, &volatile_char_F, sizeof(volatile_char_F), sizeof(&volatile_char_F));

    return;
}