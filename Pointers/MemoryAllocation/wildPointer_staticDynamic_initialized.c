#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var = 123456;
    int *staticPointer = &var;
    int *dynamicPointer = malloc(sizeof(int));
    dynamicPointer = &var;

    printf("*staticPointer : %d, staticPointer : %p and &staticPointer : %p\n", *staticPointer, staticPointer, &staticPointer);
    printf("*dynamicPointer : %d, dynamicPointer : %p and &dynamicPointer : %p\n", *dynamicPointer, dynamicPointer, &dynamicPointer);

    return 0;
}