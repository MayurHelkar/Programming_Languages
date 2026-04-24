#include <stdio.h>

/*============================================================================*/
/*                          GLOBAL VARIABLE DECLARATION                        */
/*============================================================================*/

/**
 * @brief Global variable used for array sizing and loop control.
 *
 * @note Not a constant expression → cannot be used for
 *       array size at file scope.
 */
int var = 10;

/*============================================================================*/
/*                      INVALID GLOBAL DECLARATIONS                            */
/*============================================================================*/
/**
 * @warning The following declarations are intentionally incorrect.
 *
 * @details Demonstrates errors related to:
 *          - Variable Length Arrays at file scope
 *          - Incorrect array syntax
 *          - Invalid type usage
 */
/*
double doubleArray_G[var]; // error: variably modified 'doubleArray_G' at file scope
double [doubleArray_G]var; // error: expected identifier or '(' before '[' token
double var[doubleArray_G]; // error: size of array 'var' has non-integer type
                           // error: conflicting types for 'var'; have 'double[1]'
double [var]doubleArray_G; // error: expected identifier or '(' before '[' token
*/

/**
 * @brief Valid global array with constant size.
 */
double doubleArray_G[10];

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
     * @brief Local Variable Length Array (VLA).
     *
     * @note Allowed in block scope (C99 and later).
     */
    double doubleArray_L[var];
    
    /*========================================================================*/
    /*                      INVALID LOCAL DECLARATIONS                         */
    /*========================================================================*/
    /**
     * @warning Invalid array declaration patterns.
     *
     * @details These lines illustrate syntax and type errors.
     */
    /*
    double [doubleArray_L]var; // error: expected identifier or '(' before '[' token
    double var[doubleArray_L]; // error: size of array 'var' has non-integer type
    double [var]doubleArray_L; // error: expected identifier or '(' before '[' token
    */

    /**
     * @brief Loop counter variable.
     */
    int loop;

    /*========================================================================*/
    /*                    ITERATION OVER GLOBAL ARRAY                          */
    /*========================================================================*/
    /**
     * @details Demonstrates equivalent indexing expressions.
     *
     * @note In C:
     *       a[b] == *(a + b) == b[a]
     */
    for(loop = 0; loop < var; loop++)
    {
        printf("doubleArray_G[%d] : %20.10lf || ", loop, doubleArray_G[loop]);

        // printf("[doubleArray_G]%d : %20.10lf", loop, [doubleArray_G]loop); // error: expected expression before '[' token

        printf("%d[doubleArray_G] : %20.10lf\n", loop, loop[doubleArray_G]);

        // printf("[%d]doubleArray_G : %20.10lf", loop, [loop]doubleArray_G); // error: expected expression before '[' token
    }

    printf("\n\n");
    
    /*========================================================================*/
    /*                    ITERATION OVER LOCAL ARRAY                           */
    /*========================================================================*/
    /**
     * @details Same indexing demonstration for local VLA.
     */
    for(loop = 0; loop < var; loop++)
    {
        printf("doubleArray_L[%d] : %20.10lf || ", loop, doubleArray_L[loop]);

        // printf("[doubleArray_L]%d : %20.10lf", loop, [doubleArray_L]loop); // error: expected expression before '[' token

        printf("%d[doubleArray_L] : %20.10lf\n", loop, loop[doubleArray_L]);

        // printf("[%d]doubleArray_L : %20.10lf", loop, [loop]doubleArray_L); // error: expected expression before '[' token
    }

    return 0;
}

/*============================================================================*/
/*                              KEY TAKEAWAYS                                 */
/*============================================================================*/
/**
 * ┌─────────────────────────────────────────────────────────────────────────┐
 * │ 1. File Scope Restriction:                                              │
 * │       Only constant expressions allowed for array size.                 │
 * │       → int var = 10; is NOT constant at compile time.                  │
 * │                                                                         │
 * │ 2. Variable Length Arrays (VLA):                                        │
 * │       Allowed only inside functions (block scope).                      │
 * │                                                                         │
 * │ 3. Array Indexing Identity:                                             │
 * │       a[b] == *(a + b) == b[a]                                          │
 * │                                                                         │
 * │ 4. Invalid Syntax Patterns:                                             │
 * │       double [var]arr;    ❌                                            │
 * │       double var[arr];    ❌                                            │
 * │                                                                         │
 * │ 5. Uninitialized Arrays:                                                │
 * │       Printing values results in garbage (undefined behavior).          │
 * │                                                                         │
 * │ 6. Format Specifier:                                                    │
 * │       %lf is used for double in printf.                                 │
 * └─────────────────────────────────────────────────────────────────────────┘
 */