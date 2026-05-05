#include <stdio.h>

char charFunctionChar_beforeMain(char char_var)
{
    return char_var;
}

int main()
{
    charFunctionChar_beforeMain('a');
/*
    charFunctionChar_afterMain('r'); // error: implicit declaration of function 'charFunctionChar_afterMain'; did you mean 'charFunctionChar_beforeMain'? [-Wimplicit-function-declaration]
                                     // note: previous implicit declaration of 'charFunctionChar_afterMain' with type 'int()'
*/

    return 0;
}

/*
char charFunctionChar_afterMain(char char_var) // error: conflicting types for 'charFunctionChar_afterMain'; have 'char(char)'
{
    return char_var;
}
*/