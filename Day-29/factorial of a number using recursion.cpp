//Program to print the factorial of a number(using recursion)
#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==0 || n==1 ) return 1;
    int fact=n*factorial(n-1);
    return fact;
}
int main()
{
    int n; 
    cin>>n;
    
    cout<<factorial(n);

  return 0;
}
/*
Input:
5

Output:
120

*/
