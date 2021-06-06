/*
Given an array A[] of N elements. 
The task is to count number of even and odd elements in the array.

Example:

Input:
N = 5
A[] = 1 2 3 4 5
Output:
3 2
Explanation:
There are 3 odd elements (1, 3, 5)
and 2 even elements (2 and 4).
Your Task:
Your task is to complete the function countOddEven()
which should print number of odd and number of even elements in a single line seperated by space.

Constraints:
1 <= N <= 106
1 <= Ai <= 106
*/
#include<bits/stdc++.h>
using namespace std;
void countOddEven(int arr[], int sizeof_array)
{
        
        int countEven=0;
        int countOdd=0;
        
        for(int i=0;i<sizeof_array;i++)
        {
            if(arr[i]%2==0)
              countEven++;
            else
              countOdd++;
        }
        cout<<countOdd<<" "<<countEven<<endl;
		
}
int main()
{
	int sizeof_array;
	cin>>sizeof_array;
	
	int arr[sizeof_array];
	
	for(int i=0;i<sizeof_array
	;i++) cin>>arr[i];
	
	countOddEven(arr,sizeof_array);
       
        
}
