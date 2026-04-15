/******************************************************************************
 * @file        main.c
 * @brief       Demonstrates string mutability and pointer arithmetic for size
 * calculation in C.
 * @details     This program uses a custom macro to determine the size of a 
 * stack-allocated array and allows the user to overwrite its 
 * contents to prove mutability.
 ******************************************************************************/

#include <stdio.h>
#include <string.h>

/**
 * @brief Macro to total size in bytes of a stack-allocated sequence
            calculate size of a variable in bytes.
 *
 * This macro computes the size of a variable by using pointer arithmetic.
 * It avoids using sizeof directly and instead calculates the difference
 * between addresses.
 * @details This macro uses pointer arithmetic by finding the address of the 
 * entire array plus one (the memory location immediately following 
 * the array) and subtracting the starting address of the array.
 * @param SEQ_CHAR Variable whose size is to be calculated
 * @return Size of the variable in bytes
 *
 * @note This works correctly for arrays but should be used carefully
 *       with pointers.
 */
#define SIZE(SEQ_CHAR) ( (char *)(&SEQ_CHAR + 1) - (char *)&SEQ_CHAR )

/**
 * @brief Entry point of the program/ application.
 *
 * Demonstrates mutability of a character array (string) by allowing
 * user input to overwrite its contents.
 *
 * @return int Returns 0 on successful execution
 */
int main()
{
    /*=============================================================
     * Initialize a mutable character array.
     * Unlike string literals, this array can be modified at runtime.
     *=============================================================*/
    char string[] = { "Mutable String" };

    printf("string : \"%s\"", string);
    printf("\n");

    printf("Check if the String is Mutable ::\n");

    /*=============================================================
     * Calculate size of the string using custom SIZE macro.
     * This includes the null terminator '\0'.
     *=============================================================*/
    char Size = (int)SIZE(string);

    printf("Size of string : %d\n", (int)SIZE(string));

    int loop;

    /*=============================================================
     * Prompt user to modify the string.
     * Size - 1 ensures null terminator is preserved.
     * Calculate array size using the custom SIZE macro *
     * Prompt user for input to demonstrate mutability *
     *=============================================================*/
    printf("Enter %d characters to modify the string:\n", Size - 1);

    for(loop = 0; loop < (int)Size - 1; loop++)
    {
        /*=========================================================
         * Read character input one by one and overwrite array.
         * Note: This will include whitespace characters as well.
         *=========================================================*/
        scanf("%c", &string[loop]);
    }

    /*=============================================================
     * Display modified string.
     *=============================================================*/
    printf("\nModified string : \"%s\"\n", string);

    return 0;
}