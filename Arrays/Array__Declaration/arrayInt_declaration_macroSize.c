/*============================================================================*/
/*                         PREPROCESSOR DIRECTIVE TEST                         */
/*============================================================================*/

/**
 * @warning Invalid macro definition example.
 *
 * @details Demonstrates incorrect syntax that produces a compiler error.
 */
// #define SIZE 10 // error: expected identifier or '(' before numeric constant

#include <stdio.h>

/**
 * @brief Macro defining array size.
 *
 * @details Replaced by the preprocessor before compilation.
 */
#define SIZE 10

/**
 * @brief Global integer array.
 *
 * @note SIZE is expanded to 10 at compile time.
 */
int intArray_G[SIZE];

/*============================================================================*/
/*                      INVALID GLOBAL DECLARATIONS                            */
/*============================================================================*/
/**
 * @warning Incorrect array declaration syntax using macro SIZE.
 *
 * @details Preserved for demonstration with compiler notes.
 */
/*
int [intArray_G]SIZE; // error: expected identifier or '(' before '[' token
int SIZE[intArray_G]; // note: in expansion of macro 'SIZE'
int [SIZE]intArray_G; // error: expected identifier or '(' before '[' token
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
     * @brief Local integer array.
     *
     * @details Uses macro SIZE for allocation.
     */
    int intArray_L[SIZE];

    /*========================================================================*/
    /*                      INVALID LOCAL DECLARATIONS                         */
    /*========================================================================*/
    /**
     * @warning Invalid syntax examples involving arrays and macros.
     */
    /*
    int [intArray_L]SIZE; // error: expected identifier or '(' before '[' token
    int SIZE[intArray_L]; // note: in expansion of macro 'SIZE'
    int [SIZE]intArray_L; // error: expected identifier or '(' before '[' token
    */

    /**
     * @brief Loop counter variable.
     */
    int loop;

    /*========================================================================*/
    /*                    ITERATION OVER GLOBAL ARRAY                          */
    /*========================================================================*/
    /**
     * @details Demonstrates both conventional and alternate indexing.
     *
     * @note In C:
     *       a[b] == *(a + b) == b[a]
     */
    for(loop = 0; loop < SIZE; loop++)
    {
        printf("intArray_G[%d] : %20d || ", loop, intArray_G[loop]);

        // printf("[intArray_G]%d : %20d", loop, [intArray_G]loop); // error: expected expression before '[' token

        printf("%d[intArray_G] : %20d\n", loop, loop[intArray_G]);

        // printf("[%d]intArray_G : %20d", loop, [loop]intArray_G); // error: expected expression before '[' token
    }

    printf("\n\n");
    
    /*========================================================================*/
    /*                    ITERATION OVER LOCAL ARRAY                           */
    /*========================================================================*/
    /**
     * @details Same indexing demonstration applied to local array.
     */
    for(loop = 0; loop < SIZE; loop++)
    {
        printf("intArray_L[%d] : %20d || ", loop, intArray_L[loop]);

        // printf("[intArray_L]%d : %20d", loop, [intArray_L]loop); // error: expected expression before '[' token

        printf("%d[intArray_L] : %20d\n", loop, loop[intArray_L]);

        // printf("[%d]intArray_L : %20d", loop, [loop]intArray_L); // error: expected expression before '[' token
    }

    return 0;
}

/*============================================================================*/
/*                              KEY TAKEAWAYS                                 */
/*============================================================================*/
/**
 * ┌─────────────────────────────────────────────────────────────────────────┐
 * │ 1. Macro Expansion:                                                     │
 * │       #define SIZE 10 → replaced before compilation.                    │
 * │                                                                         │
 * │ 2. Array Indexing Identity:                                             │
 * │       a[b] == *(a + b) == b[a]                                          │
 * │                                                                         │
 * │ 3. Correct Declaration:                                                 │
 * │       int arr[SIZE];                                                    │
 * │                                                                         │
 * │ 4. Invalid Syntax:                                                      │
 * │       int [SIZE]arr;   ❌                                               │
 * │       int SIZE[arr];   ❌                                               │
 * │                                                                         │
 * │ 5. Uninitialized Arrays:                                                │
 * │       Values printed are garbage (undefined behavior).                  │
 * │                                                                         │
 * │ 6. Format Specifier:                                                    │
 * │       %d is used for int.                                               │
 * └─────────────────────────────────────────────────────────────────────────┘
 */