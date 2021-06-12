//Default constructor
#include <bits/stdc++.h>
using namespace std;
 
class constructor
{
public:
    int a, b;
    constructor()
    {
        a = 10;
        b = 20;
    }
};
 
int main()
{
    constructor c;
    cout << "a = " << c.a << endl<< "b = " << c.b;
    return 1;
}
