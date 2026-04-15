#include <iostream>

using namespace std;

/**
 * @brief Displays the sizes of various integer type variations in C++.
 * 
 * This program demonstrates that different permutations of type modifiers
 * (signed, unsigned, short, long, long long) result in the same underlying types.
 * It prints their sizes in bytes using the sizeof operator.
 * 
 * @author 
 * @date 
 */
int main()
{
    /**
     * ============================================================
     * SECTION: BASIC INTEGER TYPES
     * ============================================================
     */
    cout << "\n========== BASIC INTEGER TYPES ==========\n";

    cout << "int                : " << sizeof(int) << " bytes\n";


    /**
     * ============================================================
     * SECTION: SIGNED INTEGER VARIANTS
     * ============================================================
     */
    cout << "\n========== SIGNED INTEGER VARIANTS ==========\n";

    cout << "int signed         : " << sizeof(int signed) << " bytes\n";
    cout << "signed int         : " << sizeof(signed int) << " bytes\n";


    /**
     * ============================================================
     * SECTION: UNSIGNED INTEGER VARIANTS
     * ============================================================
     */
    cout << "\n========== UNSIGNED INTEGER VARIANTS ==========\n";

    cout << "int unsigned       : " << sizeof(int unsigned) << " bytes\n";
    cout << "unsigned int       : " << sizeof(unsigned int) << " bytes\n";


    /**
     * ============================================================
     * SECTION: SHORT INTEGER VARIANTS
     * ============================================================
     */
    cout << "\n========== SHORT INTEGER VARIANTS ==========\n";

    cout << "int short          : " << sizeof(int short) << " bytes\n";
    cout << "short int          : " << sizeof(short int) << " bytes\n";


    /**
     * ============================================================
     * SECTION: SIGNED SHORT VARIANTS
     * ============================================================
     */
    cout << "\n========== SIGNED SHORT VARIANTS ==========\n";

    cout << "int short signed   : " << sizeof(int short signed) << " bytes\n";
    cout << "int signed short   : " << sizeof(int signed short) << " bytes\n";
    cout << "short int signed   : " << sizeof(short int signed) << " bytes\n";
    cout << "short signed int   : " << sizeof(short signed int) << " bytes\n";
    cout << "signed int short   : " << sizeof(signed int short) << " bytes\n";
    cout << "signed short int   : " << sizeof(signed short int) << " bytes\n";


    /**
     * ============================================================
     * SECTION: LONG INTEGER VARIANTS
     * ============================================================
     */
    cout << "\n========== LONG INTEGER VARIANTS ==========\n";

    cout << "int long           : " << sizeof(int long) << " bytes\n";
    cout << "long int           : " << sizeof(long int) << " bytes\n";


    /**
     * ============================================================
     * SECTION: SIGNED LONG VARIANTS
     * ============================================================
     */
    cout << "\n========== SIGNED LONG VARIANTS ==========\n";

    cout << "int long signed    : " << sizeof(int long signed) << " bytes\n";
    cout << "int signed long    : " << sizeof(int signed long) << " bytes\n";
    cout << "long int signed    : " << sizeof(long int signed) << " bytes\n";
    cout << "long signed int    : " << sizeof(long signed int) << " bytes\n";
    cout << "signed int long    : " << sizeof(signed int long) << " bytes\n";
    cout << "signed long int    : " << sizeof(signed long int) << " bytes\n";


    /**
     * ============================================================
     * SECTION: LONG LONG INTEGER VARIANTS
     * ============================================================
     */
    cout << "\n========== LONG LONG INTEGER VARIANTS ==========\n";

    cout << "int long long      : " << sizeof(int long long) << " bytes\n";
    cout << "long int long      : " << sizeof(long int long) << " bytes\n";
    cout << "long long int      : " << sizeof(long long int) << " bytes\n";


    /**
     * ============================================================
     * SECTION: SIGNED LONG LONG VARIANTS
     * ============================================================
     */
    cout << "\n========== SIGNED LONG LONG VARIANTS ==========\n";

    cout << "int long long signed : " << sizeof(int long long signed) << " bytes\n";
    cout << "int long signed long : " << sizeof(int long signed long) << " bytes\n";
    cout << "int signed long long : " << sizeof(int signed long long) << " bytes\n";
    cout << "long int long signed : " << sizeof(long int long signed) << " bytes\n";
    cout << "long int signed long : " << sizeof(long int signed long) << " bytes\n";
    cout << "long signed int long : " << sizeof(long signed int long) << " bytes\n";
    cout << "long long int signed : " << sizeof(long long int signed) << " bytes\n";
    cout << "long long signed int : " << sizeof(long long signed int) << " bytes\n";
    cout << "long signed long int : " << sizeof(long signed long int) << " bytes\n";


    /**
     * ============================================================
     * SECTION: UNSIGNED LONG LONG VARIANTS
     * ============================================================
     */
    cout << "\n========== UNSIGNED LONG LONG VARIANTS ==========\n";

    cout << "int long long unsigned : " << sizeof(int long long unsigned) << " bytes\n";
    cout << "int long unsigned long : " << sizeof(int long unsigned long) << " bytes\n";
    cout << "int unsigned long long : " << sizeof(int unsigned long long) << " bytes\n";
    cout << "long int long unsigned : " << sizeof(long int long unsigned) << " bytes\n";
    cout << "long int unsigned long : " << sizeof(long int unsigned long) << " bytes\n";
    cout << "long unsigned int long : " << sizeof(long unsigned int long) << " bytes\n";
    cout << "long long int unsigned : " << sizeof(long long int unsigned) << " bytes\n";
    cout << "long long unsigned int : " << sizeof(long long unsigned int) << " bytes\n";
    cout << "long unsigned long int : " << sizeof(long unsigned long int) << " bytes\n";


    /**
     * ============================================================
     * END OF PROGRAM
     * ============================================================
     */
    cout << "\n========== END OF REPORT ==========\n";

    return 0;
}