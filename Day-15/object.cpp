#include <bits/stdc++.h>
using namespace std;

class MyNewClass {       
  public:            
    int myNumber;       
    string myString;  
};

int main() 
{
  MyNewClass myObj; 
  myObj.myString = "Amit";
  myObj.myNumber = 25;
 

  cout << myObj.myNumber <<" " << myObj.myString; 
  return 0;
}
//Output: 25 Amit
