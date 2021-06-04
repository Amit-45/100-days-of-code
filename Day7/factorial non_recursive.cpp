//Program to find the factorial of a number (non recursive approach)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int store = 1;

    while (n > 0)
    {
        store = n * store;
        n--;
    }

    cout << store;

    return 0;
}
