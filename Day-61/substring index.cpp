#include<bits/stdc++.h>
using namespace std;
int isSubstring(string s1, string s2) 
{    int temp,j;
     for(int i=0;s1[i]!='\0';i++)
    {
        j=0;
        if(s1[i]==s2[j])
        {
            temp=i+1;
            while(s1[i]==s2[j])
            {
                i++;
                j++;
            }
            if(s2[j]=='\0')
            {
                return temp-1;
            }
            else
            {
                i=temp;
                temp=0;
            }
        }
    }
    if(temp==0)
        return -1;
} 

int main(int argc, char const *argv[])
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int res = isSubstring(s1,s2);
    if(res==-1)
        cout<<res;
    else 
        cout<<"Found at index: "<<res;
    return 0;
}
