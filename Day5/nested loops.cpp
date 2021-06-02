//Print tables of first n positive integers
//Use of nested loops
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        for (int i = 1; i <= 10; i++)
        {
            cout << num * i << " ";
        }
    }
}
