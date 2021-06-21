//Program to check whether an array is sorted or not (Optimised solution)
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
   for(int i=1;i<n;i++) 
         if(arr[i]<arr[i-1]) 
             return false;

   return true;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<isSorted(arr,n);
}
//Time complexity : O(n)  

/*
Input: 
5
1 2 3 4 5

Output:
1

*/
