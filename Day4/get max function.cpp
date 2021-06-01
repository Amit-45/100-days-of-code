//Program to print the greater of two numbers using function
#include <bits/stdc++.h>
using namespace std;
int getmax(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int a, b;
    cin >> a >> b;

    cout << getmax(a, b);
    return 0;
}
