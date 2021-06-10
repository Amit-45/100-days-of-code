//Check whether a given string is palindrome or not
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
   
   int start=0;
   int end=s.length()-1;
   
while(start<=end)
   if(s[start]!=s[end])
   {
       cout<<"No"<<endl;
       return 0;
   }
   else
   {
       start++;
       end--;
   }
   cout<<"Yes"<<endl;
   
   return 0;
   
}

//Input:malayalam
//Output:Yes
