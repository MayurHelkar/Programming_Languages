#include <stdio.h>
int main(void)
{
    int a=10, b=3, max;
//    a>b ? max=a : max=b; // error: lvalue required as left operand of assignment
    a>b ? (max=a) : (max=b);
    printf("%d\n", max);
    return 0;
}