//Program to print the first non repeating number
#include <bits/stdc++.h>
using namespace std;
  
int firstNonRepeating(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < n; j++)
            if (i != j && arr[i] == arr[j])
                break;
        if (j == n)
            return arr[i];
    }
    
 return -1;
}
  
int main()
{
    int arr[] = {1,1,4,5,6,3,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << firstNonRepeating(arr, n);
    return 0;
}
//Outpur : 4
