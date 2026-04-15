#include <stdio.h>

/**
 * @file void_pointer_size_demo.c
 * @brief Demonstrates the behavior of sizeof with void pointers in C.
 *
 * This program explores:
 * - Size of a void pointer
 * - Size of dereferenced void pointer (invalid conceptually, but allowed in sizeof)
 * - Effect of assigning different data type addresses to a void pointer
 *
 * @note sizeof(void) is not valid in standard C, but sizeof(*voidPtr) is allowed
 *       because sizeof does not evaluate the expression.
 */

/**
 * @brief Entry point of the program
 * 
 * @return int Returns 0 on successful execution
 */
int main()
{
    /* =======================
     * [ LABEL BOX: VARIABLES ]
     * ======================= */
    char Char;
    int Int;
    float Float;
    double Double;

    void *voidPtr;  ///< Generic pointer capable of holding any data type address


    /* ==========================================
     * [ LABEL BOX: INITIAL VOID POINTER ANALYSIS ]
     * ========================================== */
    printf("Size of voidPtr (before assignment):\n");

    /**
     * @note sizeof(*voidPtr):
     * - Though dereferencing void* is invalid in normal usage,
     *   sizeof does NOT evaluate the expression.
     * - Compiler treats it as size of void (non-standard, often 1 or error).
     */
    printf("*voidPtr : %zu\n", sizeof(*voidPtr));

    /// Size of pointer itself (depends on architecture: 4 bytes in 32-bit, 8 bytes in 64-bit)
    printf("voidPtr  : %zu\n", sizeof(voidPtr));

    /// Size of pointer to pointer (same as pointer size)
    printf("&voidPtr : %zu\n", sizeof(&voidPtr));

    printf("\n");


    /* ==========================================
     * [ LABEL BOX: ASSIGNMENT - CHAR TYPE ]
     * ========================================== */
    voidPtr = &Char;
    printf("After assigning address of char:\n");
    printf("*voidPtr : %zu\n", sizeof(*voidPtr));
    printf("voidPtr  : %zu\n", sizeof(voidPtr));
    printf("&voidPtr : %zu\n", sizeof(&voidPtr));

    printf("\n");


    /* ==========================================
     * [ LABEL BOX: ASSIGNMENT - INT TYPE ]
     * ========================================== */
    voidPtr = &Int;
    printf("After assigning address of int:\n");
    printf("*voidPtr : %zu\n", sizeof(*voidPtr));
    printf("voidPtr  : %zu\n", sizeof(voidPtr));
    printf("&voidPtr : %zu\n", sizeof(&voidPtr));

    printf("\n");


    /* ==========================================
     * [ LABEL BOX: ASSIGNMENT - FLOAT TYPE ]
     * ========================================== */
    voidPtr = &Float;
    printf("After assigning address of float:\n");
    printf("*voidPtr : %zu\n", sizeof(*voidPtr));
    printf("voidPtr  : %zu\n", sizeof(voidPtr));
    printf("&voidPtr : %zu\n", sizeof(&voidPtr));

    printf("\n");


    /* ==========================================
     * [ LABEL BOX: ASSIGNMENT - DOUBLE TYPE ]
     * ========================================== */
    voidPtr = &Double;
    printf("After assigning address of double:\n");
    printf("*voidPtr : %zu\n", sizeof(*voidPtr));
    printf("voidPtr  : %zu\n", sizeof(voidPtr));
    printf("&voidPtr : %zu\n", sizeof(&voidPtr));

    printf("\n");


    /* ==========================
     * [ LABEL BOX: CONCLUSION ]
     * ==========================
     * - sizeof(voidPtr) is constant regardless of assigned type
     * - sizeof(*voidPtr) does NOT depend on assigned type
     * - void* does not carry type information
     */
    
    return 0;
}