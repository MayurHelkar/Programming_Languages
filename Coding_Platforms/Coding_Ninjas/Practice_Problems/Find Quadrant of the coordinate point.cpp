/*
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
*/

#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    if(x > 0  && y > 0) cout << "1st Quadrant" << endl;
    else if(x < 0  && y > 0) cout << "2nd Quadrant" << endl;
    else if(x < 0  && y < 0) cout << "3rd Quadrant" << endl;
    else if(x > 0  && y < 0) cout << "4th Quadrant" << endl;
    else if(x > 0 && y == 0) cout << "x axis" << endl;
    else if(x == 0 && y > 0) cout << "y axis" << endl;
    else if(x == 0 && y == 0) cout << "Origin" << endl;

    return 0;
}