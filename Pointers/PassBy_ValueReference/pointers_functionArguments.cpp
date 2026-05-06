#include <iostream>
using namespace std;

/**
 * @brief Demonstrates passing arguments by value.
 *
 * This function receives copies of variables from the caller.
 * Any modification inside this function does not affect
 * the original variables in the calling function.
 *
 * @param char_local   Character variable (copy)
 * @param int_local    Integer variable (copy)
 * @param float_local  Float variable (copy)
 * @param double_local Double variable (copy)
 */
void function_passByValue(char, int, float, double);

/**
 * @brief Demonstrates passing arguments by reference using pointers.
 *
 * This function receives memory addresses of variables, allowing
 * direct access to the original data. Any changes made through
 * pointers will reflect in the caller function.
 *
 * @param char_ptr_local   Pointer to character variable
 * @param int_ptr_local    Pointer to integer variable
 * @param float_ptr_local  Pointer to float variable
 * @param double_ptr_local Pointer to double variable
 */
void function_passByReference(char *, int *, float *, double *);

/* ============================================================
 *                        MAIN FUNCTION
 * ============================================================ */
/**
 * @brief Entry point of the program.
 *
 * Declares variables and calls functions to demonstrate
 * pass-by-value and pass-by-reference concepts.
 *
 * @return int Exit status of the program
 */
int main()
{
    char char_var;
    int int_var;
    float float_var;
    double double_var;

    /* ----------- Pass By Value Call ----------- */
    function_passByValue(char_var, int_var, float_var, double_var);
    
    cout << endl;

    /* ----------- Pass By Reference Call ----------- */
    function_passByReference(&char_var, &int_var, &float_var, &double_var);

    return 0;
}

/* ============================================================
 *                 FUNCTION: PASS BY VALUE
 * ============================================================ */
/**
 * @brief Prints values and addresses of copied variables.
 *
 * Demonstrates that local variables inside this function
 * have different memory addresses than the original variables.
 */
void function_passByValue(char char_local, int int_local, float float_local, double double_local)
{
    cout << "Pass by Value ::\n";

    /* Display copied values */
    cout << "char_local : " << char_local
         << ", int_local : " << int_local
         << ", float_local : " << float_local
         << " and double_local : " << double_local << endl;

    /* Display addresses of local copies */
    cout << "&char_local : " << &char_local
         << ", &int_local : " << &int_local
         << ", &float_local : " << &float_local
         << " and &double_local : " << &double_local << endl;
}

/* ============================================================
 *              FUNCTION: PASS BY REFERENCE
 * ============================================================ */
/**
 * @brief Prints values and addresses using pointers.
 *
 * Demonstrates that pointer parameters hold the addresses
 * of original variables, enabling direct access to them.
 */
void function_passByReference(char *char_ptr_local, int *int_ptr_local, float *float_ptr_local, double *double_ptr_local)
{
    cout << "Pass by Reference ::\n";

    /* Dereference pointers to access actual values */
    cout << "*char_ptr_local : " << *char_ptr_local
         << ", *int_ptr_local : " << *int_ptr_local
         << ", *float_ptr_local : " << *float_ptr_local
         << " and *double_ptr_local : " << *double_ptr_local << endl;

    /* Display addresses of original variables */
    cout << "char_ptr_local : " << char_ptr_local
         << ", int_ptr_local : " << int_ptr_local
         << ", float_ptr_local : " << float_ptr_local
         << " and double_ptr_local : " << double_ptr_local << endl;

    /* Display addresses of pointer variables themselves */
    cout << "&char_ptr_local : " << &char_ptr_local
         << ", &int_ptr_local : " << &int_ptr_local
         << ", &float_ptr_local : " << &float_ptr_local
         << " and &double_ptr_local : " << &double_ptr_local << endl;
}