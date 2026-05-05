using namespace std;

#include <iostream>
#include <vector>

int main()
{
    vector <int> vector_define = { 7563, 6461, 7543, 8432, 5432 };

    vector_define.push_back(21643);
    
    cout << "vector_define[0] : " << vector_define[0] << endl;

    vector_define.insert(vector_define.begin(), 35874);

    vector_define.insert(vector_define.begin() + 1, 69327);

/*
    vector_define.insert(vector_define.middle(), 86423); // error: 'class std::vector<int>' has no member named 'middle'
    vector_define.insert(vector_define.middle() + 1, 95413); // error: 'class std::vector<int>' has no member named 'middle'
*/

    vector_define.insert(vector_define.end(), 94726); // error: no matching function for call to 'end()'

    for(int x : vector_define)
    {
        cout << x << " | ";
    }
    cout << endl;
    
    return 0;
}