#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *staticPointer;
    int *dynamicPointer;

    printf("*staticPointer : %d, staticPointer : %p and &staticPointer : %p\n", *staticPointer, staticPointer, &staticPointer);
    printf("*dynamicPointer : %d, dynamicPointer : %p and &dynamicPointer : %p\n", *dynamicPointer, dynamicPointer, &dynamicPointer);

    printf("\n");

    int var = 123456;
    staticPointer = &var;
    dynamicPointer = malloc(sizeof(int));

    printf("*staticPointer : %d, staticPointer : %p and &staticPointer : %p\n", *staticPointer, staticPointer, &staticPointer);
    printf("*dynamicPointer : %d, dynamicPointer : %p and &dynamicPointer : %p\n", *dynamicPointer, dynamicPointer, &dynamicPointer);

    return 0;
}