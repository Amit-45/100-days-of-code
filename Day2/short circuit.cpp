//Example of short circuit in logical operators
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x=8;
    bool res = (x>10)&&(x++);
    cout<<res<<" "<<x;
}

//Output : 0 8
