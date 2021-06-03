//Print all the numbers smaller than or equal to n that are not multiple of a
//Input:10 3
//Output:1 2 4 5 7 8 10
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    cin >> a;

    for (int i = 0; i <= n; i++)
    {
        if (i % a == 0)
            continue;

        cout << i << " ";
    }
}
