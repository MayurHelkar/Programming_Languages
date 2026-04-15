/**
 * @file main.cpp
 * @brief Demonstrates global vs local variables and their memory addresses.
 * @details This program prints values and memory addresses of global and local variables
 *          to illustrate scope and memory layout in C++.
 */

#include <iostream>

using namespace std;

/**
 * @brief Global character variable
 */
char Char_G = 'W';

/**
 * @brief Global integer variable
 */
int Int_G = 8343;

/**
 * @brief Global float variable
 */
float Float_G = 45.6432f;

/**
 * @brief Global double variable
 */
double Double_G = 7664.12547;

/**
 * @brief Entry point of the program
 * @return int Exit status
 */
int main()
{
    /**
     * @brief Local variables inside main()
     */
    char Char_L = 'M';
    int Int_L = 832365;
    float Float_L = 65.1267f;
    double Double_L = 65343.12345;

    cout << "================ GLOBAL VARIABLES (Value & Address) ================\n";

//    cout << "Char_G : " Char_G << " and &Char_G : " << &Char_G << endl;
    cout << "Char_G   : " << Char_G << "   | Address: " << (void*)&Char_G << endl;
    cout << "Int_G    : " << Int_G << "   | Address: " << &Int_G << endl;
    cout << "Float_G  : " << Float_G << "   | Address: " << &Float_G << endl;
    cout << "Double_G : " << Double_G << "   | Address: " << &Double_G << endl;

    cout << "\n================ LOCAL VARIABLES (Value & Address) ================\n";

//    cout << "Char_L : " << Char_L << " and &Char_L : " << &Char_L << endl;
    cout << "Char_L   : " << Char_L << "   | Address: " << (void*)&Char_L << endl;
    cout << "Int_L    : " << Int_L << "   | Address: " << &Int_L << endl;
    cout << "Float_L  : " << Float_L << "   | Address: " << &Float_L << endl;
    cout << "Double_L : " << Double_L << "   | Address: " << &Double_L << endl;

    return 0;
}