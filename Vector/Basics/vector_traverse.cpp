using namespace std;

#include <iostream>
#include <vector>

int main()
{
    vector <int> vector_define = { 12, 34, 56, 78, 90 };

    for(int x : vector_define) { cout << x << " | "; };
    cout << endl;
    int l = 0;
    while (l < vector_define.size()) {
        cout << vector_define[l] << " | ";
        l++;
    }
    cout << endl;

//    while(int x : vector_define) { cout << x << " | "; }
    int i = 0;
    while (i < vector_define.size()) {
        cout << vector_define[i] << " | ";
        i++;
    }
    cout << endl;

//    do{ cout << x << " | "; } (int x : vector_define);
    int j = 0;
    do {
        cout << vector_define[j] << " | ";
        j++;
    } while (j < vector_define.size());

    return 0;
}