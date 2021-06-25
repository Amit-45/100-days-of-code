//Program to print numbers from 1 to N (using recursion)
#include <bits/stdc++.h>
using namespace std;

void printIncreasing(int n)
{
    if(n<=0) return ;
    printIncreasing(n-1);
    cout<<n<<" ";
}
int main()
{
    int n; 
    cin>>n;
    
    printIncreasing(n);

  return 0;
}
/*
Input:
5

Output:
1 2 3 4 5

Time complexity : O(N)
*/
