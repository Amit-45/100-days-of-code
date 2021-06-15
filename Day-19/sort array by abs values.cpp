//Program to sort arrays using absolute values 
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int arr[]={5,4,9,7,2};
  int n = sizeof(arr)/sizeof(arr[0]);
  auto mycmp = [](int a , int b) //lambda expression
  {
      return abs(a)<abs(b);
  };
  
  sort(arr,arr+n,mycmp);
  for(auto x : arr) cout<<x<<" ";
  return 0;
}
//Output : 2 4 5 7 9
