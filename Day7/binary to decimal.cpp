//Program to convert binary to decimal
#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n)
{
    int base = 1;
    int var = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        var = var + (last_digit * base);
        n = n / 10;
        base = base * 2;
    }
    return var;
}
int main()
{
    int n;
    cin >> n;

    cout << binaryToDecimal(n);
    return 0;
}
