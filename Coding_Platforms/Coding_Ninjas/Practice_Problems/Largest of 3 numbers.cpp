/*
Largest of 3 numbers

Problem statement
Write a program that takes three numbers a,b, and c as input and prints the largest number amongst them.

Detailed explanation ( Input/output format, Notes, Images )
Input Format:
The only line of input contains three space-separated integers.
Output Format:
The only line of the output prints the largest integer.

Sample Input 1 :
4 6 1
Sample Output 1 :
6
Explanation of Sample Input 1:
6 is the highest of amongst all.
Sample Input 2 :
-32 -23 -76
Sample Output 2 :
-23
Explanation of Sample Input 2:
-23 is the highest of amongst all.
Sample Input 3 :
-4 0 5
Sample Output 3 :
5
Explanation of Sample Input 2:
5 is the highest of amongst all.
*/

#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here

    int a, b, c;

    cin >> a >> b >> c;

    if(a >= b && a >= c)
    {
        cout << a;
    }
    else if(b >= a && b >= c)
    {
        cout << b;
    }
    else if(c >= a && c >= b)
    {
        cout << c;
    }

    return 0;
}