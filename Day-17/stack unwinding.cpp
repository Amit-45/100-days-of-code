//exception handling involves Stack Unwinding if exception is not handled in same function (where it is thrown).
#include <bits/stdc++.h>
using namespace std;
  
void f1() throw (int) {
  cout<<"f1 Begins\n";
  throw 100;
  cout<<" f1 Ends\n"; 
}
  
void f2() throw (int) {
  cout<<"f2 Begins\n";
  f1();
  cout<<"f2 Ends\n";
}
   
void f3() {
  cout<<"f3 Begins\n";
  
  cout<<"f3 Ends\n";
}
  

int main() {
  try {
    f2();
  }
  catch(int i) {
   cout<<"Caught Exception\n";
  }
  cout<<"Bye!!";
} 
/*

f2 Begins
f1 Begins
Caught Exception
Bye!!

*/
