//Given an array of elements. Your task is to find the second maximum element in the array and return it's index.
#include<bits/stdc++.h>
using namespace std;
int secondLargest(int a[], int n)
{
   
    int result=-1,largest=0;
    
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[largest])
        {
            result= largest;
            largest = i;
        
        } 
        else if(a[i]!=a[largest])
        {
            if(result==-1 || a[i]>a[result])
             result = i;
        }
            
    }
    
    
 return result;   
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

        cout<<secondLargest(a, n);


    return 0;
}
/*
Input:
5
1 2 3 4 5 
Output:
3
*/
