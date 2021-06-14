#include <bits/stdc++.h>
using namespace std;
 
class A {
};
 
class B {
};
 
int main()
{
    for (int i = 1; i <= 2; i++) {
        try {
            if (i == 1)
              throw A();
            else if (i == 2)
              throw B();
        }
 
        catch (A a) {
            cout<<"Caught exception of class A\n";
        }
 
        catch (B b) {
            cout<<"Caught exception of class B \n";
        }
    }
}
/*

Caught exception of class A
Caught exception of class B 

*/
