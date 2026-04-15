/**
 * @file datatype_sizes.cpp
 * @brief Demonstrates valid and invalid combinations of the double data type in C++.
 * 
 * This program prints the size of valid floating-point types and highlights
 * invalid type combinations (commented out to avoid compilation errors).
 * 
 * @author 
 * @date 2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Entry point of the program
 * 
 * Displays sizes of valid double type variants and documents invalid usages.
 * 
 * @return int Exit status
 */
int main()
{
    // ============================================================
    // SECTION 1: BASIC DOUBLE TYPE
    // ============================================================
    cout << "========== BASIC DOUBLE TYPE ==========\n";
    cout << "double : " << sizeof(double) << endl;

    // ============================================================
    // SECTION 2: INVALID SIGN MODIFIERS
    // NOTE: Floating point types cannot be signed/unsigned
    // ============================================================
    cout << "\n========== INVALID SIGN MODIFIERS ==========\n";

    // cout << "double signed : " << sizeof(double signed) << endl;   // ❌ Error
    // cout << "signed double : " << sizeof(signed double) << endl;   // ❌ Error

    // cout << "double unsigned : " << sizeof(double unsigned) << endl; // ❌ Error
    // cout << "unsigned double : " << sizeof(unsigned double) << endl; // ❌ Error

    cout << "Note: 'signed' and 'unsigned' are not applicable to floating-point types.\n";

    // ============================================================
    // SECTION 3: INVALID SIZE MODIFIERS (SHORT)
    // ============================================================
    cout << "\n========== INVALID SHORT MODIFIER ==========\n";

    // cout << "double short : " << sizeof(double short) << endl;   // ❌ Error
    // cout << "short double : " << sizeof(short double) << endl;   // ❌ Error

    cout << "Note: 'short' cannot be used with double.\n";

    // ============================================================
    // SECTION 4: VALID SIZE MODIFIER (LONG)
    // ============================================================
    cout << "\n========== VALID LONG MODIFIER ==========\n";

    cout << "double long : " << sizeof(double long) << endl;   // Valid (same as long double)
    cout << "long double : " << sizeof(long double) << endl;   // Standard usage

    // ============================================================
    // SECTION 5: INVALID LONG LONG COMBINATIONS
    // ============================================================
    cout << "\n========== INVALID LONG LONG MODIFIERS ==========\n";

    // cout << "double long long : " << sizeof(double long long) << endl; // ❌ Error
    // cout << "long double long : " << sizeof(long double long) << endl; // ❌ Error
    // cout << "long long double : " << sizeof(long long double) << endl; // ❌ Error

    cout << "Note: 'long long' cannot be combined with floating-point types.\n";

    // ============================================================
    // PROGRAM TERMINATION
    // ============================================================
    return 0;
}