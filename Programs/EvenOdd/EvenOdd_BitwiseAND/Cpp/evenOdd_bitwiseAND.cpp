#include <iostream>

using namespace std;

void evenOddCheck_bitwiseAND(int);

int main()
{
    int evenOdd;

    printf("Enter a number to check if the value is Even or Odd : ");
    scanf("%d", &evenOdd);
    
    evenOddCheck_bitwiseAND(evenOdd);

    return 0;
}

void evenOddCheck_bitwiseAND(int eO_num)
{
    printf("Method : evenOddCheck_bitwiseAND()\n");

    if( (eO_num & 1) == 0)
    {
        printf("%d is Even\n", eO_num);
    }
    else
    {
        printf("%d is Odd\n", eO_num);
    }

    return;
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