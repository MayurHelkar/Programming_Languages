/*
Write a program that accepts marks in five subjects and calculates the total percentage marks.
*/

#include <stdio.h>

int main()
{
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;

    int res;

    printf("Enter 1st subject marks : ");
    scanf("%d", &sub1);

    printf("Enter 2nd subject marks : ");
    scanf("%d", &sub2);

    printf("Enter 3rd subject marks : ");
    scanf("%d", &sub3);

    printf("Enter 4th subject marks : ");
    scanf("%d", &sub4);

    printf("Enter 5th subject marks : ");
    scanf("%d", &sub5);

    res = sub1 + sub2 + sub3 + sub4 + sub5;
    printf("Result of all 5 Subjects : %d\n", res);

    return 0;
}