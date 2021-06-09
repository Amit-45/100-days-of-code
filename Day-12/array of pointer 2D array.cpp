//Program to create multidimensional array using array of pointer method and then printing it.
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m=3,n=2;
  //Creating m*n array  
   int *arr[m];  
  for(int i=0;i<m;i++)
    arr[i]=new int[n];
  
  
  for(int i=0;i<m;i++) 
    for(int j=0;j<n;j++)
    {
      arr[i][j]=5;
       cout<<arr[i][j]<<" "; //Printing array
    } 
}
//These arrays are allocated in stack
