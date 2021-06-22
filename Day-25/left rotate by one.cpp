//Program to cyclically left rotate an array by one
#include<bits/stdc++.h>
using namespace std;
void printArray(int a[],int n)
{
    for(int i=0; i<n; i++) 
     cout<<a[i]<<" "; 
}
void leftRotateByOne(int a[], int n)
{
   
   int temp = a[0];
   
   for(int i=0; i<n; i++) 
      a[i-1]=a[i];
      
   a[n-1]=temp;
  
}
int main() 
{
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }

        leftRotateByOne(a, n);
        printArray(a,n);


    return 0;
}
/*
Input:
5
1 2 3 4 5 

Output:
2 3 4 5 1 
*/
