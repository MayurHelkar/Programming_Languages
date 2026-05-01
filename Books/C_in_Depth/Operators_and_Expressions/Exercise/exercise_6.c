#include <stdio.h>
int main(void)
{
    int x,y,z;
    x = 8++; // error: lvalue required as increment operand
    y = ++x++; // error: lvalue required as increment operand
    z = (x+y)--; // error: lvalue required as decrement operand
    printf("x=%d, y=%d, z=%d\n",x,y);
    return 0;
}