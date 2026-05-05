#include <stdio.h>

int intFunctionInt_beforeMain(int int_var)
{
    return int_var;
}

int main()
{
    intFunctionInt_beforeMain(563231);
//    intFunctionInt_afterMain(845432); // error: implicit declaration of function 'intFunctionInt_afterMain'; did you mean 'intFunctionInt_beforeMain'? [-Wimplicit-function-declaration]

    return 0;
}

/*
int intFunctionInt_afterMain(int int_var)
{
    return int_var;
}
*/