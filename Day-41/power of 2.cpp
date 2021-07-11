#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    /* n must be greater than 0*/
    if(n<=0)
    {
        cout<<"Number is not a power of 2";
    }
    else
    {
        if(n&(n-1)==0)
        {
            cout<<"Number is a power of 2";
        }
        else
        {
            cout<<"Number is not a power of 2";
        }
    }
}
