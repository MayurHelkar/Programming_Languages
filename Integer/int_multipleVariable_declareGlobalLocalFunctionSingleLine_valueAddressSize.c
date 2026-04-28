#include <stdio.h>

int int_G1, int_G2;

void function(void)
{
    int int_F1, int_F2;

    printf("int_F1 : %d, &int_F1 : %p and sizeof(int_F1) : %d\n", int_F2, &int_F2, sizeof(int_F1));
    printf("int_F1 : %d, &int_F1 : %p and sizeof(int_F1) : %d\n", int_F2, &int_F2, sizeof(int_F2));

    return;
}

int main()
{
    int int_L1, int_L2;

    printf("main     : %p and &main     : %p\n", main, &main);
    printf("function : %p and &function : %p\n", function, &function);

    printf("\n");

    printf("int_G1 : %d, &int_G1 : %p and sizeof(int_G1) : %d\n", int_G1, &int_G1, sizeof(int_G1));
    printf("int_G2 : %d, &int_G2 : %p and sizeof(int_G2) : %d\n", int_G2, &int_G2, sizeof(int_G2));

    printf("int_L1 : %d, &int_L1 : %p and sizeof(int_L1) : %d\n", int_L1, &int_L1, sizeof(int_L1));
    printf("int_L2 : %d, &int_L2 : %p and sizeof(int_L2) : %d\n", int_L2, &int_L2, sizeof(int_L2));
    function();

    return 0;
}