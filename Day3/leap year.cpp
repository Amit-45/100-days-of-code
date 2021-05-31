//Program to check whether a year is a leap year or not
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n % 4 == 0 && n % 100 != 0)
        cout << "Leap year";
    else if (n % 400 == 0)
        cout << "Leap year";
    else
        cout << "Not leap year";

    return 0;
}
