/*
 Take number n as an input from user.
 Print whether n is :
   Positive even, Positive odd 
   Negative even, Negative odd
   or Zero   
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n > 0)
    {
        if (n % 2 == 0)
        {
            cout << "Positive even";
        }
        else
        {
            cout << "Positive odd";
        }
    }
    else if (n < 0)
    {
        if (n % 2 == 0)
        {
            cout << "Negative even";
        }
        else
        {
            cout << "Negative odd";
        }
    }
    else
    {
        cout << "Zero";
    }

    return 0;
}
