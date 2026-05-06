#include <iostream>
using namespace std;

/**
 * @file pointer_sizes.cpp
 * @brief Demonstrates sizes and values of pointers and their dereferenced types.
 *
 * This program illustrates:
 * - Size of data types via dereferencing pointers
 * - Size of pointers themselves
 * - Size of pointer addresses
 * - Safe usage of pointers (initialized before dereferencing)
 */

/*===========================================================
|                GLOBAL POINTER DECLARATIONS                |
===========================================================*/

/**
 * @brief Pointer to char type
 */
char *char_ptr = nullptr;

/**
 * @brief Pointer to int type
 */
int *int_ptr = nullptr;

/**
 * @brief Pointer to float type
 */
float *float_ptr = nullptr;

/**
 * @brief Pointer to double type
 */
double *double_ptr = nullptr;


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

    cout << "===== POINTER SIZE ANALYSIS =====\n\n";

    /*-------------------------------------------------------
    |           SIZE OF DEREFERENCED POINTERS               |
    -------------------------------------------------------*/
    cout << "[SIZE OF VALUES POINTED TO]\n";
    cout << "*char_ptr  : " << sizeof(*char_ptr)
         << ", *int_ptr  : " << sizeof(*int_ptr)
         << ", *float_ptr: " << sizeof(*float_ptr)
         << ", *double_ptr: " << sizeof(*double_ptr) << endl;

    /*-------------------------------------------------------
    |                 SIZE OF POINTERS                      |
    -------------------------------------------------------*/
    cout << "\n[SIZE OF POINTERS]\n";
    cout << "char_ptr  : " << sizeof(char_ptr)
         << ", int_ptr  : " << sizeof(int_ptr)
         << ", float_ptr: " << sizeof(float_ptr)
         << ", double_ptr: " << sizeof(double_ptr) << endl;

    /*-------------------------------------------------------
    |              SIZE OF POINTER ADDRESSES                |
    -------------------------------------------------------*/
    cout << "\n[SIZE OF POINTER VARIABLES (ADDRESSES)]\n";
    cout << "&char_ptr  : " << sizeof(&char_ptr)
         << ", &int_ptr  : " << sizeof(&int_ptr)
         << ", &float_ptr: " << sizeof(&float_ptr)
         << ", &double_ptr: " << sizeof(&double_ptr) << endl;

    cout << "\n===== POINTER VALUE ANALYSIS =====\n\n";

    /*-------------------------------------------------------
    |             VALUES AT POINTER LOCATIONS               |
    -------------------------------------------------------*/
    cout << "[DEREFERENCED VALUES]\n";
    cout << "*char_ptr  : " << *char_ptr
         << ", *int_ptr  : " << *int_ptr
         << ", *float_ptr: " << *float_ptr
         << ", *double_ptr: " << *double_ptr << endl;

    /*-------------------------------------------------------
    |                 POINTER ADDRESSES                     |
    -------------------------------------------------------*/
    cout << "\n[POINTER ADDRESSES]\n";
    cout << "char_ptr  : " << char_ptr
         << ", int_ptr  : " << int_ptr
         << ", float_ptr: " << float_ptr
         << ", double_ptr: " << double_ptr << endl;

    /*-------------------------------------------------------
    |          ADDRESS OF POINTER VARIABLES                 |
    -------------------------------------------------------*/
    cout << "\n[ADDRESS OF POINTER VARIABLES]\n";
    cout << "&char_ptr  : " << &char_ptr
         << ", &int_ptr  : " << &int_ptr
         << ", &float_ptr: " << &float_ptr
         << ", &double_ptr: " << &double_ptr << endl;

    return 0;
}