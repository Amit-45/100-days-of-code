//Given a number x and another number n . Write a program to calculate x raised to power n(using recursion)
#include <bits/stdc++.h>
using namespace std;

int power(int x,int n)
{
    if(n==0) return 1;
    int pow=x*power(x,n-1);
    return pow;
}
int main()
{
    int x,n; 
    cin>>x>>n;
    
    cout<<power(x,n);

  return 0;
}
/*
Input:
2 2

Output:
4

*/
