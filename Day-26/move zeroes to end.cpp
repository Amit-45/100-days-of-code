//Given an array of random numbers, Push all the zero’s of a given array to the end of the array. 
#include<bits/stdc++.h>
using namespace std;
void moveZeroesToEnd(int a[],int n)
{
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i]!=0)
            {
                int temp = a[i];
                a[i] = a[count];
                a[count] = temp;
                count++;
            }
        }
        for(int i = 0; i < n; i++)
        {
           cout<<a[i]<<" ";
        }
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

        moveZeroesToEnd(a, n);
       
return 0;
}
/*
Input:
5
1 0 0 0 1

Output:
1 1 0 0 0 

*/
