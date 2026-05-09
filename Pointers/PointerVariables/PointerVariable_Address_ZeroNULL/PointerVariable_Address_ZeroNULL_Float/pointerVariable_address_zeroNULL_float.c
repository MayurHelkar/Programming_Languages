#include <stdio.h>

int main()
{
    float *float_ptr_NULL = NULL;
    float *float_ptr_zero = 0;

    // printf("*float_ptr_NULL : %c\n", *float_ptr_NULL);
    printf("float_ptr_NULL         : %p\n", (void *)float_ptr_NULL);
    printf("&float_ptr_NULL        : %p\n\n", (void *)&float_ptr_NULL);

    // printf("*float_ptr_zero : %c\n", *float_ptr_zero);
    printf("float_ptr_zero         : %p\n", (void *)float_ptr_zero);
    printf("&float_ptr_zero        : %p\n\n", (void *)&float_ptr_zero);

    return 0;
}