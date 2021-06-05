/*
Problem - Check whether	m is present in an array of size n or not.	
Input	-n,m	(Size of array,number to be searched )
Output->	true/false
[Hint:-Create a dynamic array]	

*/
#include <bits/stdc++.h>
using namespace std;
bool checkElement(int arr[],int n,int m)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if (arr[i]==m)
        {
            flag=1;
        }
    }
    return flag;
}
int main()
{
    int n,m;
    cin >> n>>m;
    
    int arr[n]; //dynamic array
    
    for(int i=0;i<n;i++) cin>>arr[i];   
    
    cout<<std::boolalpha<<checkElement(arr,n,m);
     
    return 0;
}
/* 

Input:
3 2
1 2 2 4

Output:
true

*/
