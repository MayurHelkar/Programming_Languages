#include <iostream>

using namespace std;

int main()
{
    double *double_ptr_NULL = NULL;
    double *double_ptr_nullptr = nullptr;
    double *double_ptr_zero = 0;

//    cout << "*double_ptr_NULL : %c\n" << *double_ptr_NULL;
    cout << "double_ptr_NULL         : " << (void *)double_ptr_NULL << endl;
    cout << "&double_ptr_NULL        : " << (void *)&double_ptr_NULL << endl;

    cout << endl;
    
//    cout << "*double_ptr_nullptr : %c\n" << *double_ptr_nullptr;
    cout << "double_ptr_nullptr         : " << (void *)double_ptr_nullptr << endl;
    cout << "&double_ptr_nullptr        : " << (void *)&double_ptr_nullptr << endl;

    cout << endl;
    
//    cout << "*double_ptr_zero : %c\n" << *double_ptr_zero;
    cout << "double_ptr_zero         : " << (void *)double_ptr_zero << endl;
    cout << "&double_ptr_zero        : " << (void *)&double_ptr_zero << endl;

    return 0;
}