/*============================================================================*/
/*                         PREPROCESSOR DIRECTIVE TEST                         */
/*============================================================================*/

/**
 * @warning Invalid macro definition example.
 *
 * @details Demonstrates incorrect macro syntax that leads to a compiler error.
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
 * @brief Global double array.
 *
 * @note SIZE is expanded to 10 at compile time.
 */
double doubleArray_G[SIZE];

/*============================================================================*/
/*                      INVALID GLOBAL DECLARATIONS                            */
/*============================================================================*/
/**
 * @warning Incorrect array declaration patterns.
 *
 * @details These are intentionally incorrect and preserved along with
 *          compiler diagnostics for learning purposes.
 */
/*
double [doubleArray_G]SIZE; // error: expected identifier or '(' before '[' token
double SIZE[doubleArray_G]; // note: in expansion of macro 'SIZE'
double [SIZE]doubleArray_G; // error: expected identifier or '(' before '[' token
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
     * @brief Local double array.
     *
     * @details Uses macro SIZE for allocation.
     */
    double doubleArray_L[SIZE];

    /*========================================================================*/
    /*                      INVALID LOCAL DECLARATIONS                         */
    /*========================================================================*/
    /**
     * @warning Invalid syntax using macro SIZE with arrays.
     *
     * @details Demonstrates improper declaration formats.
     */
    /*
    double [doubleArray_L]SIZE; // error: expected identifier or '(' before '[' token
    double SIZE[doubleArray_L]; // note: in expansion of macro 'SIZE'
    double [SIZE]doubleArray_L; // error: expected identifier or '(' before '[' token
    */

    /**
     * @brief Loop counter variable.
     */
    int loop;

    /*========================================================================*/
    /*                    ITERATION OVER GLOBAL ARRAY                          */
    /*========================================================================*/
    /**
     * @details Demonstrates valid and alternate indexing styles.
     *
     * @note In C:
     *       a[b] == *(a + b) == b[a]
     */
    for(loop = 0; loop < SIZE; loop++)
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
     * @details Same demonstration applied to local array.
     */
    for(loop = 0; loop < SIZE; loop++)
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
 * │ 1. Macro Expansion:                                                     │
 * │       #define SIZE 10                                                   │
 * │       → Replaced before compilation.                                    │
 * │                                                                         │
 * │ 2. Array Indexing Property:                                             │
 * │       a[b] == *(a + b) == b[a]                                          │
 * │                                                                         │
 * │ 3. Valid Declaration:                                                   │
 * │       double arr[SIZE];                                                 │
 * │                                                                         │
 * │ 4. Invalid Syntax:                                                      │
 * │       double [SIZE]arr;   ❌                                            │
 * │       double SIZE[arr];   ❌                                            │
 * │                                                                         │
 * │ 5. Uninitialized Arrays:                                                │
 * │       Values printed will be garbage (undefined behavior).              │
 * │                                                                         │
 * │ 6. Format Specifier:                                                    │
 * │       %lf is used for double in printf.                                 │
 * └─────────────────────────────────────────────────────────────────────────┘
 */