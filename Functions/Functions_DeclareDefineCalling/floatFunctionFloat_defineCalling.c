#include <stdio.h>

float floatFunctionFloat_beforeMain(float float_var)
{
    return float_var;
}

int main()
{
    floatFunctionFloat_beforeMain(76.31);
/*
    floatFunctionFloat_afterMain(53.12); // error: implicit declaration of function 'floatFunctionFloat_afterMain'; did you mean 'floatFunctionFloat_beforeMain'? [-Wimplicit-function-declaration]
                                         // note: previous implicit declaration of 'floatFunctionFloat_afterMain' with type 'int()'
*/

    return 0;
}

/*
float floatFunctionFloat_afterMain(float float_var) // error: conflicting types for 'floatFunctionFloat_afterMain'; have 'float(float)'
{
    return float_var;
}
*/