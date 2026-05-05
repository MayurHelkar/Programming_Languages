using namespace std;

#include <iostream>
#include <vector>

int main()
{
    vector <char> charVector_define = { 'a', 'b', 'c', 'd', 'e' };

    cout << "charVector_define.size() : " << charVector_define.size() << endl;
    cout << "sizeof(charVector_define) : " << sizeof(charVector_define) << endl;

    for(char &x : charVector_define) { x = toupper(x); }

    for(char x : charVector_define) { cout << x << " | "; }

    return 0;
}