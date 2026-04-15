/**
 * @file string_analysis.c
 * @brief Demonstrates manual string length calculation and array size detection.
 *        Demonstrates size vs length of a string in C.
 *
 * This program explores the difference between:
 * - The memory size of a character array (allocated bytes)
 * - The logical length of a string (number of valid characters before '\0')
 *
 * Key concepts demonstrated:
 * - How to compute array size using pointer arithmetic macro.
 * - How to compute string length manually without strlen().
 */

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

/*=========================================================
 *                  MACRO DEFINITIONS
 *=========================================================*/

/**
 * @section MACROS
 * @brief Macro to calculate the total size of an array in bytes.
 *
 * This macro works by:
 * - Taking the address of the array (&SEQ_CHAR)
 * - Moving one element ahead (&SEQ_CHAR + 1)
 * - Subtracting both addresses after casting to char*
 *
 * This results in total memory size in bytes of the array.
 *
 * @warning This macro is safe only for actual arrays.
 *          It does NOT work correctly for pointers due to
 *          pointer decay and undefined boundary behavior.
 *
 * @param SEQ_CHAR Character array
 * @return Size of the array in bytes
 */

#define SIZE(SEQ_CHAR) ( (char *)(&SEQ_CHAR + 1) - (char *)&SEQ_CHAR )

/*=========================================================
 *              FUNCTION DECLARATIONS
 *=========================================================*/

/**
 * @brief Calculates the number of characters in a string excluding the null terminator.
 *
 * @param charSeq Pointer to the first character of the string.
 *
 * @return int Length of the string excluding '\0'.
 *
 * @details
 * The function traverses the string sequentially using pointer
 * arithmetic until it encounters the null terminator ('\0').
 */
int len_strings(char *charSeq);

/*=========================================================
 *                      MAIN FUNCTION
 *=========================================================*/

/**
 * @section MAIN
 * @brief Entry point of the program.
 *
 * Demonstrates:
 * - Difference between physical size of array and logical string length.
 * - Manual implementation of string traversal.
 *
 * @return int Exit status
 */

int main()
{
    /*---------------------------------------------
     * STRING INITIALIZATION
     *---------------------------------------------*/
    // Stack-allocated character array initialized with a string literal
    // This includes an implicit null terminator at the end
    char strings[] = "Sequence of Characters";

    /*---------------------------------------------
     * SIZE CALCULATION
     *---------------------------------------------*/
    // Displays total allocated memory size of the array in bytes
    // Includes the null terminator '\0'
    cout << "Size of strings (bytes) : " << (int)SIZE(strings);

    cout << endl;

    /*---------------------------------------------
     * LENGTH CALCULATION
     *---------------------------------------------*/
    // Displays number of valid characters excluding '\0'
    cout << "Length of strings (chars) : " << len_strings(strings);

    return 0;
}

/*=========================================================
 *              FUNCTION DEFINITIONS
 *=========================================================*/

/**
 * @section FUNCTIONS
 * @brief Custom implementation of string traversal logic.
 *
 * @param charSeq Pointer to the string
 * @return int Number of characters before null terminator
 */

int len_strings(char *charSeq)
{
    // Display first character before traversal begins
    cout << "Starting character : " << *charSeq << endl;

    int count = 0;

    cout << "Inside loop traversal :" << endl;

    /*---------------------------------------------
     * ITERATE THROUGH STRING
     *---------------------------------------------*/
    // Traverse memory sequentially until null terminator is found
    while(*charSeq != '\0')
    {
        // Print current character during traversal
        cout << *charSeq++ << " | ";

        // Increment logical character count
        count++;
    }

    cout << endl;

    return count;
}