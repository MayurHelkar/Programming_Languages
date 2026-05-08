int addition(int number1, int number2)
{
    return number1 + number2;
}

int subtraction(int number1, int number2)
{
    if(number1 >  number2) return number1 - number2;
    else return number2 - number1;
}

int multiplication(int number1, int number2)
{
    return number1 * number2;
}

int division_quotient(int number1, int number2)
{
    if(number1 > number2)    return number1 / number2;
    else return number2 / number1;
}

int division_remainder(int number1, int number2)
{
    if(number1 > number2)   return number1 % number2;
    else number2 % number1;
}