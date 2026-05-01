"""
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
"""

from os import *
from sys import *
from collections import *
from math import *

#Your code goes here

def power(a, b):
    result = 1
    while b > 0:
        # If b is odd, multiply result by a
        if b % 2 == 1:
            result *= a
        # Square the base
        a *= a
        # Divide exponent by 2
        b //= 2
    return result

x, y = map(int, input().split())
print(power(x, y))