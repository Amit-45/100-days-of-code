#include <bits/stdc++.h>
using namespace std;
int main()
{

    //conversion to hexadecimal
    int a = 26;
    cout << std::hex;
    cout << a << endl;

    //use of std::showbase
    cout << std::showbase;
    cout << a << endl;

    //use of upper case
    cout << std::uppercase;
    cout << a << endl;

    return 0;
}
/*

 std::dec-->converts to decimal
 std::oct-->converts to octal
 std::showbase-->prints with prefixes(for hexadecimal and octal values)
 std::showpos-->displays a positive sign in front of the numbers
 std::uppercase-->converts to upper case
 

*/
