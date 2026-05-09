#include <stdio.h>

void helloWorld_printFunction(void)
{
    printf("Hello World\n");

    return;
}

void (*funtionPointer_declareInitialize)(void);
void (*funtionPointer_define)(void) = &helloWorld_printFunction;

int main()
{
    funtionPointer_declareInitialize = helloWorld_printFunction;

    printf("Address using dereference, direct and reference ::\n");

    printf("\n");

    printf("*helloWorld_printFunction : %p\n", *helloWorld_printFunction);
    printf("helloWorld_printFunction : %p\n", helloWorld_printFunction);
    printf("&helloWorld_printFunction : %p\n", &helloWorld_printFunction);

    printf("\n");

    printf("*funtionPointer_declareInitialize : %p\n", *funtionPointer_declareInitialize);
    printf("funtionPointer_declareInitialize : %p\n", funtionPointer_declareInitialize);
    printf("&funtionPointer_declareInitialize : %p\n", &funtionPointer_declareInitialize);

    printf("\n");

    printf("*funtionPointer_define : %p\n", *funtionPointer_define);
    printf("funtionPointer_define : %p\n", funtionPointer_define);
    printf("&funtionPointer_define : %p\n", &funtionPointer_define);
    
    return 0;
}