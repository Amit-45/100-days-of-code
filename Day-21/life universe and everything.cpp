//rewrite small numbers from input to output. Stop processing input after reading in the number 42.
//All numbers at input are integers of one or two digits.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    while (true)
    {
        cin >> t;
        if (t == 42)
        {
            break;
        }
        cout << t << "\n";
    }
}
