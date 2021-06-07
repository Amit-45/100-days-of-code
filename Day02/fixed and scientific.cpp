#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x = 1.23;
    //fixed --> precision of 6 -->if less than 6 trialed by zeroes
    cout << std::fixed;
    cout << x << endl;
    cout << std::setprecision(2);
    cout << x << endl;
   //scientific --> writes the floating point numbers in scientific notations
    cout << std::scientific;
    cout << x;
}
