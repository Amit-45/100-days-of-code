//Program to print the next prime number
#include <bits/stdc++.h>
using namespace std;
int nextPrime(int n)
{
    //Checking next number
    n++;
    while (1)
    {
        int i;
        //Check prime
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
                break;
        }
        if (i == n)
            return n;
        n++;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << nextPrime(n);
    return 0;
}
