#include <bits/stdc++.h>  
using namespace std;  
class A
 {  
  public :  
        void Afunc()
        {
            cout<<"Function A ";
        }
};  
class B : public A
 {  
  public :  
        void Bfunc()
        {
            cout<<" Function B ";
        }
};
class C : public B
{
    public:
};
int main() {
    C c;
    c.Afunc();
    c.Bfunc();

    return 0;
}
