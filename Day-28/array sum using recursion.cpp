//Program to print the sum of array elements using recursion
#include <bits/stdc++.h>
using namespace std;

int arraySum(int arr[],int n)
{
    if(n<0) return 0; //Base case 
    return arraySum(arr,n-1) + arr[n]; 
}
int main()
{
    int n; 
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<arraySum(arr,n-1);

  return 0;
}
/*
Input:
5
1 2 3 4 5 

Output:
15

Time complexity : O(n)

*/
