/**
 * @file float_sizes.cpp
 * @brief Demonstrates the size of floating-point data types in C++.
 * 
 * This program prints the size (in bytes) of the standard floating-point
 * type `float`. It also documents invalid type combinations such as
 * signed/unsigned/short/long with float for educational purposes.
 * 
 * @author
 * @date 2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Entry point of the program.
 * 
 * Displays the size of float and explains invalid type modifiers.
 * 
 * @return int Exit status of the program.
 */
int main()
{
    /************************************************************
     *                SECTION 1: PROGRAM HEADER
     ************************************************************/
    cout << "========================================\n";
    cout << "   FLOAT DATA TYPE SIZE INFORMATION\n";
    cout << "========================================\n\n";

    /************************************************************
     *                SECTION 2: VALID DATA TYPES
     ************************************************************/
    cout << "[VALID FLOAT TYPE]\n";
    cout << "Size of float : " << sizeof(float) << " bytes\n";

    /************************************************************
     *                SECTION 3: INVALID COMBINATIONS
     ************************************************************/
    /*
     * The following combinations are INVALID in C++ because:
     * Floating-point types (float, double) do NOT support
     * modifiers like signed, unsigned, short, or long (except long double).
     */

    /*
    cout << "\n[INVALID FLOAT MODIFIERS]\n";

    cout << "float signed : " << sizeof(float signed) << endl;
    cout << "signed float : " << sizeof(signed float) << endl;

    cout << "float unsigned : " << sizeof(float unsigned) << endl;
    cout << "unsigned float : " << sizeof(unsigned float) << endl;

    cout << "float short : " << sizeof(float short) << endl;
    cout << "short float : " << sizeof(short float) << endl;

    cout << "float long : " << sizeof(float long) << endl;
    cout << "long float : " << sizeof(long float) << endl;
    */

    /************************************************************
     *                SECTION 4: NOTES
     ************************************************************/
    cout << "\n[NOTE]\n";
    cout << "- 'float' is inherently signed.\n";
    cout << "- Only valid extended floating type is 'long double'.\n";
    cout << "- Modifiers like signed/unsigned apply only to integers.\n";

    /************************************************************
     *                SECTION 5: PROGRAM TERMINATION
     ************************************************************/
    cout << "\n========================================\n";
    cout << "        END OF PROGRAM\n";
    cout << "========================================\n";

    return 0;
}