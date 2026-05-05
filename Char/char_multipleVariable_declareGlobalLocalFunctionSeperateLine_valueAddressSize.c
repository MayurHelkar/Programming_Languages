#include <stdio.h>

char char_G1;
char char_G2;

void function(void)
{
    char char_F1;
    char char_F2;

    printf("char_F1 : %c, &char_F1 : %p and sizeof(char_F1) : %d\n", char_F2, &char_F2, sizeof(char_F1));
    printf("char_F1 : %c, &char_F1 : %p and sizeof(char_F1) : %d\n", char_F2, &char_F2, sizeof(char_F2));

    return;
}

int main()
{
    char char_L1;
    char char_L2;

    printf("main     : %p and &main     : %p\n", main, &main);
    printf("function : %p and &function : %p\n", function, &function);

    printf("\n");

    printf("char_G1 : %c, &char_G1 : %p and sizeof(char_G1) : %d\n", char_G1, &char_G1, sizeof(char_G1));
    printf("char_G2 : %c, &char_G2 : %p and sizeof(char_G2) : %d\n", char_G2, &char_G2, sizeof(char_G2));

    printf("char_L1 : %c, &char_L1 : %p and sizeof(char_L1) : %d\n", char_L1, &char_L1, sizeof(char_L1));
    printf("char_L2 : %c, &char_L2 : %p and sizeof(char_L2) : %d\n", char_L2, &char_L2, sizeof(char_L2));
    function();

    return 0;
}