// Decimal to Binary Conversion

#include<bits/stdc++.h>
using namespace std;

void decimalToBinary(int n)
{
   string s="";
   while(n>0)
   {
       int t = n % 2;
       s = s + to_string(t);
       n=n/2;
   }
   reverse(s.begin(),s.end());
   cout<<s;
    
}

int main() 
{
  int n; cin>>n;
  decimalToBinary(n);
}
