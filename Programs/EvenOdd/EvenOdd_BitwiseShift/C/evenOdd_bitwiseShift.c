#include <stdio.h>

void evenOddCheck_bitwiseAND(int);

int main()
{
    int evenOdd;

    printf("Enter a number to check if the value is Even or Odd : ");
    scanf("%d", &evenOdd);

    evenOddCheck_bitwiseShift(evenOdd);

    return 0;
}

void evenOddCheck_bitwiseShift(int eO_num)
{
    int temp = eO_num;

    temp >>= 1;
    temp <<= 1;

    printf("Method : evenOddCheck_bitwiseShift()\n");
    if(eO_num == temp)
    {
        printf("%d is Even\n", eO_num);
    }
    else
    {
        printf("%d is Odd\n", eO_num);
    }

    return;
}