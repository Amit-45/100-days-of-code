//Program to find the LCM of two numbers
#include <bits/stdc++.h>
using namespace std;
int lcmOfTwo(int a, int b)
{
    int i;
    int start = max(a, b);
    int end = a * b;

    int ans = start;

    for (i = start; i <= end; i++)
    {
        if ((i % a == 0) && (i % b == 0))
        {
            ans = i;
            break;
        }
    }
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;

    cout << lcmOfTwo(a, b);

    return 0;
}
