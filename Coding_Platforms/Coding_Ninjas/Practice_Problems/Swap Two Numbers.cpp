/*
Swap Two Numbers

Problem statement
You are given two numbers 'a' and 'b' as input.



You must swap the values of 'a' and 'b'.



For Example:
Input: 
'a' = 8, 'b' = 5

Output:
5 8

Explanation:
Initially, the value of 'a' and 'b' is 8 and 5, respectively.

After swapping, the value of 'a' is 5, and the value of 'b' is 8.

Detailed explanation ( Input/output format, Notes, Images )
Detailed explanation (Input/output format, Notes, Images)

Input Format:

The first and only input line contains two integers, 'a' and 'b', representing the two numbers.

Output Format:

The first line of output prints the swapped value of 'a' and 'b'.

Note:

You do not need to print anything. It has already been taken care of. Just implement the given function.

Sample Input 1:
1 2 
Sample Output 1:
2 1
Explanation For Sample Input 1:
The output of the above test case is 2 1.
Sample Input 2:
5 6
Sample Output 2:
6 5
Explanation For Sample Input 2:
The output of the above test case is  6 5.
Constraints:
-10^5 <= 'a', 'b' <= 10 ^ 5

Time Limit: 1 sec
*/

#include <iostream>
#include <algorithm>

using namespace std;

void swapNumber(int &a, int &b) {
	// Write your code here.
	// int temp = a;
	// a = b;
	// b = temp;

	// a ^= b;
	// b ^= a;
	// a ^= b;

	// a = a ^ b;
	// b = a ^ b;
	// a = a ^ b;

	std::swap(a, b);
	
	return;
}

int main()
{
	int a = 12, b = 34;

	cout << a << " and " << b << endl;

	swapNumber(a, b);

	cout << a << " and " << b << endl;

	return 0;
}