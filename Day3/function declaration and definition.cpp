#include <bits/stdc++.h>
using namespace std;

//function declaration
int getmin(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;

    //function call
    cout << getmin(a, b);

    return 0;
}

//function definition
int getmin(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

/*
Function declaration can be done in two ways:

Method 1: Define the function --> Use the function
Method 2: Declare the function --> Use the function -->Define the function

*/
