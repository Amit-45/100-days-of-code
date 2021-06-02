//Program to print the first digit of the number
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    //Division done till n is greater than 10
    while (n > 10)
    {
        n = n / 10;
    }
    cout << n;

    return 0;
}
