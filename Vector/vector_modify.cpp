using namespace std;

#include <iostream>
#include <vector>

int main()
{
    vector <int> vector_define = { 1, 2, 3, 4, 5 };

    cout << "Fill the vector below :" << endl;
    for(int &x : vector_define) { x = x + 10; }
    cout << "End of the Vector filling" << endl;

    cout << endl;

    for(int x : vector_define)
    {
        cout << x << " | ";
    }
    cout << endl;

    return 0;
}