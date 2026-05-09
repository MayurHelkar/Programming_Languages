#include <stdio.h>

int main()
{
    char *char_ptr_NULL = NULL;
    char *char_ptr_zero = 0;

    // printf("*char_ptr_NULL : %c\n", *char_ptr_NULL);
    printf("char_ptr_NULL         : %p\n", (void *)char_ptr_NULL);
    printf("&char_ptr_NULL        : %p\n\n", (void *)&char_ptr_NULL);

    // printf("*char_ptr_zero : %c\n", *char_ptr_zero);
    printf("char_ptr_zero         : %p\n", (void *)char_ptr_zero);
    printf("&char_ptr_zero        : %p\n\n", (void *)&char_ptr_zero);

    return 0;
}