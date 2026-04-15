/****************************************************************************** 
 * @file        main.c
 * @brief       Demonstrates string mutability and pointer arithmetic for size
 * calculation in C.
 * @details     This program uses a custom macro to determine the size of a 
 * stack-allocated array and allows the user to overwrite its 
 * contents to prove mutability.
 ******************************************************************************/ 

#include <iostream>
#include <string>

/**
 * @brief Imports the entire C++ Standard Library namespace into the global scope.
 *
 * This directive allows unqualified access to standard library symbols
 * (e.g., cout instead of std::cout, cin instead of std::cin, string instead of std::string).
 *
 * @note Commonly used in small programs, examples, or learning environments
 *       for convenience and readability.
 *
 * @warning Avoid using in production code or header files, as it may lead to
 *          naming conflicts in larger codebases due to polluting the global namespace.
 */
using namespace std;

/**
 * @brief Macro to total size in bytes of a stack-allocated sequence
            calculate size of a variable in bytes.
 *
 * This macro computes the size of a variable by using pointer arithmetic.
 * It avoids using sizeof directly and instead calculates the difference
 * between addresses.
 * @details This macro uses pointer arithmetic by finding the address of the 
 * entire array plus one (the memory location immediately following 
 * the array << endl and subtracting the starting address of the array.
 * @param SEQ_CHAR Variable whose size is to be calculated
 * @return Size of the variable in bytes
 *
 * @note This works correctly for arrays but should be used carefully
 *       with pointers.
 */

// ============================================================
// ADDITIONAL NOTE:
// This macro assumes SEQ_CHAR is a stack-allocated array.
// If used on a pointer, it will produce incorrect results due
// to pointer decay and undefined memory boundary behavior.
// ============================================================
#define SIZE(SEQ_CHAR) ( (char *)(&SEQ_CHAR + 1) - (char *)&SEQ_CHAR )

/**
 * @brief Entry point of the program/ application.
 *
 * Demonstrates mutability of a character array (string << endl by allowing
 * user input to overwrite its contents.
 *
 * @return int Returns 0 on successful execution
 */
int main()
{
    // =========================================================
    // NOTE:
    // This is a stack-allocated character array initialized with
    // a string literal. Unlike string literals (const char*),
    // this array is mutable.
    // =========================================================
    char string[] = { "Mutable String" };

    cout << "string : " << string << endl;
    cout << endl << endl;

    cout << "Check if the String is Mutable ::" << endl << endl;

    /*=============================================================
     * Calculate size of the string using custom SIZE macro.
     * This includes the null terminator '\0'.
     *=============================================================*/
    char Size = (int)SIZE(string);

    // NOTE: Storing size in a 'char' is not ideal.
    // It may overflow for larger arrays. 'int' or 'size_t' is preferred.

    cout << "Size of string : " << (int)SIZE(string) << endl;

    int loop;

    /*=============================================================
     * Prompt user to modify the string.
     * Size - 1 ensures null terminator is preserved.
     * Calculate array size using the custom SIZE macro *
     * Prompt user for input to demonstrate mutability *
     *=============================================================*/
    cout << "Enter " << Size - 1 << " characters to modify the string : " << endl;

    for(loop = 0; loop < (int)(Size - 1); loop++)
    {
        /*=========================================================
         * Read character input one by one and overwrite array.
         * Note: This will include whitespace characters as well.
         *=========================================================*/

        // ========================================================
        // WARNING:
        // cin >> &string[loop]; is incorrect usage.
        // It passes a char* instead of a char reference.
        // Proper usage should be:
        //     cin >> string[loop];
        // or for whitespace-safe input:
        //     cin.get(string[loop]);
        // ========================================================
        cin >> &string[loop];
    }

    cout << endl;

    /*=============================================================
     * Display modified string.
     *=============================================================*/
    cout << "Modified string : " << string << endl;

    return 0;
}