#include <stdio.h>

double doubleFunctionDouble_beforeMain(double double_var)
{
    return double_var;
}

int main()
{
    doubleFunctionDouble_beforeMain(7442.1211);
/*
    doubleFunctionDouble_afterMain(67.323); // error: implicit declaration of function 'doubleFunctionDouble_afterMain'; did you mean 'doubleFunctionDouble_beforeMain'? [-Wimplicit-function-declaration]
                                            // note: previous implicit declaration of 'doubleFunctionDouble_afterMain' with type 'int()'
*/

    return 0;
}

/*
double doubleFunctionDouble_afterMain(double double_var) // error: conflicting types for 'doubleFunctionDouble_afterMain'; have 'double(double)'
{
    return double_var;
}
*/