#include <stdio.h>
#include "arithmeticOperations.h"

int main()
{
    int Num1 = 12;
    int Num2 = 34;

    printf("Addition : %d\n", addition(Num1, Num2));
    printf("Subtraction : %d\n", subtraction(Num1, Num2));
    printf("Multiplication : %d\n", multiplication(Num1, Num2));
    printf("Ddivision with quotient : %d\n", division_quotient(Num1, Num2));
    printf("Division with Remainder : %d\n", division_remainder(Num1, Num2));

    return 0;
}