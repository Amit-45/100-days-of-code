//find_if() in c++
#include<vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  vector<int>v{10,20,3,40,50};
  auto result = find_if(v.begin(),v.end(),
           [](int x) 
           {
             return x<10 ; //find_if() returns the address of the first element that satifies the condition
           });
  cout<<*result<<endl; //value at the address
  return 0;
}
//Output: 3
