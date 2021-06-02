//Function overloading
#include <bits/stdc++.h>
using namespace std;
int getmax(int a, int b)
{

    return (a > b) ? a : b;
}
int getmax(int a, int b, int c)
{
    return getmax((a, b), c);
}
int main()
{
    int a = 10, b = 30, c = 5;
    cout << getmax(a, b) << endl;
    cout << getmax(a, b, c) << endl;
}
