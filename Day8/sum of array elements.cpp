//Program to print the sum of all array elements
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum;

    return 0;
}
/* 

Input:
4
1 2 3 4 


Output:
10

*/
