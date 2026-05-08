#include <stdio.h>

void evenOddCheck_modulus(int);

int main()
{
    int evenOdd;

    printf("Enter a number to check if the value is Even or Odd : ");
    scanf("%d", &evenOdd);

    evenOddCheck_modulus(evenOdd);

    return 0;
}

void evenOddCheck_modulus(int eO_num)
{
    printf("Method : evenOddCheck_modulus()\n");

    if(eO_num % 2 == 0)
    {
        printf("%d is Even\n", eO_num);
    }
    else
    {
        printf("%d is Odd\n", eO_num);
    }

    return;
}