#include <stdio.h>

/**
 * @file pointer_sizes.c
 * @brief Demonstrates sizes and values of pointers and their dereferenced types in C.
 *
 * This program shows:
 * - Size of primary data types using pointers
 * - Size of pointers
 * - Size of addresses of pointers
 * - Proper initialization before dereferencing
 */

/*===========================================================
|                GLOBAL POINTER DECLARATIONS                |
===========================================================*/

/**
 * @brief Pointer to char type
 */
char *char_ptr;

/**
 * @brief Pointer to int type
 */
int *int_ptr;

/**
 * @brief Pointer to float type
 */
float *float_ptr;

/**
 * @brief Pointer to double type
 */
double *double_ptr;


/*===========================================================
|                        MAIN FUNCTION                      |
===========================================================*/

/**
 * @brief Entry point of the program
 * @return int Exit status
 */
int main()
{
    /*-------------------------------------------------------
    |            LOCAL VARIABLE INITIALIZATION              |
    -------------------------------------------------------*/
    char c = 'A';
    int i = 10;
    float f = 3.14f;
    double d = 6.28;

    /* Assign addresses to pointers */
    char_ptr = &c;
    int_ptr = &i;
    float_ptr = &f;
    double_ptr = &d;

       printf("[SIZE OF VALUES POINTED TO]\n");

    /*-------------------------------------------------------
    |           SIZE OF DEREFERENCED POINTERS               |
    -------------------------------------------------------*/
    printf("*char_ptr : %zu, *int_ptr : %zu, *float_ptr : %zu and *double_ptr : %zu\n",
           sizeof(*char_ptr), sizeof(*int_ptr), sizeof(*float_ptr), sizeof(*double_ptr));

    /*-------------------------------------------------------
    |                 SIZE OF POINTERS                      |
    -------------------------------------------------------*/

    printf("\n[SIZE OF POINTERS]\n");

    printf("char_ptr : %zu, int_ptr : %zu, float_ptr : %zu and double_ptr : %zu\n",
           sizeof(char_ptr), sizeof(int_ptr), sizeof(float_ptr), sizeof(double_ptr));

    /*-------------------------------------------------------
    |              SIZE OF POINTER ADDRESSES                |
    -------------------------------------------------------*/

    printf("\n[SIZE OF POINTER VARIABLES (ADDRESSES)]\n");

    printf("&char_ptr : %zu, &int_ptr : %zu, &float_ptr : %zu and &double_ptr : %zu\n",
           sizeof(&char_ptr), sizeof(&int_ptr), sizeof(&float_ptr), sizeof(&double_ptr));

    printf("\n");

    printf("[DEREFERENCED VALUES]\n");
    
    /*-------------------------------------------------------
    |             VALUES AT POINTER LOCATIONS               |
    -------------------------------------------------------*/
    printf("*char_ptr : %c, *int_ptr : %d, *float_ptr : %f and *double_ptr : %lf\n",
           *char_ptr, *int_ptr, *float_ptr, *double_ptr);

    /*-------------------------------------------------------
    |                 POINTER ADDRESSES                     |
    -------------------------------------------------------*/

    printf("\n[POINTER ADDRESSES]\n");

    printf("char_ptr : %p, int_ptr : %p, float_ptr : %p and double_ptr : %p\n",
           (void*)char_ptr, (void*)int_ptr, (void*)float_ptr, (void*)double_ptr);

    /*-------------------------------------------------------
    |          ADDRESS OF POINTER VARIABLES                 |
    -------------------------------------------------------*/

    printf("\n[ADDRESS OF POINTER VARIABLES]\n");
    
    printf("&char_ptr : %p, &int_ptr : %p, &float_ptr : %p and &double_ptr : %p\n",
           (void*)&char_ptr, (void*)&int_ptr, (void*)&float_ptr, (void*)&double_ptr);

    return 0;
}