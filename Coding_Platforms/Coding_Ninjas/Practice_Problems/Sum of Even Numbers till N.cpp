/*
Sum of Even Numbers till N

Problem statement
Given a number N, print sum of all even numbers from 1 to N.

Detailed explanation ( Input/output format, Notes, Images )
Input Format:
The only line of input contains an integer, N.
Output Format:
The only line of output prints the sum of all even numbers from 1 to N.

Constraints :
 1 <= N <= 10ˆ4 
Sample Input 1 :
 6
Sample Output 1 :
12
Explanation of Sample Input 1:
The even numbers from 1 to 6 are: 2, 4, 6, So adding these 3 numbers give a sum of 12.

*/

//Your code goes here
#include <iostream>
using namespace std;

int sum_numbers(int &M)
{
    int sum = 0;
    
    int x;

    if(M == 0)
    {
        return 0;
    }

    for(x = 0; x < M + 1; x++)
    {
        if(x % 2 == 0)
        {
            sum += x;
        }
    }
    return sum;
}

int main() {
    //Write your code here
    int N;
    cin >> N;

    cout << sum_numbers(N);

    return 0;
}