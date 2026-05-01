/*
Calculate Simple Interest

Problem statement
Take the principal amount, rate of interest, and the time period as input and calculate the Simple Interest.

Note: Return answer as Floor integer value.

Detailed explanation ( Input/output format, Notes, Images )
Input Format:

The first line of input contains a single integer Principal amount.

The Second line of input contains a single decimal Rate of interest.

The Third line of input contains a single Integer Time period.

Output Format:

Calculate the Simple Interest and print it.

Sample Input 1:
2000
2.2
4
Sample Output 1:
176
Explanation of Sample Input 1:
The input is principal=2000, rate=2.2 and time=4.
So Simple interest=Principal*rate*time/100 hence 
answer is 2000*2.2*4/100=176
*/

#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int principal_amount;
    float rate_of_interest;
    int time_period;

    cin >> principal_amount;
    cin >> rate_of_interest;
    cin >> time_period;
    
    float res = ( principal_amount * rate_of_interest * time_period ) / 100;
    
    // cout << floor(res) << endl;
    cout << int(res) << endl;
    
    return 0;
}