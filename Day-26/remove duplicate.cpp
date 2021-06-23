//Given a sorted array, the task is to remove the duplicate elements from the array.
#include<bits/stdc++.h>
using namespace std;
void removeDuplicates(int a[],int n)
{
    int res = 1;
    for(int i=1; i<n; i++) 
     {
       if(a[i]!=a[res-1])
       {
           a[res] = a[i];
           res++;
       }     
     } 
     for(int i=0; i<res; i++) 
       cout<<a[i]<<" ";
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

        removeDuplicates(a, n);
       
return 0;
}
/*
Input:
5
1 2 2 3 3  

Output:
1 2 3 
*/
