/*============================================================================*/
/*                         PREPROCESSOR DIRECTIVE TEST                         */
/*============================================================================*/

/**
 * @warning Invalid macro definition example.
 *
 * @details Demonstrates incorrect syntax leading to compiler error.
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
 * @brief Global float array.
 *
 * @note SIZE is expanded at compile time.
 */
float floatArray_G[SIZE];

/*============================================================================*/
/*                      INVALID GLOBAL DECLARATIONS                            */
/*============================================================================*/
/**
 * @warning Incorrect array declaration syntax using macro SIZE.
 *
 * @details Preserved for demonstration with compiler notes.
 */
/*
float [floatArray_G]SIZE; // error: expected identifier or '(' before '[' token
float SIZE[floatArray_G]; // note: in expansion of macro 'SIZE'
float [SIZE]floatArray_G; // error: expected identifier or '(' before '[' token
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
     * @brief Local float array.
     *
     * @details Uses macro SIZE for allocation.
     */
    float floatArray_L[SIZE];

    /*========================================================================*/
    /*                      INVALID LOCAL DECLARATIONS                         */
    /*========================================================================*/
    /**
     * @warning Invalid syntax examples involving arrays and macros.
     */
    /*
    float [floatArray_L]SIZE; // error: expected identifier or '(' before '[' token
    float SIZE[floatArray_L]; // note: in expansion of macro 'SIZE'
    float [SIZE]floatArray_L; // error: expected identifier or '(' before '[' token
    */

    /**
     * @brief Loop counter variable.
     */
    int loop;

    /*========================================================================*/
    /*                    ITERATION OVER GLOBAL ARRAY                          */
    /*========================================================================*/
    /**
     * @details Demonstrates both standard and alternate indexing forms.
     *
     * @note In C:
     *       a[b] == *(a + b) == b[a]
     */
    for(loop = 0; loop < SIZE; loop++)
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
     * @details Same indexing demonstration applied to local array.
     */
    for(loop = 0; loop < SIZE; loop++)
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
 * │ 1. Macro Expansion:                                                     │
 * │       #define SIZE 10 → replaced before compilation.                    │
 * │                                                                         │
 * │ 2. Array Indexing Identity:                                             │
 * │       a[b] == *(a + b) == b[a]                                          │
 * │                                                                         │
 * │ 3. Correct Declaration:                                                 │
 * │       float arr[SIZE];                                                  │
 * │                                                                         │
 * │ 4. Invalid Syntax:                                                      │
 * │       float [SIZE]arr;   ❌                                             │
 * │       float SIZE[arr];   ❌                                             │
 * │                                                                         │
 * │ 5. Uninitialized Arrays:                                                │
 * │       Values printed are garbage (undefined behavior).                  │
 * │                                                                         │
 * │ 6. Format Specifier:                                                    │
 * │       %f is used for float (promoted to double in printf).              │
 * └─────────────────────────────────────────────────────────────────────────┘
 */