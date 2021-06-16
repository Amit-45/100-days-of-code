//Program to print the all ordered pairs of array elements 
#include<bits/stdc++.h>
using namespace std;

void printAllPossibleOrderedPairs(int arr[], int size)
{
    for (int i = 0; i < size; i++)  
    {
        for (int j = 0; j < size; j++)  
        {
            cout<<arr[i]<<"="<<arr[j]<<" ";
        }
     }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    printAllPossibleOrderedPairs(arr,size);
}
//Time complexity : O(n^2)  or Quadratic Time
