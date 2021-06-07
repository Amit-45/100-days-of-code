/*

1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are required to find the span of input. Span is defined as difference of maximum value and minimum value.
Input Format:
A number n
n1
n2
.. n number of elements
Output Format:
A number representing max - min 
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    
    int min=INT_MAX;
    int max=INT_MIN;
    
  
   for(int i=0;i<n;i++)
   {
       if(arr[i]>max) max=arr[i];
       if(arr[i]<min) min=arr[i];
   }
   cout<<max-min<<endl;
}
