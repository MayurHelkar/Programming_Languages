#include <stdio.h>

int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
int division_quotient(int, int);
int division_remainder(int, int);

// int (*functionPointer_Calculator)[](int, int) // error: declaration of 'functionPointer_Calculator' as array of functions
int (*functionPointer_Calculator[])(int, int) = { addition, subtraction, multiplication, division_quotient, division_remainder };

int main()
{
    int number1 = 12;
    int number2 = 34;

    printf("Addition : %d\n", functionPointer_Calculator[0](number1, number2));
    printf("Subtraction : %d\n", functionPointer_Calculator[1](number1, number2));
    printf("Multiplication : %d\n", functionPointer_Calculator[2](number1, number2));
    printf("Division Quotient : %d\n", functionPointer_Calculator[3](number1, number2));
    printf("Division Remainder : %d\n", functionPointer_Calculator[4](number1, number2));

    return 0;
}

int addition(int numb1, int numb2)
{
    return numb1 + numb2;
}

int subtraction(int numb1, int numb2)
{
    if(numb1 > numb2)   return numb1 - numb2;
    else    numb2 - numb1;
}

int multiplication(int numb1, int numb2)
{
    return numb1 * numb2;
}

int division_quotient(int numb1, int numb2)
{
    if(numb1 > numb2)   return numb1 / numb2;
    else    return numb1 / numb2;
}

int division_remainder(int numb1, int numb2)
{
    if(numb1 > numb2)   return numb1 / numb2;
    else   return numb2 / numb1;
}