/**
 * @file char_sizes.cpp
 * @brief Demonstrates sizes of different variations of the char data type in C++.
 *
 * This program prints the memory size (in bytes) of various valid
 * character type combinations supported by the C++ language.
 *
 * @author
 * @date 2026
 */

#include <iostream>

using namespace std;

/**
 * @brief Entry point of the program
 * 
 * Displays sizes of different valid char type variations.
 * Invalid combinations are documented but commented out.
 * 
 * @return int Exit status (0 for success)
 */
int main()
{
    // ============================================================
    // SECTION 1: INTRODUCTION
    // ============================================================
    cout << "=== CHAR TYPE SIZE ANALYSIS ===" << endl;
    cout << "Sizes of all valid variations of 'char' type:\n" << endl;

    // ============================================================
    // SECTION 2: BASIC CHAR TYPE
    // ============================================================
    cout << "[Basic Type]" << endl;
    cout << "char                : " << sizeof(char) << " byte(s)" << endl;

    // ============================================================
    // SECTION 3: INVALID TYPE COMBINATIONS (DOCUMENTED)
    // ============================================================
    /*
    ---------------------------------------------------------------
    NOTE: The following combinations are INVALID in C++
    and will result in compilation errors.
    ---------------------------------------------------------------

    cout << "char short          : " << sizeof(char short) << endl;
    cout << "short char          : " << sizeof(short char) << endl;

    cout << "char long           : " << sizeof(char long) << endl;
    cout << "long char           : " << sizeof(long char) << endl;

    Reason:
    - 'char' cannot be combined with size specifiers like
      'short' or 'long'.
    */

    // ============================================================
    // SECTION 4: SIGNED CHAR VARIANTS
    // ============================================================
    cout << "\n[Signed Variants]" << endl;
    
    // Note: Both forms are valid and equivalent
    cout << "char signed         : " << sizeof(char signed) << " byte(s)" << endl;
    cout << "signed char         : " << sizeof(signed char) << " byte(s)" << endl;
    cout << "char (default sign) : " << sizeof(char) << " byte(s)" << endl;

    /*
    ---------------------------------------------------------------
    INVALID:
    cout << "char signed         : " << sizeof(char signed) << endl;

    Reason:
    - Correct syntax is 'signed char', not 'char signed'
    ---------------------------------------------------------------
    */

    // ============================================================
    // SECTION 5: UNSIGNED CHAR VARIANTS
    // ============================================================
    cout << "\n[Unsigned Variants]" << endl;

    // Valid syntax
    cout << "char unsigned       : " << sizeof(char unsigned) << " byte(s)" << endl;
    cout << "unsigned char       : " << sizeof(unsigned char) << " byte(s)" << endl;

    /*
    ---------------------------------------------------------------
    INVALID:
    cout << "char unsigned       : " << sizeof(char unsigned) << endl;

    Reason:
    - Correct syntax is 'unsigned char', not 'char unsigned'
    ---------------------------------------------------------------
    */

    // ============================================================
    // SECTION 6: SUMMARY
    // ============================================================
    cout << "\n=== SUMMARY ===" << endl;
    cout << "All 'char' variants occupy the same memory size." << endl;
    cout << "Modifiers affect value range, not size." << endl;

    return 0;
}