/*
Write a program to accept any number and print the value of remainder after dividing it by 3.
*/

#include <stdio.h>

int main()
{
    int number;

    printf("Enter a Number : ");
    scanf("%d", &number);

    int rem = number % 3;
    printf("Remainder value after dividing Number by 3 : %d\n", rem);

    return 0;
}