#include <stdio.h>

/**
 * @brief Demonstrates usage of void pointers in C with different data types.
 *
 * This program shows how a void pointer can point to different data types
 * and how explicit typecasting is required to dereference it.
 *
 * @note Dereferencing a void pointer directly is not allowed in C.
 *       It must be cast to the appropriate type before dereferencing.
 *
 * @warning Variables are uninitialized in this example, which may lead to
 *          undefined behavior when printing their values.
 */
int main(void)
{
    /* =========================
     * [LABEL BOX] DECLARATIONS
     * ========================= */
    char    Char;
    int     Int;
    float   Float;
    double  Double;

    void *voidPtr;   /**< Generic pointer (can hold address of any type) */


    /* =========================
     * [LABEL BOX] CHAR SECTION
     * ========================= */
    voidPtr = &Char;

    /**
     * @brief Accessing char value through void pointer
     *
     * Correct approach:
     * 1. Cast void pointer to (char *)
     * 2. Dereference the casted pointer
     */
/* =========================================================
 * [LABEL BOX] INVALID VOID POINTER DEREFERENCING
 * ========================================================= */

/**
 * @brief ❌ Incorrect dereferencing of void pointer
 *
 * The expression `(char)*voidPtr` is invalid because:
 * - `voidPtr` is of type `void *` (generic pointer with no type information)
 * - Dereferencing (`*voidPtr`) is not allowed since the compiler does not
 *   know the size or type of the data being accessed
 * - Casting is applied AFTER dereferencing, which is too late
 *
 * @error invalid use of void expression
 *
 * @correct_usage
 *   *(char *)voidPtr   // Cast first, then dereference
 */
//    printf("Char : %c and (char *)voidPtr : %c\n", Char, (char )*voidPtr); // error: invalid use of void expression
    printf("Char : %c and (char *)voidPtr : %c\n", Char, *(char *)voidPtr);

    /** @brief Printing addresses */
    printf("&Char : %p and (char *)voidPtr : %p\n", (void*)&Char, (char *)voidPtr);

    /** @brief Address of the void pointer itself */
    printf("&voidPtr : %p\n", (void*)&voidPtr);

    printf("\n");


    /* =========================
     * [LABEL BOX] INT SECTION
     * ========================= */
    voidPtr = &Int;

    /**
     * @brief Accessing int value through void pointer
     */
/**
 * @brief ❌ Invalid void pointer dereference and misuse of keyword
 *
 * Issues:
 * - `(int)*voidPtr` attempts to dereference a void pointer before casting
 * - `int` is used instead of variable `Int` (syntax/logical error)
 *
 * @error invalid use of void expression
 *
 * @correct_usage
 *   *(int *)voidPtr
 */
 //    printf("int : %d and (int *)voidPtr : %d\n", int, (int )*voidPtr); // error: invalid use of void expression

    printf("Int : %d and (int *)voidPtr : %d\n", Int, *(int *)voidPtr);

    printf("&Int : %p and (int *)voidPtr : %p\n", (void*)&Int, (int *)voidPtr);
    printf("&voidPtr : %p\n", (void*)&voidPtr);

    printf("\n");


    /* =========================
     * [LABEL BOX] FLOAT SECTION
     * ========================= */
    voidPtr = &Float;

    /**
     * @brief Accessing float value through void pointer
     */
/**
 * @brief ❌ Incorrect casting order for float pointer access
 *
 * Problem:
 * - `(float)*voidPtr` tries to dereference a void pointer directly
 * - Typecasting must occur BEFORE dereferencing
 *
 * @error invalid use of void expression
 *
 * @correct_usage
 *   *(float *)voidPtr
 */
//    printf("Float : %f and (Float *)voidPtr : %f\n", Float, (Float )*voidPtr); // error: invalid use of void expression

    printf("Float : %f and (float *)voidPtr : %f\n", Float, *(float *)voidPtr);

    printf("&Float : %p and (float *)voidPtr : %p\n", (void*)&Float, (float *)voidPtr);
    printf("&voidPtr : %p\n", (void*)&voidPtr);

    printf("\n");


    /* =========================
     * [LABEL BOX] DOUBLE SECTION
     * ========================= */
    voidPtr = &Double;

    /**
     * @brief Accessing double value through void pointer
     */
/**
 * @brief ❌ Invalid dereferencing of void pointer for double type
 *
 * Problem:
 * - `(double)*voidPtr` attempts to dereference a typeless pointer
 * - Compiler cannot determine memory size to read
 *
 * @error invalid use of void expression
 *
 * @correct_usage
 *   *(double *)voidPtr
 */
//    printf("Double : %lf and (Double *)voidPtr : %lf\n", Double, (Double )*voidPtr); // error: invalid use of void expression
    printf("Double : %lf and (double *)voidPtr : %lf\n", Double, *(double *)voidPtr);

    printf("&Double : %p and (double *)voidPtr : %p\n", (void*)&Double, (double *)voidPtr);
    printf("&voidPtr : %p\n", (void*)&voidPtr);

    return 0;
}