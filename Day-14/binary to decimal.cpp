//Binary to decimal conversion (input as a string)

#include<bits/stdc++.h>
using namespace std;

void binaryToDecimal(string s)
{
    int base =1;
    int result=0;
    
    for(int i=s.length()-1;i>=0;i--) 
    {
        result =  result + ((int)(s[i]-'0')) *  base;
        base=base*2;
    }
    cout<<result;
    
}

int main() 
{
  string s ; cin>>s;
  binaryToDecimal(s);
}

#include<bits/stdc++.h>
using namespace std;

void binaryToDecimal(string s)
{
    int base =1;
    int result=0;
    
    for(int i=s.length()-1;i>=0;i--) 
    {
        result =  result + ((int)(s[i]-'0')) *  base;
        base=base*2;
    }
    cout<<result;
    
}

int main() 
{
  string s ; cin>>s;
  binaryToDecimal(s);
}
