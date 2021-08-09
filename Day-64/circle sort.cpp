// C++ program to implement Circle  Sort

#include<bits/stdc++.h> 
using namespace std; 
bool rec_sort(int arr[], int beg, int end) 
{ 
    bool isSwap = false; 
    if (beg == end) 
        return false; 
    int begA, endA;
    for(begA = beg, endA = end; begA < endA; begA++, endA--) 
    { 

        if (arr[begA] > arr[endA]) 
        { 
            swap(arr[begA], arr[endA]); 
            isSwap = true; 
        } 
        
    } 
  
    if (begA == endA) 
        if (arr[begA] > arr[endA + 1]) 
        { 
            swap(arr[beg], arr[endA+1]); 
            isSwap = true; 
        } 
  
    int mid = (end - beg) / 2; 
    bool isSwapA = rec_sort(arr, beg, beg+mid); 
    bool isSwapB = rec_sort(arr, beg+mid+1, end); 
  
    return (isSwap || isSwapA || isSwapB); 
} 

void circle_sort(int arr[], int n) 
{  
    while (rec_sort(arr, 0, n-1)) 
    {    
        
    } 
} 
  

int main()
{
    int n;
    cout<<"\nHow many numbers do you want to sort? ";
    cin>>n;
    int arr[n];

    if (n <= 0)
    {
        cout<<"The array is Empty!!!";
        return 0;
    }
 
    cout<<"Enter the numbers: ";
    for (int i = 0; i < n; i++)
        cin>>arr[i];
  
   
    circle_sort(arr,n);  

    cout<<"The numbers in sorted order is: ";
   
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}


