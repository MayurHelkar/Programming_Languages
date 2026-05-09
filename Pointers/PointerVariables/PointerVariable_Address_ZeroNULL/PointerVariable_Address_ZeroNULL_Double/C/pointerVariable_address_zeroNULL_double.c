#include <stdio.h>

int main()
{
    double *double_ptr_NULL = NULL;
    double *double_ptr_zero = 0;

    // printf("*double_ptr_NULL : %c\n", *double_ptr_NULL);
    printf("double_ptr_NULL         : %p\n", (void *)double_ptr_NULL);
    printf("&double_ptr_NULL        : %p\n\n", (void *)&double_ptr_NULL);

    // printf("*double_ptr_zero : %c\n", *double_ptr_zero);
    printf("double_ptr_zero         : %p\n", (void *)double_ptr_zero);
    printf("&double_ptr_zero        : %p\n\n", (void *)&double_ptr_zero);

    return 0;
}