#include <stdio.h>

char char_G;

void function(void)
{
    char char_F;

    printf("char_F : \'%c\' %u, &char_F : %p and sizof(char_F) : %d\n", char_F, &char_F, sizeof(char_F));

    return;
}

int main()
{
    char char_L;

    printf("main     : %u %p and &main     : %u %p\n", main, main, &main, &main);
    printf("function : %u %p and &function : %u %p\n", function, function, &function, &function);

    printf("\n");

    printf("char_G : \'%c\' %u, &char_G : %p and sizof(char_G) : %d\n", char_G, char_G, &char_G, sizeof(char_G));
    printf("char_L : \'%c\' %u, &char_L : %p and sizof(char_L) : %d\n", char_L, char_L, &char_L, sizeof(char_L));
    function();

    return 0;
}