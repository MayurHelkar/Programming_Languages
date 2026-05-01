/*
Sum of even & odd

Problem statement
Write a program to input an integer N and print the sum of all its even digits and all its odd digits separately.

Digits mean numbers, not the places! If the given integer is "13245", the even digits are 2 and 4, and the odd digits are 1, 3, and 5.

Detailed explanation ( Input/output format, Notes, Images )
Input format:
The only line of input contains a single integer N.
Output format:
Print first even sum and then odd sum separated by space.

Constraints
0 <= N <= 10^8
Sample Input 1:
1234
Sample Output 1:
6 4
Sample Input 2:
552245
Sample Output 2:
8 15
Explanation for Sample Input 2:
Considering the input provided, we can identify the even digits as 2, 2, and 4. If we add these even digits together, we get 8 (2 + 2 + 4). Similarly, for the odd digits, which are 5, 5, and 5, their sum is 15 (5 + 5 + 5). Therefore, the answer is expressed as 8(evenSum) followed by a single space and then 15 (oddSum).
*/

#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int N;
    cin >> N;

    int evenSum = 0;
    int oddSum = 0;
    int temp = 0;
    while(N)
    {
        temp = N % 10;
        if(temp & 1 == 1)
        {
            oddSum += temp;
        }
        else
        {
            evenSum += temp;
        }
        N /= 10;
    }

    cout << evenSum << " " << oddSum << endl;
    
    return 0;
}