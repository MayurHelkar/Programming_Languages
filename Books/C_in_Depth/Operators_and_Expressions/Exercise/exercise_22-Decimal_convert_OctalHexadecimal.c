/*
Write a program to accept a number in decimal and print the number in octal and hexadecimal.
*/

#include <stdio.h>

int main()
{
    int number;

    printf("Enter a Decimal Number : ");
    scanf("%d", &number);

    printf("Decimal format : %d %i\n", number, number);
//    printf("Octal format : %o %O\n", number, number);
    printf("Octal format : %o\n", number);
    printf("Hexadecimal format : %x %X\n", number, number);

    return 0;
}