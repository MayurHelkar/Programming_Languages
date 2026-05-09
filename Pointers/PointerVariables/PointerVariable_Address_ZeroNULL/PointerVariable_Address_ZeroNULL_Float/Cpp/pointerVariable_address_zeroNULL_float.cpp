#include <iostream>

using namespace std;

int main()
{
    float *float_ptr_NULL = NULL;
    float *float_ptr_nullptr = nullptr;
    float *float_ptr_zero = 0;

//    cout << "*float_ptr_NULL : %c\n" << *float_ptr_NULL;
    cout << "float_ptr_NULL         : " << (void *)float_ptr_NULL << endl;
    cout << "&float_ptr_NULL        : " << (void *)&float_ptr_NULL << endl;

    cout << endl;
    
//    cout << "*float_ptr_nullptr : %c\n" << *float_ptr_nullptr;
    cout << "float_ptr_nullptr         : " << (void *)float_ptr_nullptr << endl;
    cout << "&float_ptr_nullptr        : " << (void *)&float_ptr_nullptr << endl;

    cout << endl;
    
//    cout << "*float_ptr_zero : %c\n" << *float_ptr_zero;
    cout << "float_ptr_zero         : " << (void *)float_ptr_zero << endl;
    cout << "&float_ptr_zero        : " << (void *)&float_ptr_zero << endl;

    return 0;
}