/*
1. You are given a number x.
2. You are given another number n.
3. You are required to calculate x raised to the power n. Don't change the signature of power function.

Note: This function expects call function to be only log(n) high.
*/
#include <bits/stdc++.h>
using namespace std;

int powerLogarithmic(int x,int n)
{
    if(n==0) return 1;
    int pow=powerLogarithmic(x,n/2)*powerLogarithmic(x,n/2); // x^n = (x^n/2) * (x^n/2) ---> for even
    if(n%2==1) pow=pow*x;// x^n = (x^n/2) * (x^n/2) *x --->for odd
    return pow;
}
int main()
{
    int x,n; 
    cin>>x>>n;
    
    cout<<powerLogarithmic(x,n);

  return 0;
}
/*
Input:
2 3

Output:
8

*/
