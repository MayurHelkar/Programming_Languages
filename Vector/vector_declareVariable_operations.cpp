using namespace std;

#include <iostream>
#include <vector>

int main()
{
    vector <int> vector_declare;

    vector_declare.push_back(21643);
    
    cout << "vector_declare[0] : " << vector_declare[0] << endl;

//    vector_declare.insert(begin() + 1, 35874); // error: no matching function for call to 'begin()'

//    vector_declare.insert(middle(), 86423); // error: 'middle' was not declared in this scope
//    vector_declare.insert(middle() + 1, 95413); // error: 'middle' was not declared in this scope

//    vector_declare.insert(end(), 94726); // error: no matching function for call to 'end()'

    for(int x : vector_declare)
    {
        cout << x << " | ";
    }
    cout << endl;
    
    return 0;
}