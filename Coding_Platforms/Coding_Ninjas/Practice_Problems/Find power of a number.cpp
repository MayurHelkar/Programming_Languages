/*
Find power of a number

Problem statement
Write a program to find x to the power n (i.e., x^n). Take x and n from the user. You need to print the answer.
Note: For this question, you can assume that 0 raised to the power of 0 is 1

Detailed explanation ( Input/output format, Notes, Images )
Input format:

The only line of input contains two integers x and n separated by a single space.

Output Format:

The only line of output prints the power of the number.

Constraints:
0 <= x <= 8 
0 <= n <= 9
Sample Input 1 :
 3 4
Sample Output 1 :
81
Explanation of Sample Input 1:
3^4=3*3*3*3=81
Sample Input 2 :
 2 5
Sample Output 2 :
32
Explanation of Sample Input 2:
2^5=2*2*2*2*2=32
*/

#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int Power(int &a, int &b)
{
    int res = 1;

    if(b == 0)
    {
        return res;
    }

    while(b)
    {
        res *= a;
        b--;
    }

    return res;
}

int main() {
    //Write your code here
    int x;
    int n;

    cin >> x >> n;

    cout << Power(x, n);

    return 0;
}