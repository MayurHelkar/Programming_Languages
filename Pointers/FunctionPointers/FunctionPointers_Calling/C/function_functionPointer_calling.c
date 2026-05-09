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

/*
//    printf("helloWorld_printFunction() : ", helloWorld_printFunction()); // error: invalid use of void expression
    printf("*helloWorld_printFunction() : ");           *helloWorld_printFunction();         // error: void value not ignored as it ought to be
    printf("*funtionPointer_declareInitialize() : ");   *funtionPointer_declareInitialize(); // error: void value not ignored as it ought to be

    printf("\n");
*/

    printf("helloWorld_printFunction() : ");            helloWorld_printFunction();
    printf("funtionPointer_declareInitialize() : ");    funtionPointer_declareInitialize();

/*
    printf("\n");

    printf("&helloWorld_printFunction() : ");           &helloWorld_printFunction();          // warning: taking address of expression of type 'void'
                                                                                              // error: lvalue required as unary '&' operand
    printf("&funtionPointer_declareInitialize() : ");    &funtionPointer_declareInitialize(); // warning: taking address of expression of type 'void'
                                                                                              // error: lvalue required as unary '&' operand
*/    
    return 0;
}