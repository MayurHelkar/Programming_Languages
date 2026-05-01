/*
Write a program that accepts the radius of a circle and calculates the area and perimeter of that circle.
*/

#define PI 3.14159

#include <stdio.h>

int main()
{
    double radius;
    double area;
    double perimeter;

    printf("Enter the length of radius in cm : ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    perimeter = 2 * PI * radius;

    printf("Perimeter of Circle : %lf\n", perimeter);
    printf("Area of Circle : %lf\n", area);

    return 0;
}