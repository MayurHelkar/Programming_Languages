/*============================================================================*/
/*                         PREPROCESSOR DIRECTIVE TEST                         */
/*============================================================================*/

/**
 * @warning Invalid macro usage example.
 *
 * @details The following line is intentionally incorrect and demonstrates
 *          a syntax error when defining macros.
 */
// #define SIZE 10 // error: expected identifier or '(' before numeric constant

#include <stdio.h>

/**
 * @brief Macro definition for array size.
 *
 * @details This macro replaces all occurrences of SIZE with 10
 *          during preprocessing.
 */
#define SIZE 10

/**
 * @brief Global character array with fixed size.
 *
 * @note Macro SIZE is expanded at compile time, making this valid.
 */
char charArray_G[SIZE];

/*============================================================================*/
/*                      INVALID GLOBAL DECLARATIONS                            */
/*============================================================================*/
/**
 * @warning Incorrect array declaration syntaxes using macro SIZE.
 *
 * @details These are preserved for demonstration along with
 *          compiler error notes.
 */
/*
char [charArray_G]SIZE; // error: expected identifier or '(' before '[' token
char SIZE[charArray_G]; // note: in expansion of macro 'SIZE'
char [SIZE]charArray_G; // error: expected identifier or '(' before '[' token
*/

/*============================================================================*/
/*                                MAIN FUNCTION                               */
/*============================================================================*/

/**
 * @brief Entry point of the program.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    /**
     * @brief Local character array.
     *
     * @details Uses macro SIZE, expanded at compile time.
     */
    char charArray_L[SIZE];

    /*========================================================================*/
    /*                      INVALID LOCAL DECLARATIONS                         */
    /*========================================================================*/
    /**
     * @warning Incorrect syntaxes involving macro SIZE and arrays.
     *
     * @details Demonstrates invalid declaration patterns and macro expansion issues.
     */
    /*
    char [charArray_L]SIZE; // error: expected identifier or '(' before '[' token
    char SIZE[charArray_L]; // note: in expansion of macro 'SIZE'
    char [SIZE]charArray_L; // error: expected identifier or '(' before '[' token
    */

    /**
     * @brief Loop counter variable.
     */
    int loop;

    /*========================================================================*/
    /*                    ITERATION OVER GLOBAL ARRAY                          */
    /*========================================================================*/
    /**
     * @details Demonstrates both conventional and unconventional
     *          array indexing techniques.
     *
     * @note In C:
     *       a[b] == *(a + b) == b[a]
     */
    for(loop = 0; loop < SIZE; loop++)
    {
        printf("charArray_G[%d] : %c || ", loop, charArray_G[loop]);

        // printf("[charArray_G]%d : %c", loop, [charArray_G]loop); // error: expected expression before '[' token

        printf("%d[charArray_G] : %c\n", loop, loop[charArray_G]);

        // printf("[%d]charArray_G : %c", loop, [loop]charArray_G); // error: expected expression before '[' token
    }

    printf("\n\n");
    
    /*========================================================================*/
    /*                    ITERATION OVER LOCAL ARRAY                           */
    /*========================================================================*/
    /**
     * @details Same demonstration applied to a local array.
     */
    for(loop = 0; loop < SIZE; loop++)
    {
        printf("charArray_L[%d] : %c || ", loop, charArray_L[loop]);

        // printf("[charArray_L]%d : %c", loop, [charArray_L]loop); // error: expected expression before '[' token

        printf("%d[charArray_L] : %c\n", loop, loop[charArray_L]);

        // printf("[%d]charArray_L : %c", loop, [loop]charArray_L); // error: expected expression before '[' token
    }

    return 0;
}

/*============================================================================*/
/*                              KEY TAKEAWAYS                                 */
/*============================================================================*/
/**
 * ┌─────────────────────────────────────────────────────────────────────────┐
 * │ 1. Macro Expansion:                                                     │
 * │       #define SIZE 10                                                   │
 * │       → Replaces SIZE with 10 before compilation.                       │
 * │                                                                         │
 * │ 2. Array Indexing in C:                                                 │
 * │       a[b] == *(a + b) == b[a]                                          │
 * │                                                                         │
 * │ 3. Identifier Rules:                                                    │
 * │       Variable name must precede brackets → char arr[SIZE];             │
 * │                                                                         │
 * │ 4. Invalid Syntax Examples:                                             │
 * │       char [SIZE]arr;   ❌                                              │
 * │       char SIZE[arr];   ❌                                              │
 * │                                                                         │
 * │ 5. Macro Misuse:                                                        │
 * │       Using macro names as variables leads to expansion errors.         │
 * └─────────────────────────────────────────────────────────────────────────┘
 */