//Dutch natinal flag problem (GFG Easy)
//Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
#include<bits/stdc++.h>
using namespace std;
void sort012(int a[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        switch (a[mid])
        {
        case 0:
            swap(a[low++], a[mid++]);
            continue;
        case 1:
            mid++;
            continue;
        case 2:
            swap(a[mid], a[high--]);
            continue;
        }
    }
}
int main() {
{
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}
//Time complexity : O(n)

/*
Input:
5
1 0 0 2 1 

Output:
0 0 1 1 2 

/*
*/
