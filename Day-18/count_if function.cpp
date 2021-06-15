//count_if() in c++
#include<vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  vector<int>v{1,2,3,4,5};
  int result = count_if(v.begin(),v.end(),
           [](int x) 
           {
             return x<5 ; //count_if() counts all the true conditions
           });
  cout<<result<<endl;
  return 0;
}
//Output: 4
