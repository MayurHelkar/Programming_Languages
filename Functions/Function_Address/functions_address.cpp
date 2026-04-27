#include <iostream>
#include <cstdint>
#include <functional>

using namespace std;

/**
 * @brief Sample function returning integer.
 * 
 * @return int Always returns 0.
 */
int firstFunction(void);

/**
 * @brief Another sample function returning integer.
 * 
 * @return int Always returns 0.
 */
int secondFunction(void);

/**
 * @brief Utility template to print raw address of a function.
 * 
 * @tparam T Function pointer type
 * @param func Function whose address is to be printed
 */
template<typename T>
void printAddress(T func) {
    cout << "reinterpret_cast<void*>(" << func << ") : "
         << reinterpret_cast<void*>(func) << endl;
}

/**
 * @brief Entry point of the program.
 * 
 * Demonstrates multiple techniques to obtain and display
 * function addresses in C++.
 * 
 * @return int Exit status
 */
int main(void)
{
    /// Array of function pointers
    int (*functions[])() = { main, firstFunction, secondFunction };

    cout << "================ FUNCTION ADDRESS DEMONSTRATION ================\n\n";

    // ============================================================
    // METHOD 1: Direct Function Name vs Address-of Operator
    // ============================================================
    /**
     * @brief Demonstrates that function names decay to pointers.
     */
    cout << "[METHOD 1] Function name vs &function\n";
    cout << "main: " << main
         << ", firstFunction: " << firstFunction
         << ", secondFunction: " << secondFunction << endl;

    cout << "&main: " << &main
         << ", &firstFunction: " << &firstFunction
         << ", &secondFunction: " << &secondFunction << endl;

    cout << "\n";

    // ============================================================
    // METHOD 2: Explicit Function Pointers
    // ============================================================
    /**
     * @brief Assign functions to explicit function pointer variables.
     */
    cout << "[METHOD 2] Using explicit function pointers\n";

    int (*ptr1)() = firstFunction;
    int (*ptr2)() = secondFunction;

    cout << "ptr1: " << ptr1 << endl;
    cout << "ptr2: " << ptr2 << endl;

    cout << "\n";

    // ============================================================
    // METHOD 3: reinterpret_cast for Raw Address Representation
    // ============================================================
    /**
     * @brief Converts function pointers into raw representations.
     * 
     * uintptr_t provides a numeric representation,
     * void* provides a generic pointer view.
     */
    cout << "[METHOD 3] reinterpret_cast for raw address view\n";

    cout << "firstFunction (void*): "
         << reinterpret_cast<void*>(firstFunction) << endl;

    cout << "firstFunction (uintptr_t): "
         << reinterpret_cast<uintptr_t>(firstFunction) << endl;

    cout << "secondFunction (void*): "
         << reinterpret_cast<void*>(secondFunction) << endl;

    cout << "secondFunction (uintptr_t): "
         << reinterpret_cast<uintptr_t>(secondFunction) << endl;

    cout << "\n";

    // ============================================================
    // METHOD 4: Storing Function Addresses in a Container
    // ============================================================
    /**
     * @brief Demonstrates storing multiple function pointers
     *        in an array and iterating over them.
     */
    cout << "[METHOD 4] Store function pointers in array\n";

    for (int i = 0; i < 3; i++) {
        cout << "Function[" << i << "] address: "
             << functions[i] << endl;
    }

    cout << "\n";

    // ============================================================
    // METHOD 5: Template-Based Address Printer
    // ============================================================
    /**
     * @brief Uses a generic template function to print addresses.
     */
    cout << "[METHOD 5] Template-based printer\n";

    printAddress(firstFunction);
    printAddress(secondFunction);

    cout << "\n";

    // ============================================================
    // METHOD 6: std::function Wrapper (High-Level)
    // ============================================================
    /**
     * @brief Demonstrates use of std::function wrapper.
     * 
     * Note: std::function abstracts away raw pointers.
     * target<T>() retrieves the stored callable if types match.
     */
    cout << "[METHOD 6] std::function (high-level abstraction)\n";

    std::function<void()> f = firstFunction;

    cout << "Stored function target: "
         << f.target<void(*)()>() << endl;

    cout << "\n===============================================================\n";

    return 0;
}

/**
 * @brief Implementation of firstFunction.
 * 
 * @return int Always returns 0.
 */
int firstFunction(void)
{
    return 0;
}

/**
 * @brief Implementation of secondFunction.
 * 
 * @return int Always returns 0.
 */
int secondFunction(void)
{
    return 0;
}