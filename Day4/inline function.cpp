//To reduce the function call overhead the inline function is used
#include <bits/stdc++.h>
using namespace std;

inline int minOf(int a, int b)
{
    return (a < b) ? a : b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << minOf(a, b);

    return 0;
}
