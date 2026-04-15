/**
 * @file null_pointer_demo.c
 * @brief Demonstrates different ways to initialize null pointers in C/C++.
 *
 * This program compares three pointer initializations:
 * - NULL macro
 * - nullptr (C++ only)
 * - 0 literal
 *
 * It prints both pointer values and their addresses.
 *
 * @note Dereferencing null pointers is undefined behavior and is avoided here.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * Initializes three pointers with null-equivalent values and
 * prints their values and memory addresses.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    /* =========================================================
     * [LABEL BOX] Pointer Initialization Section
     * ========================================================= */
    
    int *ptr_NULL    = NULL;     /**< Pointer initialized using NULL macro */
    int *ptr_nullptr = nullptr;  /**< Pointer initialized using nullptr (C++ only) */
    int *ptr_0       = 0;        /**< Pointer initialized using integer literal 0 */

    /* =========================================================
     * [LABEL BOX] Output Section: ptr_NULL
     * ========================================================= */

    // printf("*ptr_NULL : %d\n", *ptr_NULL); // ❌ Unsafe: Dereferencing NULL pointer
    printf("ptr_NULL : %p and &ptr_NULL : %p\n", (void*)ptr_NULL, (void*)&ptr_NULL);

    /* =========================================================
     * [LABEL BOX] Output Section: ptr_nullptr
     * ========================================================= */

    // printf("*ptr_nullptr : %d\n", *ptr_nullptr); // ❌ Unsafe
    printf("ptr_nullptr : %p and &ptr_nullptr : %p\n", (void*)ptr_nullptr, (void*)&ptr_nullptr);

    /* =========================================================
     * [LABEL BOX] Output Section: ptr_0
     * ========================================================= */

    // printf("*ptr_0 : %d\n", *ptr_0); // ❌ Unsafe
    printf("ptr_0 : %p and &ptr_0 : %p\n", (void*)ptr_0, (void*)&ptr_0);

    return 0;
}