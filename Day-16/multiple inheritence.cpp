#include <bits/stdc++.h>  
using namespace std;  
class A
 {  
  public :  
        void Afunc()
        {
            cout<<" Function A ";
        }
};  
class B
 {  
  public :  
        void Bfunc()
        {
            cout<<" Function B ";
        }
};
class C : public A,public B
{
    public:
};
int main() {
    C c;
    c.Afunc();
    c.Bfunc();

    return 0;
}
//Output: Function A  Function B 
