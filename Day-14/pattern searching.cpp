/*
Program to search a specific pattern within a string .
Input : A string in which pattern is to be searched
Output : Indices at which the pateern occurs
*/  

#include<bits/stdc++.h>
using namespace std;

void searchPattern(string text , string pattern)
{
    int pos = text.find(pattern);
    
    while(pos != string::npos)  // npos ~ \0
    {
        cout<<"Found at index : "<<pos<<"\n";
        
        pos=text.find(pattern,pos+1);
    }
   
}

int main() 
{
  string text,pattern; cin>>text>>pattern;
  searchPattern(text,pattern);
}
//Input :  sundaysun sun
//Output : Found at index : 0
//         Found at index : 6
