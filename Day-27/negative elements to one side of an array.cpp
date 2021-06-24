//Program to move all the negative elements to one side of an array .
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

    int t = 0;
    int i = -1;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > t)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
/*

Input:
5
-1 2 -3 2 6

Output:
2 2 6 -1 -3 

*/
