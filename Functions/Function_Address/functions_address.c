/**
 * @file function_addresses.c
 * @brief Demonstrates multiple methods to retrieve and display function addresses in C.
 *
 * This program showcases different techniques to print function addresses using:
 * - Direct references
 * - Function pointers
 * - Casting
 * - Arrays and structures
 * - Typedefs and macros
 *
 * @author 
 * @date 2026
 */

#include <stdio.h>
#include <stdint.h>

/*==========================================================
 *                    MACRO DEFINITIONS
 *==========================================================*/

/**
 * @brief Prints the address of a function in a reusable way.
 */
#define PRINT_ADDR(func) printf(#func " : %p\n", (void *)(func))

/*==========================================================
 *                FUNCTION DECLARATIONS
 *==========================================================*/

/**
 * @brief Sample function #1
 * @return int Always returns 0
 */
int firstFunction(void);

/**
 * @brief Sample function #2
 * @return int Always returns 0
 */
int secondFunction(void);

/*==========================================================
 *                GLOBAL VARIABLES
 *==========================================================*/

/** @brief Generic function pointer */
int (*funcPtr)(void);

/**
 * @struct FuncInfo
 * @brief Structure to store function name and pointer
 */
struct FuncInfo {
    const char *name;          /**< Function name */
    int (*func)(void);         /**< Function pointer */
};

/*==========================================================
 *                        MAIN
 *==========================================================*/

/**
 * @brief Entry point of the program
 * @return int Execution status
 */
int main(void)
{
    /** Array of function pointers */
    int (*functions[])(void) = { main, firstFunction, secondFunction };

    /** Typedef for cleaner syntax */
    typedef int (*FuncPtr)(void);

    printf("=========== FUNCTION ADDRESS DEMO ===========\n\n");

    /*------------------------------------------------------
     * Method 1: Direct Function Reference
     *------------------------------------------------------*/
    printf("[Method 1] Direct Function Reference\n");
    printf("main            : %p\n", (void *)main);
    printf("firstFunction   : %p\n", (void *)firstFunction);
    printf("secondFunction  : %p\n", (void *)secondFunction);
    printf("\n");

    /*------------------------------------------------------
     * Method 2: Using Function Pointer Variable
     *------------------------------------------------------*/
    printf("[Method 2] Function Pointer Variable\n");
    funcPtr = main;
    printf("main            : %p\n", (void *)funcPtr);

    funcPtr = firstFunction;
    printf("firstFunction   : %p\n", (void *)funcPtr);

    funcPtr = secondFunction;
    printf("secondFunction  : %p\n", (void *)funcPtr);
    printf("\n");

    /*------------------------------------------------------
     * Method 3: Explicit Casting to void*
     *------------------------------------------------------*/
    printf("[Method 3] Casting to void*\n");
    printf("main            : %p\n", (void *)main);
    printf("firstFunction   : %p\n", (void *)firstFunction);
    printf("secondFunction  : %p\n", (void *)secondFunction);
    printf("\n");

    /*------------------------------------------------------
     * Method 4: Using uintptr_t (Integer Representation)
     *------------------------------------------------------*/
    printf("[Method 4] Using uintptr_t\n");
    printf("main            : 0x%lx\n", (unsigned long)(uintptr_t)main);
    printf("firstFunction   : 0x%lx\n", (unsigned long)(uintptr_t)firstFunction);
    printf("secondFunction  : 0x%lx\n", (unsigned long)(uintptr_t)secondFunction);
    printf("\n");

    /*------------------------------------------------------
     * Method 5: Array of Function Pointers
     *------------------------------------------------------*/
    printf("[Method 5] Array of Function Pointers\n");
    for (int i = 0; i < 3; i++)
    {
        printf("functions[%d]    : %p\n", i, (void *)functions[i]);
    }
    printf("\n");

    /*------------------------------------------------------
     * Method 6: Typedef for Cleaner Syntax
     *------------------------------------------------------*/
    printf("[Method 6] Using typedef\n");
    FuncPtr m  = main;
    FuncPtr f1 = firstFunction;
    FuncPtr f2 = secondFunction;

    printf("m (main)        : %p\n", (void *)m);
    printf("f1              : %p\n", (void *)f1);
    printf("f2              : %p\n", (void *)f2);
    printf("\n");

    /*------------------------------------------------------
     * Method 7: fprintf and File Output
     *------------------------------------------------------*/
    printf("[Method 7] fprintf + File Output\n");

    fprintf(stdout, "main            : %p\n", (void *)main);
    fprintf(stdout, "firstFunction   : %p\n", (void *)firstFunction);
    fprintf(stdout, "secondFunction  : %p\n", (void *)secondFunction);

    FILE *fp = fopen("addresses.txt", "w");
    if (fp) {
        fprintf(fp, "main : %p\n", (void *)main);
        fclose(fp);
    }

    FILE *fp1 = fopen("addresses1.txt", "w");
    if (fp1) {
        fprintf(fp1, "firstFunction : %p\n", (void *)firstFunction);
        fclose(fp1);
    }

    FILE *fp2 = fopen("addresses2.txt", "w");
    if (fp2) {
        fprintf(fp2, "secondFunction : %p\n", (void *)secondFunction);
        fclose(fp2);
    }

    printf("\n");

    /*------------------------------------------------------
     * Method 8: Struct-Based Storage
     *------------------------------------------------------*/
    printf("[Method 8] Struct with Function Metadata\n");

    struct FuncInfo list[] = {
        {"main", main},
        {"firstFunction", firstFunction},
        {"secondFunction", secondFunction}
    };

    for (int i = 0; i < 3; i++)
    {
        printf("%-15s : %p\n", list[i].name, (void *)list[i].func);
    }

    printf("\n");

    /*------------------------------------------------------
     * Method 9: Macro-Based Printing
     *------------------------------------------------------*/
    printf("[Method 9] Macro-Based Printing\n");

    PRINT_ADDR(main);
    PRINT_ADDR(firstFunction);
    PRINT_ADDR(secondFunction);

    printf("\n=============================================\n");

    return 0;
}

/*==========================================================
 *                FUNCTION DEFINITIONS
 *==========================================================*/

/**
 * @brief First test function
 * @return int Always returns 0
 */
int firstFunction(void)
{
    return 0;
}

/**
 * @brief Second test function
 * @return int Always returns 0
 */
int secondFunction(void)
{
    return 0;
}