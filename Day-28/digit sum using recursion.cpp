//Program to print the sum of digits of a number using recursion
#include <bits/stdc++.h>
using namespace std;

int digitSum(int n)
{
    if(n==0) return 0; 
    return digitSum(n/10) + (n%10); //digitSum(1234) = digitSum(123) + 4 
}
int main()
{
    int n; 
    cin>>n;
    
    cout<<digitSum(n);

  return 0;
}
/*
Input:
1234

Output:
10

Time complexity : O(logn)
*/
