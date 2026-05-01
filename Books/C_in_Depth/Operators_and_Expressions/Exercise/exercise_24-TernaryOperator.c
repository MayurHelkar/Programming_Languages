/*
Accept any two numbers, if the first number is greater than second then print the difference of these two numbers, otherwise print their sum. Write this program using ternary operator.
*/

#include <stdio.h>

int main()
{
    int no1, no2;

    printf("Enter 1st number : ");
    scanf("%d", &no1);

    printf("Enter 2nd number : ");
    scanf("%d", &no2);

    if(no1 > no2)
    {
        printf("%d is greater than %d\n", no1, no2);
    }
    else if(no2 > no1)
    {
        printf("%d is greater than %d\n", no2, no1);
    }
    else
    {
        printf("Invalid operation\n");
    }
    
    return 0;
}