#include <stdio.h>

/**
 * @brief Demonstrates passing arguments by value.
 *
 * This function receives copies of variables from the caller.
 * Any modification inside this function does not affect original variables.
 *
 * @param char_local   Character variable (copy)
 * @param int_local    Integer variable (copy)
 * @param float_local  Float variable (copy)
 * @param double_local Double variable (copy)
 */
void function_passByValue(char char_local, int int_local, float float_local, double double_local);

/**
 * @brief Demonstrates passing arguments by reference using pointers.
 *
 * This function receives addresses of variables, allowing direct
 * access and modification of original variables.
 *
 * @param char_ptr_local   Pointer to character variable
 * @param int_ptr_local    Pointer to integer variable
 * @param float_ptr_local  Pointer to float variable
 * @param double_ptr_local Pointer to double variable
 */
void function_passByReference(char *char_ptr_local, int *int_ptr_local, float *float_ptr_local, double *double_ptr_local);

/* ============================================================
 *                        MAIN FUNCTION
 * ============================================================ */
int main()
{
    char char_var = 'A';
    int int_var = 10;
    float float_var = 3.14f;
    double double_var = 99.99;

    /* ----------- Pass By Value Call ----------- */
    function_passByValue(char_var, int_var, float_var, double_var);
    
    printf("\n");

    /* ----------- Pass By Reference Call ----------- */
    function_passByReference(&char_var, &int_var, &float_var, &double_var);

    return 0;
}

/* ============================================================
 *                 FUNCTION: PASS BY VALUE
 * ============================================================ */
void function_passByValue(char char_local, int int_local, float float_local, double double_local)
{
    printf("Pass by Value ::\n");

    /* Print values */
    printf("char_local : %c, int_local : %d, float_local : %f and double_local : %lf\n",
           char_local, int_local, float_local, double_local);

    /* Print addresses (different from original variables) */
    printf("&char_local : %p, &int_local : %p, &float_local : %p and &double_local : %p\n",
           (void*)&char_local, (void*)&int_local, (void*)&float_local, (void*)&double_local);
}

/* ============================================================
 *              FUNCTION: PASS BY REFERENCE
 * ============================================================ */
void function_passByReference(char *char_ptr_local, int *int_ptr_local, float *float_ptr_local, double *double_ptr_local)
{
    printf("Pass by Reference ::\n");

    /* Dereference pointers to get values */
    printf("*char_ptr_local : %c, *int_ptr_local : %d, *float_ptr_local : %f and *double_ptr_local : %lf\n",
           *char_ptr_local, *int_ptr_local, *float_ptr_local, *double_ptr_local);

    /* Print pointer values (same as original variable addresses) */
    printf("char_ptr_local : %p, int_ptr_local : %p, float_ptr_local : %p and double_ptr_local : %p\n",
           (void*)char_ptr_local, (void*)int_ptr_local, (void*)float_ptr_local, (void*)double_ptr_local);

    /* Print addresses of pointer variables themselves */
    printf("&char_ptr_local : %p, &int_ptr_local : %p, &float_ptr_local : %p and &double_ptr_local : %p\n",
           (void*)&char_ptr_local, (void*)&int_ptr_local, (void*)&float_ptr_local, (void*)&double_ptr_local);
}