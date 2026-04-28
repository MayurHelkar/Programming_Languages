#include <stdio.h>

int int_G;

void function(void)
{
    int int_F;

    printf("int_F : %d, &int_F : %p and sizof(int_F) : %d\n", int_F, &int_F, sizeof(int_F));

    return;
}

int main()
{
    int int_L;

    printf("main     : %u %p and &main     : %u %p\n", main, main, &main, &main);
    printf("function : %u %p and &function : %u %p\n", function, function, &function, &function);

    printf("\n");

    printf("int_G : %d, &int_G : %p and sizof(int_G) : %d\n", int_G, &int_G, sizeof(int_G));
    printf("int_L : %d, &int_L : %p and sizof(int_L) : %d\n", int_L, &int_L, sizeof(int_L));
    function();

    return 0;
}