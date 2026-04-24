#include <stdio.h>

/*============================================================================*/
/*                          GLOBAL VARIABLE DECLARATION                        */
/*============================================================================*/

/**
 * @brief Global variable used for array sizing and loop control.
 *
 * @note Not a compile-time constant → cannot be used
 *       for array size at file scope.
 */
int var = 10;

/*============================================================================*/
/*                      INVALID GLOBAL DECLARATIONS                            */
/*============================================================================*/
/**
 * @warning The following declarations are intentionally incorrect.
 *
 * @details Demonstrates:
 *          - Variable Length Array restriction at file scope
 *          - Invalid array syntax
 *          - Type mismatch errors
 */
/*
float floatArray_G[var]; // error: variably modified 'floatArray_G' at file scope
float [floatArray_G]var; // error: expected identifier or '(' before '[' token
float var[floatArray_G]; // error: size of array 'var' has non-integer type
                         // error: conflicting types for 'var'; have 'float[1]'
float [var]floatArray_G; // error: expected identifier or '(' before '[' token
*/

/**
 * @brief Valid global float array with constant size.
 */
float floatArray_G[10];

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
    float floatArray_L[var];
    
    /*========================================================================*/
    /*                      INVALID LOCAL DECLARATIONS                         */
    /*========================================================================*/
    /**
     * @warning Incorrect array declaration syntax examples.
     */
    /*
    float [floatArray_L]var; // error: expected identifier or '(' before '[' token
    float var[floatArray_L]; // error: size of array 'var' has non-integer type
    float [var]floatArray_L; // error: expected identifier or '(' before '[' token
    */

    /**
     * @brief Loop counter variable.
     */
    int loop;

    /*========================================================================*/
    /*                    ITERATION OVER GLOBAL ARRAY                          */
    /*========================================================================*/
    /**
     * @details Demonstrates array indexing equivalence.
     *
     * @note In C:
     *       a[b] == *(a + b) == b[a]
     */
    for(loop = 0; loop < var; loop++)
    {
        printf("floatArray_G[%d] : %40.5f || ", loop, floatArray_G[loop]);

        // printf("[floatArray_G]%d : %40.5f", loop, [floatArray_G]loop); // error: expected expression before '[' token

        printf("%d[floatArray_G] : %40.5f\n", loop, loop[floatArray_G]);

        // printf("[%d]floatArray_G : %40.5f", loop, [loop]floatArray_G); // error: expected expression before '[' token
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
        printf("floatArray_L[%d] : %40.5f || ", loop, floatArray_L[loop]);

        // printf("[floatArray_L]%d : %40.5f", loop, [floatArray_L]loop); // error: expected expression before '[' token

        printf("%d[floatArray_L] : %40.5f\n", loop, loop[floatArray_L]);

        // printf("[%d]floatArray_L : %40.5f", loop, [loop]floatArray_L); // error: expected expression before '[' token
    }

    return 0;
}

/*============================================================================*/
/*                              KEY TAKEAWAYS                                 */
/*============================================================================*/
/**
 * ┌─────────────────────────────────────────────────────────────────────────┐
 * │ 1. File Scope Rule:                                                     │
 * │       Array sizes must be constant expressions.                         │
 * │       → int var = 10; is NOT constant at compile time.                  │
 * │                                                                         │
 * │ 2. Variable Length Arrays (VLA):                                        │
 * │       Allowed only within block scope (inside functions).               │
 * │                                                                         │
 * │ 3. Array Indexing Identity:                                             │
 * │       a[b] == *(a + b) == b[a]                                          │
 * │                                                                         │
 * │ 4. Invalid Syntax:                                                      │
 * │       float [var]arr;   ❌                                              │
 * │       float var[arr];   ❌                                              │
 * │                                                                         │
 * │ 5. Uninitialized Arrays:                                                │
 * │       Values printed are garbage (undefined behavior).                  │
 * │                                                                         │
 * │ 6. Format Specifier:                                                    │
 * │       %f is used (float promoted to double in printf).                  │
 * └─────────────────────────────────────────────────────────────────────────┘
 */