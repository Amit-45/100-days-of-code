//Progran to print the Fibonacci Series in C++ without recursion
#include <bits/stdc++.h>
using namespace std;
void fibonacci(int n)
{
    int a = 1, b = 1, c = 0;
    cout << "1 1 ";
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        cout << c << " ";

        a = b;
        b = c;
    }
}
int main()
{
    int n;
    cin >> n;

    fibonacci(n);

    return 0;
}
