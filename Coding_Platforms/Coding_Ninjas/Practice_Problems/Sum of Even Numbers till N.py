"""
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

"""

#Your code goes here
"""
def sum_numbers(N):
    sum = 0
    for i in range(1, N + 1):
        if N == 0:
            break
        elif i % 2 == 0:
            sum += i
    return sum

N = int(input())

print(sum_numbers(N))
"""

N = int(input())
print(sum(i for i in range(2, N + 1, 2)))