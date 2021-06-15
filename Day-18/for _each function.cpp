#include<vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  vector<int>v{1,2,3,4,5}; 
  for_each(v.begin(),v.end(),
           [](int &x) //x passed as reference 
           {
             x = x*2 ;
           });
  for_each(v.begin(),v.end(),
           [](int x) 
           {
            cout<<x<<" ";
           });
  return 0;
}
//2 4 6 8 10 
