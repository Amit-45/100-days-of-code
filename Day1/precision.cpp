/*
 You are given two floating numbers a and b. 
 You need to output a/b and decimal precision of a/b 
 upto 3 places after the decimal point.

 Input:
    a = 5.43
    b = 2.653
Output:
    2.04674
    2.047
 */

#include <iostream> //std::cout, std::fixed
#include <iomanip>  // std::setprecision

using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;

    cout << a / b << endl;
    cout << fixed << setprecision(3) << a / b << endl;

    return 0;
}
