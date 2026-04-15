#include <iostream>

using namespace std;

/**
 * @file void_pointer_size_demo.cpp
 * @brief Demonstrates size behavior of void pointers in C++.
 *
 * This program analyzes:
 * - Size of a void pointer
 * - Size of pointer-to-pointer
 * - Behavior of void* when assigned different data types
 *
 * @note In C++, dereferencing a void pointer (even in sizeof) is NOT allowed.
 *       Hence, sizeof(*voidPtr) results in a compilation error.
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

    void *voidPtr;  ///< Generic pointer (can store address of any type)


    /* ==========================================
     * [ LABEL BOX: INITIAL VOID POINTER ANALYSIS ]
     * ========================================== */
    cout << "Size of voidPtr (before assignment):" << endl;

/**
 * ==========================================
 * @brief INVALID VOID POINTER DEREFERENCE
 * ==========================================
 *
 * @details
 * Error:
 *   sizeof(*voidPtr) is not allowed in C++
 *
 * Reason:
 * - void* is a generic pointer with no type information
 * - 'void' is an incomplete type (no defined size)
 * - C++ does not allow dereferencing a void pointer
 *   even inside sizeof (unlike some C compiler extensions)
 *
 * Consequence:
 * - Compilation error: 'void* is not a pointer-to-object type'
 *
 * Fix:
 * - Cast void pointer to a valid type before using sizeof
 *   Example: sizeof(*(int*)voidPtr)
 *
 * @note
 * sizeof does not evaluate expressions at runtime,
 * but the type must still be valid at compile time.
 * The following is invalid in C++:
 * sizeof(*voidPtr)
 * Reason:
 * - void is an incomplete type
 * - Cannot be dereferenced or sized
 * @warning
 * Never dereference void* directly in C++ without casting.
 */
//    cout << "*voidPtr : " << sizeof(*voidPtr) << endl;

    /// Size of the pointer itself (architecture dependent: 4 or 8 bytes)
    cout << "voidPtr  : " << sizeof(voidPtr) << endl;

    /// Size of pointer to pointer (same as pointer size)
    cout << "&voidPtr : " << sizeof(&voidPtr) << endl;

    cout << endl;


    /* ==========================================
     * [ LABEL BOX: ASSIGNMENT - CHAR TYPE ]
     * ========================================== */
    voidPtr = &Char;
    cout << "After assigning address of char:" << endl;

    /// Size remains unchanged regardless of assigned type
    cout << "voidPtr  : " << sizeof(voidPtr) << endl;
    cout << "&voidPtr : " << sizeof(&voidPtr) << endl;

    cout << endl;


    /* ==========================================
     * [ LABEL BOX: ASSIGNMENT - INT TYPE ]
     * ========================================== */
    voidPtr = &Int;
    cout << "After assigning address of int:" << endl;

    cout << "voidPtr  : " << sizeof(voidPtr) << endl;
    cout << "&voidPtr : " << sizeof(&voidPtr) << endl;

    cout << endl;


    /* ==========================================
     * [ LABEL BOX: ASSIGNMENT - FLOAT TYPE ]
     * ========================================== */
    voidPtr = &Float;
    cout << "After assigning address of float:" << endl;

    cout << "voidPtr  : " << sizeof(voidPtr) << endl;
    cout << "&voidPtr : " << sizeof(&voidPtr) << endl;

    cout << endl;


    /* ==========================================
     * [ LABEL BOX: ASSIGNMENT - DOUBLE TYPE ]
     * ========================================== */
    voidPtr = &Double;
    cout << "After assigning address of double:" << endl;

    cout << "voidPtr  : " << sizeof(voidPtr) << endl;
    cout << "&voidPtr : " << sizeof(&voidPtr) << endl;

    cout << endl;


    /* ==========================
     * [ LABEL BOX: CONCLUSION ]
     * ==========================
     * - sizeof(voidPtr) is constant regardless of assigned type
     * - sizeof(&voidPtr) is also constant
     * - void* does NOT store type information
     * - Cannot dereference void* without casting in C++
     */

    return 0;
}