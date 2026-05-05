using namespace std;

#include <iostream>
#include <vector>

int main()
{
    vector <int> vector_declare;

    cout << "vector_declare.size() : " << vector_declare.size() << endl;
    cout << "sizeof(vector_declare) / sizeof(vector_declare[0]) : " << sizeof(vector_declare) / sizeof(vector_declare[0]) << endl;
    cout << "sizeof(vector_declare[0]) : " << sizeof(vector_declare[0]) << endl;
    cout << "sizeof(vector_declare) : " << sizeof(vector_declare) << endl;

    cout << endl << endl;

    vector <int> vector_define = { 12345, 2345, 3456, 4567, 5678 };
    cout << "vector_define.size() : " << vector_define.size() << endl;
    cout << "sizeof(vector_define) / sizeof(vector_define[0]) : " << sizeof(vector_define) / sizeof(vector_define[0]) << endl;
    cout << "sizeof(vector_define) : " << sizeof(vector_define) << endl;
    cout << "sizeof(vector_define[0]) : " << sizeof(vector_define[0]) << endl;


    return 0;
}