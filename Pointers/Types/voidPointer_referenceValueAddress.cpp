#include <iostream>
using namespace std;

/**
 * @brief Demonstrates usage of void pointers with different data types.
 * 
 * This program shows how a void pointer can store the address of different
 * variable types (char, int, float, double), and how typecasting is required
 * to correctly dereference and access the stored values.
 * 
 * @note Dereferencing a void pointer directly is illegal in C++. It must first
 *       be cast to the appropriate type.
 */
int main()
{
    /// [Label Box] Variable Declarations
    char Char;
    int Int;
    float Float;
    double Double;

    /// [Label Box] Generic Pointer Declaration
    void *voidPtr;

    /// ============================================================
    /// [Label Box] CHAR TYPE HANDLING
    /// ============================================================

    voidPtr = &Char; ///< Assign address of char variable to void pointer
/// ============================================================
/// [Label Box] ERROR: INVALID USE OF VOID EXPRESSION (CHAR)
/// ============================================================

/**
 * @brief Compilation Error Explanation
 * 
 * ❌ Problem:
 * (char)*voidPtr tries to dereference a void pointer directly.
 * 
 * A void pointer (void*) has no type information, so the compiler
 * does not know how many bytes to read when dereferencing.
 * 
 * @error invalid use of void expression
 * 
 * ✔ Fix:
 * First cast void* to (char*), then dereference:
 * *(char*)voidPtr
 */
//    cout << "Char : and " << Char << "(char *)voidPtr : " << (char )*voidPtr << endl;
    /// Accessing value via typecasting
    cout << "Char : " << Char
         << " and *(char*)voidPtr : " << *(char *)voidPtr << endl;

    /// Printing addresses
    cout << "&Char : " << &Char
         << " and (char*)voidPtr : " << (char *)voidPtr << endl;

    /// Address of the void pointer itself
    cout << "&voidPtr : " << &voidPtr << endl;

    cout << endl;

    /// ============================================================
    /// [Label Box] INT TYPE HANDLING
    /// ============================================================

    voidPtr = &Int; ///< Assign address of int variable to void pointer
/// ============================================================
/// [Label Box] ERROR: INVALID USE OF VOID EXPRESSION (INT)
/// ============================================================

/**
 * @brief Compilation Error Explanation
 * 
 * ❌ Problem:
 * (int)*voidPtr attempts to dereference voidPtr before casting.
 * 
 * Operator precedence causes:
 *     *voidPtr   → invalid (cannot dereference void*)
 *     then cast to int → too late
 * 
 * @error invalid use of void expression
 * 
 * ✔ Fix:
 * Cast first, then dereference:
 * *(int*)voidPtr
 */
//    cout << "Int : " << Int << " and (int *)voidPtr : " << (int )*voidPtr << endl;
    /// Accessing value via typecasting
    cout << "Int : " << Int
         << " and *(int*)voidPtr : " << *(int *)voidPtr << endl;

    /// Printing addresses
    cout << "&Int : " << &Int
         << " and (int*)voidPtr : " << (int *)voidPtr << endl;

    cout << "&voidPtr : " << &voidPtr << endl;

    cout << endl;

    /// ============================================================
    /// [Label Box] FLOAT TYPE HANDLING
    /// ============================================================

    voidPtr = &Float; ///< Assign address of float variable to void pointer
/// ============================================================
/// [Label Box] ERROR: INVALID USE OF VOID EXPRESSION (FLOAT)
/// ============================================================

/**
 * @brief Compilation Error Explanation
 * 
 * ❌ Problem:
 * (Float)*voidPtr is incorrect for two reasons:
 * 
 * 1. Same void dereferencing issue:
 *    *voidPtr is invalid
 * 
 * 2. Incorrect type name:
 *    'Float' (capital F) is not a standard type (should be 'float')
 * 
 * @error invalid use of void expression
 * 
 * ✔ Fix:
 * *(float*)voidPtr
 */
//    cout << "Float : " << Float << "(Float *)voidPtr : " << (Float )*voidPtr << endl;
    /// Accessing value via typecasting
    cout << "Float : " << Float
         << " and *(float*)voidPtr : " << *(float *)voidPtr << endl;

    /// Printing addresses
    cout << "&Float : " << &Float
         << " and (float*)voidPtr : " << (float *)voidPtr << endl;

    cout << "&voidPtr : " << &voidPtr << endl;

    cout << endl;

    /// ============================================================
    /// [Label Box] DOUBLE TYPE HANDLING
    /// ============================================================

    voidPtr = &Double; ///< Assign address of double variable to void pointer
/// ============================================================
/// [Label Box] ERROR: INVALID USE OF VOID EXPRESSION (DOUBLE)
/// ============================================================

/**
 * @brief Compilation Error Explanation
 * 
 * ❌ Problem:
 * (Double)*voidPtr has two issues:
 * 
 * 1. Dereferencing void* directly → invalid
 * 2. 'Double' is not a valid type (should be 'double')
 * 
 * @error invalid use of void expression
 * 
 * ✔ Fix:
 * *(double*)voidPtr
 */
//    cout << "Double : " << Double << " and (Double *)voidPtr : " << (Double )*voidPtr << endl;
    /// Accessing value via typecasting
    cout << "Double : " << Double
         << " and *(double*)voidPtr : " << *(double *)voidPtr << endl;

    /// Printing addresses
    cout << "&Double : " << &Double
         << " and (double*)voidPtr : " << (double *)voidPtr << endl;

    cout << "&voidPtr : " << &voidPtr << endl;

    return 0;
}