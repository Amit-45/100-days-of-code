//Program to create multidimentional array using double pointers and then printing it.
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m=3,n=3;
  
  //Creating m*n array  
  int **arr;   
  arr=new int *[m];
  for(int i=0;i<m;i++)
    arr[i]=new int[n];
  
  
  for(int i=0;i<m;i++) 
    for(int j=0;j<n;j++)
    {
      arr[i][j]=5;
       cout<<arr[i][j]<<" "; //Printing array
    } 
}
//These arrays are allocated in heap 
