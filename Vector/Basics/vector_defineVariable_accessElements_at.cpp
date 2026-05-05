using namespace std;

#include <iostream>
#include <vector>

int main()
{
    vector <int> vector_define = { 12, 34, 56, 78, 90 };

    for(int q : vector_define) { cout << q << " | "; }
    cout << endl << endl;

//    vector <int> vector_define_func(5, 12, 34, 56, 78, 90 );
    vector <int> vector_define_func(5, 12);

    for(int w : vector_define_func) { cout << w << " | "; }
    cout << endl;

    cout << "vector_define[3] : " << vector_define[3] << endl;

    cout << "vector_define.at(4) : " << vector_define.at(4) << endl;

    return 0;
}