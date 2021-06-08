/*
Given two integers A and B. The task is to swap two numbers. 
Swapping here means to interchange the values of A and B.
 
Example 1:

Input:
A = 3 
B = 5
Output: 
5 3
Explanation:
Here, A = 3 and B = 5.
After swapping A = 5 and B = 3.
*/
#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{

    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b;

    return 0;
}
