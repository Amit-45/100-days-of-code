//Program to print the reverse of array.
#include <bits/stdc++.h>
using namespace std;
//print function
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
//Function that reverses the array
int reverseArray(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseArray(arr, 0, n - 1); 
    printArray(arr, n);
}
//Input  : 1 2 3 4 5
//Output : 5 4 3 2 1
//Time complexity : O(n)
