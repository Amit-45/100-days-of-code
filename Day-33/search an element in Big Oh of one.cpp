/*
You are given an array containing both positive and non positive numbers , elements are in the range 
from -MAX to +MAX .
The task is to search if some number is present in the array or not .
Required time complexity : O(1)
Problem tag : Hashing
*/
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

bool hashTable[MAX+1][2];

bool search(int x)
{
    if(x>=0)
    {
        if(hashTable[x][0] == 1)
        {
            return true;
        }
        else
        {
        return false;
        }
    }
    
    else
    {
        x=abs(x);
        
        if(hashTable[x][1] == 1)
        {
            return true;
        }
        else
        {
        return false;
        }
    }

}

bool insert(int a[], int n){
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0) 
        {
            hashTable[a[i]][0] = 1;
        }
        else
        {
            hashTable[abs(a[i])][1] = 1;
        }
    }
}

int main() 
{
	int a[]={1,2,3,5,-3};
	int n= sizeof(a)/sizeof(a[0]);
	insert(a,n);
	int find = 0;
	if(search(find))
	{
	    cout<<"Element is present";
	}
	else
	{
	    cout<<"Element is not present";
	}
	
	return 0;
}
