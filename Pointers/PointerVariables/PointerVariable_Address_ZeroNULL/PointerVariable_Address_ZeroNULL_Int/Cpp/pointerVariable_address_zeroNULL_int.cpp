#include <iostream>

using namespace std;

int main()
{
    int *int_ptr_NULL = NULL;
    int *int_ptr_nullptr = nullptr;
    int *int_ptr_zero = 0;

//    cout << "*int_ptr_NULL : %c\n" << *int_ptr_NULL;
    cout << "int_ptr_NULL         : " << (void *)int_ptr_NULL << endl;
    cout << "&int_ptr_NULL        : " << (void *)&int_ptr_NULL << endl;

    cout << endl;
    
//    cout << "*int_ptr_nullptr : %c\n" << *int_ptr_nullptr;
    cout << "int_ptr_nullptr         : " << (void *)int_ptr_nullptr << endl;
    cout << "&int_ptr_nullptr        : " << (void *)&int_ptr_nullptr << endl;

    cout << endl;
    
//    cout << "*int_ptr_zero : %c\n" << *int_ptr_zero;
    cout << "int_ptr_zero         : " << (void *)int_ptr_zero << endl;
    cout << "&int_ptr_zero        : " << (void *)&int_ptr_zero << endl;

    return 0;
}