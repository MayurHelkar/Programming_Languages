using namespace std;

#include <iostream>
#include <vector>

int main()
{
    vector <int> vector_define = { 12, 34, 56, 78, 90 };

    for(int x : vector_define) { cout << x << " | "; }
    cout << endl;

    cout << "sizeof(vector_define) : " << sizeof(vector_define) << endl;

    vector_define[2] = 8342;
    vector_define.at(4) = 5028;

    for(int x : vector_define) { cout << x << " | "; }
    cout << endl;
    
    return 0;
}