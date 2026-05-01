/*
Write a program that enters temperature in Celsius and converts that into Fahrenheit.
*/

#include <stdio.h>

int main()
{
    short int select;

    float celsius;
    float fahrenheit;

    printf("Program to print Fahrenheit and Celsius\n");
    printf("1 : Select the Celsius as an output\n");
    printf("2 : Select the Fahrenheit as an output\n");
    printf("Enter any choice : ");
    scanf("%hd", &select);

    if(select == 1)
    {
        printf("Input the Fahrenheit value : ");
        scanf("%f", &fahrenheit);

        celsius = ( 5.0 * (fahrenheit - 32) ) / 9.0;
        printf("Celsius value : %f\n", celsius);
    }
    else if(select == 2)
    {
        printf("Input the Celsius value : ");
        scanf("%f", &celsius);

        fahrenheit = ( celsius * 9.0) / 5.0 + 32;
        printf("Fahrenheit value : %f\n", fahrenheit);
    }

    return 0;
}