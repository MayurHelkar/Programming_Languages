#include <iostream>

using namespace std;

void evenOddCheck_modulus(int);

int main()
{
    int evenOdd;

    cout << "Enter a number to check if the value is Even or Odd : " << endl;
    cin >> evenOdd;

    evenOddCheck_modulus(evenOdd);

    return 0;
}

void evenOddCheck_modulus(int eO_num)
{
    cout << "Method : evenOddCheck_modulus()" << endl;

    if(eO_num % 2 == 0)
    {
        cout << eO_num << " is Even"  << endl;
    }
    else
    {
        cout << eO_num << " is Odd" << endl;
    }

    return;
}