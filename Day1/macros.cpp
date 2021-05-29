/*
You are given two inputs: a(integer),and b(integer). You need to print a * b .

Input Format:
First line of input contains number of testcases T. For each testcase, there will be one line of input containing a and b.

Output Format:
For each testcase, print a*b.

Input:
2
5 6
7 11

Output:
30
77
 */
#include <iostream>
#define MULTI(a, b) (a * b) //The multiplication macro function.
using namespace std;

void macros(int a, int b);

void macros(int a, int b)
{

    cout << MULTI(a, b) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        macros(a, b);
    }
    return 0;
}
