#include <iostream>
#include "basicCalculator_arithmeticOperations.hpp"

using namespace std;

int main()
{
    int Num1 = 12;
    int Num2 = 34;

    printf("Addition : %d\n", addition(Num1, Num2));
    printf("Subtraction : %d\n", subtraction(Num1, Num2));
    printf("Multiplication : %d\n", multiplication(Num1, Num2));
    printf("Division with quotient : %d\n", division_quotient(Num1, Num2));
    printf("Division with remainder : %d\n", division_remainder(Num1, Num2));

    return 0;
}