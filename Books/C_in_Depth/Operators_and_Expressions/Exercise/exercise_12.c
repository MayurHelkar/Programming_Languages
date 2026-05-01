#include <stdio.h>
int main(void)
{
    int a=9;
    char Ch='A'; 
    a = a+Ch+24;
    printf("%d,%c\t%d,%c\n",Ch,Ch,a,a);
    return 0;
}