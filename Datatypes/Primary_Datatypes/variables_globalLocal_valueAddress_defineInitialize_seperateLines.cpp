/**
 * @file main.cpp
 * @brief Demonstrates global vs local variables and their memory addresses in C++.
 * @details This program initializes global and local variables of different data types
 *          and prints their values along with memory addresses.
 */

#include <iostream>
using namespace std;

/**
 * @brief Global variables (default-initialized in global scope).
 * @details These variables are accessible throughout the program lifetime.
 */
char Char_G;
int Int_G;
float Float_G;
double Double_G;

/**
 * @note The following assignments are invalid outside a function scope.
 *       In C++, global variables can be declared and initialized globally,
 *       but assignment statements must be placed inside a function body
 *       (such as main() or another function).
 *
 * @error explanation:
 * These lines cause compilation errors because the compiler expects
 * declarations at global scope, not executable statements.
 *
 * @example Incorrect usage (causes error):
 *
 * Char_G = 'W';        // error: 'Char_G' does not name a type
 * Int_G = 8343;        // error: 'Int_G' does not name a type
 * Float_G = 45.6432;   // error: 'Float_G' does not name a type
 * Double_G = 7664.12547; // error: 'Double_G' does not name a type
 *
 * @reason:
 * At global scope, C++ only allows declarations/definitions.
 * Assignments like these are treated as invalid statements.
 *
 * @fix:
 * Move these assignments inside a function like main():
 *
 * int main() {
 *     Char_G = 'W';
 *     Int_G = 8343;
 *     Float_G = 45.6432;
 *     Double_G = 7664.12547;
 * }
 */

/**
 * @brief Entry point of the program.
 * @return int Returns 0 upon successful execution.
 */
int main()
{
    /**
     * @brief Local variables (exist only within main function scope).
     */
    char Char_L;
    int Int_L;
    float Float_L;
    double Double_L;

    // ============================
    // Assign values to global variables
    // ============================
    Char_G = 'W';
    Int_G = 8343;
    Float_G = 45.6432f;
    Double_G = 7664.12547;

    // ============================
    // Assign values to local variables
    // ============================
    Char_L = 'M';
    Int_L = 832365;
    Float_L = 65.1267f;
    Double_L = 65343.12345;

    // ============================
    // Display Global Variables
    // ============================
    cout << "==============================" << endl;
    cout << "Global Variables: Value & Address" << endl;
    cout << "==============================" << endl;

//    cout << "Char_G : " Char_G << " and &Char_G : " << &Char_G << endl;
    cout << "Char_G   : " << Char_G << " | Address: " << (void*)&Char_G << endl;
    cout << "Int_G    : " << Int_G << " | Address: " << &Int_G << endl;
    cout << "Float_G  : " << Float_G << " | Address: " << &Float_G << endl;
    cout << "Double_G : " << Double_G << " | Address: " << &Double_G << endl;

    cout << endl;

    // ============================
    // Display Local Variables
    // ============================
    cout << "==============================" << endl;
    cout << "Local Variables: Value & Address" << endl;
    cout << "==============================" << endl;

//    cout << "Char_L : " << Char_L << " and &Char_L : " << &Char_L << endl;
    cout << "Char_L   : " << Char_L << " | Address: " << (void*)&Char_L << endl;
    cout << "Int_L    : " << Int_L << " | Address: " << &Int_L << endl;
    cout << "Float_L  : " << Float_L << " | Address: " << &Float_L << endl;
    cout << "Double_L : " << Double_L << " | Address: " << &Double_L << endl;

    return 0;
}