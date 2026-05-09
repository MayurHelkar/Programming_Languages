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

    printf("Sizes of Functions ::\n");
    
    printf("\n");

    printf("*helloWorld_printFunction : %d\n", sizeof(*helloWorld_printFunction));
    printf("helloWorld_printFunction : %d\n", sizeof(helloWorld_printFunction));
    printf("&helloWorld_printFunction : %d\n", sizeof(&helloWorld_printFunction));

    printf("\n");

    printf("*funtionPointer_declareInitialize : %d\n", sizeof(*funtionPointer_declareInitialize));
    printf("funtionPointer_declareInitialize : %d\n", sizeof(funtionPointer_declareInitialize));
    printf("&funtionPointer_declareInitialize : %d\n", sizeof(&funtionPointer_declareInitialize));
    
    printf("\n");

    printf("*funtionPointer_define : %d\n", sizeof(*funtionPointer_define));
    printf("funtionPointer_define : %d\n", sizeof(funtionPointer_define));
    printf("&funtionPointer_define : %d\n", sizeof(&funtionPointer_define));
    
    return 0;
}