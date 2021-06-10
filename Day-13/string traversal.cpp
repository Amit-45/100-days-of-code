//Different ways of string traversal 
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s="Amit";
  
  //Method 1:
  for(int i=0;i<s.length();i++) cout<<s[i];
  
  //Method 2:
  for(auto x:s) cout<<x;
  
  //Method 3:
  for(auto iter=s.begin();iter!=s.end();iter++) cout<<(*iter);
    
 }
