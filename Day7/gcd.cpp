//Program to find the GCD of two numbers
#include <bits/stdc++.h>
using namespace std;


int gcd(int a, int b)
{
    int ans = 1; //Common GCD of all numbers
    int res = min(a, b);
    for (int i = 1; i <= res; i++)
    {
        if ((a % i == 0) and (b % i == 0))
            ans = i;
    }
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;

    int res;

    cout << gcd(a, b);

    return 0;
}
