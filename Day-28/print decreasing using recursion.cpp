//Program to print numbers from N to 1 in reverse order(using recursion)
#include <bits/stdc++.h>
using namespace std;

void printDecreasing(int n)
{
    if(n<=0) return ;
    cout<<n<<" ";
    printDecreasing(n-1);
}
int main()
{
    int n; 
    cin>>n;
    
    printDecreasing(n);

  return 0;
}
/*
Input:
5

Output:
5 4 3 2 1

Time complexity : O(N)
*/
