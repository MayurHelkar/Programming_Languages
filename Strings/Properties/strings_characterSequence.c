/**
 * @file string_analysis.c
 * @brief Demonstrates manual string length calculation and array size detection.
          Demonstrates size vs length of a string in C.
 * * This program explores the difference between the memory size of a character 
 * array and the actual length of the string contained within it.
  * - How to compute the size of a character array using a macro.
 * - How to compute the length of a string manually.
 */

#include <stdio.h>
#include <string.h>

/*=========================================================
 *                  MACRO DEFINITIONS
 *=========================================================*/

/**
 * @section MACROS
 * @brief Macro to calculate the total size of an array in bytes.
 * * It works by taking the address of the next memory block after the array 
 * (&SEQ_CHAR + 1) and subtracting the start address of the array.

  * This macro works by:
 * - Taking the address of the array after incrementing it.
 * - Subtracting the base address of the array.
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
 * * @param charSeq Pointer to the first character of the string.
 * @return int The total count of characters found before '\0'.
  *
 * Iterates through each character until the null terminator
 * ('\0') is encountered.
 *
 * @param charSeq Pointer to the input string
 * @return Length of the string (excluding null character)
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
 * - Difference between size and length of a string.
 * - Use of macro vs standard library functions.
 *
 * @return int Exit status
 */

int main()
{
    /*---------------------------------------------
     * STRING INITIALIZATION
     *---------------------------------------------*/
    // Initialize a character array with a string literal
    char strings[] = "Sequence of Characters";

    /*---------------------------------------------
     * SIZE CALCULATION
     *---------------------------------------------*/
    // Display the physical memory size of the array
    // printf("Size of strings : %d\n", sizeof(strings));
    printf("Size of strings (bytes) : %d\n", (int)SIZE(strings));

    printf("\n");
    
    
    /*---------------------------------------------
     * LENGTH CALCULATION
     *---------------------------------------------*/
    // Display the logical length of the string
    // printf("Length of strings : %d\n", strlen(strings));
    printf("Length of strings (chars): %d\n", len_strings(strings));

    return 0;
}

/*=========================================================
 *              FUNCTION DEFINITIONS
 *=========================================================*/

/**
 * @section FUNCTIONS
 * @brief Custom implementation of string utility functions.
 *
 * @param charSeq Pointer to the string
 * @return int Number of characters in the string
 */

/**
 * @details This function iterates through memory using pointer arithmetic. 
 * It prints each character to stdout during the traversal.
 */
int len_strings(char *charSeq)
{
    printf("Starting character: %c\n", *charSeq);

    int count = 0;

    printf("Inside loop traversal: \n");

    /*---------------------------------------------
     * ITERATE THROUGH STRING
     *---------------------------------------------*/
    // Loop until the null-terminator ('\0') is encountered
    while(*charSeq != '\0')
    {
        // Print current character and increment the pointer address
        printf("%c | ", *charSeq++);
    
        count++;
    }

    printf("\n");

    return count;
}