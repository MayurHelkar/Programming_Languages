#include <iostream>

using namespace std;

/**
 * @brief Demonstrates different ways of initializing null pointers in C++.
 * 
 * This program compares:
 * - NULL macro
 * - nullptr keyword (modern C++)
 * - integer literal 0
 * 
 * It prints:
 * - Pointer values
 * - Addresses of pointer variables
 * 
 * @note Dereferencing null pointers is undefined behavior and is avoided here.
 */
int main()
{
    //============================================================
    // [LABEL BOX] Pointer Initialization Section
    //============================================================

    int* ptr_NULL    = NULL;     ///< Legacy null pointer (macro)
    int* ptr_nullptr = nullptr;  ///< Modern C++ null pointer (type-safe)
    int* ptr_0       = 0;        ///< Old-style null pointer (integer literal)

    //============================================================
    // [LABEL BOX] Output Section - ptr_NULL
    //============================================================

    // cout << "*ptr_NULL : " << *ptr_NULL; // ⚠️ Undefined behavior (commented out)
    cout << "[ptr_NULL] Value: " << ptr_NULL << " | Address: " << &ptr_NULL << endl;

    //============================================================
    // [LABEL BOX] Output Section - ptr_nullptr
    //============================================================

    // cout << "*ptr_nullptr : " << *ptr_nullptr; // ⚠️ Undefined behavior (commented out)
    cout << "[ptr_nullptr] Value: " << ptr_nullptr << " | Address: " << &ptr_nullptr << endl;

    //============================================================
    // [LABEL BOX] Output Section - ptr_0
    //============================================================

    // cout << "*ptr_0 : " << *ptr_0; // ⚠️ Undefined behavior (commented out)
    cout << "[ptr_0] Value: " << ptr_0 << " | Address: " << &ptr_0 << endl;

    //============================================================
    // [LABEL BOX] End of Program
    //============================================================

    return 0;
}