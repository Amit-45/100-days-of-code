//Handling exception using try catch
#include <bits/stdc++.h>  
using namespace std;  

int main()
{
  int x,y;
  cin>>x>>y;
  
  try
  {
    if(y==0) throw 0;
    
    cout<<"Result is : "<<x/y<<endl;
  }
  
  catch(int x)
  {
      cout<<"Divisor is 0"<<endl;
  }
  
}
//Input : 10 0
//Output : Divisor is 0
