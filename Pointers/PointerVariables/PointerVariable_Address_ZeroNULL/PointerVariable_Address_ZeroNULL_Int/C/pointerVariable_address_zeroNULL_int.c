#include <stdio.h>

int main()
{
    int *int_ptr_NULL = NULL;
    int *int_ptr_zero = 0;

    // printf("*int_ptr_NULL : %c\n", *int_ptr_NULL);
    printf("int_ptr_NULL         : %p\n", (void *)int_ptr_NULL);
    printf("&int_ptr_NULL        : %p\n\n", (void *)&int_ptr_NULL);

    // printf("*int_ptr_zero : %c\n", *int_ptr_zero);
    printf("int_ptr_zero         : %p\n", (void *)int_ptr_zero);
    printf("&int_ptr_zero        : %p\n\n", (void *)&int_ptr_zero);

    return 0;
}