#include <iostream>

using namespace std;

int main()
{
    char *char_ptr_NULL = NULL;
    char *char_ptr_nullptr = nullptr;
    char *char_ptr_zero = 0;

//    cout << "*char_ptr_NULL : %c\n" << *char_ptr_NULL;
    cout << "char_ptr_NULL         : " << (void *)char_ptr_NULL << endl;
    cout << "&char_ptr_NULL        : " << (void *)&char_ptr_NULL << endl;

    cout << endl;
    
//    cout << "*char_ptr_nullptr : %c\n" << *char_ptr_nullptr;
    cout << "char_ptr_nullptr         : " << (void *)char_ptr_nullptr << endl;
    cout << "&char_ptr_nullptr        : " << (void *)&char_ptr_nullptr << endl;

    cout << endl;
    
//    cout << "*char_ptr_zero : %c\n" << *char_ptr_zero;
    cout << "char_ptr_zero         : " << (void *)char_ptr_zero << endl;
    cout << "&char_ptr_zero        : " << (void *)&char_ptr_zero << endl;


    return 0;
}