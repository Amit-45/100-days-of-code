/*Given a number n , Print the sum of first n natural numbers */
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int sum = n * (n + 1) / 2;
    cout << sum << endl;

    return 0;
}
