using namespace std;

#include <iostream>
#include <vector>

vector <int> vector_declare_G;
vector <int> vector_define_G(3, 5);

int main()
{
    cout << "sizeof(vector_declare_G) : " << sizeof(vector_declare_G) << " and sizeof(&vector_declare_G) : " << sizeof(&vector_declare_G) << endl;
    
    cout << "sizeof(vector_define_G) : " << sizeof(vector_define_G) << " and sizeof(&vector_define_G) : " << sizeof(&vector_define_G) << endl;

    cout << endl;

//    cout << "vector_declare_G : " << vector_declare_G << endl; // error: 'cout' does not name a type
//    cout << "vector_define_G : " << vector_define_G << endl;

    int i;
//    int x;
    for(i = 0; i < 3; i++)
    {
        cout << vector_define_G[i] << " | ";
    }
    cout << endl;
    for(int x : vector_define_G)
    {
        cout << x << " | ";
    }

    cout << endl << endl;

    vector <int> vector_define_array = { 1, 2, 3 };
    for(int x : vector_define_array)
    {
        cout << x << " | ";
    }
    cout << endl;
    for(i = 0; i < 3; i++)
    {
        cout << vector_define_array[i] << " | ";
    }
    cout << endl;

    return 0;
}