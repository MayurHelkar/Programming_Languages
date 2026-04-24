#include <stdio.h>

/**
 * @brief Global variable used for array sizing and loop control.
 * 
 * @note In C, global variables must be compile-time constants
 *       when used for array sizes at file scope.
 */
int var = 10;

/*============================================================================*/
/*                         INVALID GLOBAL DECLARATIONS                         */
/*============================================================================*/
/**
 * @warning The following declarations are intentionally incorrect
 *          and demonstrate common mistakes with array declarations.
 *
 * @details These are left commented to preserve compiler error messages.
 */
/*
char charArray_G[var]; // error: variably modified 'charArray_G' at file scope
char [charArray_G]var; // error: expected identifier or '(' before '[' token
char var[charArray_G]; // error: size of array 'var' has non-integer type
                         // error: conflicting types for 'var'; have 'char[1]'
char [var]charArray_G; // error: expected identifier or '(' before '[' token
*/

/**
 * @brief Valid global character array.
 * 
 * @details Uses a constant size (10), which is required at file scope.
 */
char charArray_G[10];

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
     * @brief Local character array using variable length array (VLA).
     * 
     * @note VLAs are allowed in block scope (C99 and later),
     *       unlike file scope where constant expressions are required.
     */
    char charArray_L[var];
    
    /*========================================================================*/
    /*                      INVALID LOCAL DECLARATIONS                         */
    /*========================================================================*/
    /**
     * @warning Incorrect syntaxes for array declarations.
     *
     * @details These lines illustrate invalid usage and are preserved
     *          for educational purposes along with compiler errors.
     */
    /*
    char [charArray_L]var; // error: expected identifier or '(' before '[' token
    char var[charArray_L]; // error: size of array 'var' has non-integer type
    char [var]charArray_L; // error: expected identifier or '(' before '[' token
    */

    /**
     * @brief Loop counter variable.
     */
    int loop;

    /*========================================================================*/
    /*                    ITERATION OVER GLOBAL ARRAY                          */
    /*========================================================================*/
    /**
     * @details Demonstrates standard and alternate array indexing syntax.
     *
     * @note In C, `a[b]` is equivalent to `*(a + b)`.
     *       Therefore, `b[a]` is also valid and produces the same result.
     */
    for(loop = 0; loop < var; loop++)
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
     * @details Same demonstration applied to a local VLA.
     */
    for(loop = 0; loop < var; loop++)
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
 * │ 1. Array indexing in C:                                                 │
 * │       a[b] == *(a + b) == b[a]                                          │
 * │                                                                         │
 * │ 2. Global arrays require constant size expressions.                     │
 * │                                                                         │
 * │ 3. Variable Length Arrays (VLAs) are allowed only in block scope.       │
 * │                                                                         │
 * │ 4. Syntax like:                                                         │
 * │       char [x]y;                                                        │
 * │    is invalid because the identifier must precede brackets.             │
 * │                                                                         │
 * │ 5. Expressions inside [] must evaluate to integer types.                │
 * └─────────────────────────────────────────────────────────────────────────┘
 */