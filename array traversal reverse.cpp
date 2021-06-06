/*
You are given an array that contains integers.
You need to print the elements of the array with in reverse order with a space between them.

Example:

Input:
numbers = [54, 43, 2, 1, 5]
Output: 
5 1 2 43 54

Explanation: Just traverse in reverse
and print the numbers.*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //Loop running from last to first
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
