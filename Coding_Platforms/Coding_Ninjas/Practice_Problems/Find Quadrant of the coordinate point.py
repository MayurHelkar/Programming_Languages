"""
Find Quadrant of the coordinate point

Detailed explanation (Input/output format, Notes, Images)
Input format:
The only line of input contains two integers separated by a single space.
Output format:
The only line of the output prints the Position of the point in the coordinate system.

Problem statement
Write a program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.

Print

"1st Quadrant": if  +x,+y
"2nd Quadrant": if -x,+y
"3rd Quadrant": if -x,-y
"4th Quadrant": if +x,-y
"x axis": if x,0
"y axis": if 0,y
"Origin": if 0,0
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
5 100
Sample Output 1 :
1st Quadrant
Explanation of Sample Input 1:
Both x and y are positive so the point lies in 1st Quadrant.
Sample Input 2 :
0 -80
Sample Output 2 :
y axis
Explanation of Sample Input 2:
 Since x is 0 the point lies in y-axis.
Sample Input 3 :
-2 40
Sample Output 3 :
2nd Quadrant
Explanation of Sample Input 3:
Since x is negative and y is positive the point lies in 2nd Quadrant.
"""

from os import *
from sys import *
from collections import *
from math import *

#Your code goes here
x, y = map(int, input().split())

def quadrant(x, y):
    if x > 0 and y > 0:
        print("1st Quadrant")
    elif x < 0 and y > 0:
        print("2nd Quadrant")
    elif x < 0 and y < 0:
        print("3rd Quadrant")
    elif x > 0 and y < 0:
        print("4th Quadrant")
    elif x != 0 and y == 0:
        print("x axis")
    elif x == 0 and y != 0:
        print("y axis")
    elif x == 0 and y == 0:
        print("Origin")

quadrant(x, y)