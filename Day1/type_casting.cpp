/*
 Task: Create function typecast() which 
 converts the double value to integer and returns an integer

Input:
d = 10.23

Output:
10
*/
#include <iostream>
using namespace std;
void typecast(double d)
{
    //use of static_cast operator for type casting
    int res = static_cast<int>(d);
    cout << res;
}
int main()
{
    double d;
    cin >> d;

    typecast(d);

    return 0;
}
