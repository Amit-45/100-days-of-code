//Program to find the minimum and maximum of an array
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

    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        //for minimum
        if (min > arr[i])
            min = arr[i];
       //for maximum
        if (max < arr[i])
            max = arr[i];
    }
    cout << min << " " << max;
}
/*
Input:
5
1 2 5 4 3

Output:
1 5

*/
