/*
Print Name and age

Problem statement
Take the person's name and age as input and print out the name and age as specified in the output format.

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
Ali
30
Sample Output 1:
The name of the person is Ali and the age is 30.
Explanation of Sample Input 1:
The input name is Ali and the input age is 30 which is printed in the specified format.

Input Format:

The first line of input contains a single string Name, representing the name of the person.

The second line of input contains a single integer Age, representing the age of the person.

Output Format:

The only line of output prints the name and age by sticking to the sample input format. Mind that the output string won't have preceding or trailing spaces.

Sample Input 1:
Ali
30
Sample Output 1:
The name of the person is Ali and the age is 30.
Explanation of Sample Input 1:
The input name is Ali and the input age is 30 which is printed in the specified format.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string person_name;
    int person_age;


//    cin >> person_name; // g++5.4
    getline(cin, person_name); // g++11
    cin >> person_age;

    cout << "The name of the person is " << person_name 
         << " and the age is " << person_age << ".";

    return 0;
}