//Program to print the all array elements 
#include<bits/stdc++.h>
using namespace std;

void printAllElementsOfArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    printAllElementsOfArray(arr,size);
}
//Time complexity : O(n)  or Linear Time
