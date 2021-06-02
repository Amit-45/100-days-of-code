//Prime factorisation(naive method)
//Program to print all the prime factors of a number
#include <bits/stdc++.h>
using namespace std;
int checkPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void primefactorisation(int num)
{
    for (int i = 2; i <= num; i++)

    {

        if (checkPrime(i))
        {

            int x = i;
            while (num % x == 0)
            {
                cout << i << " ";
                //to check whether we need same number again
                x = x * i;
            }
        }
    }
}
int main()
{
    int num;
    cin >> num;
    primefactorisation(num);
    return 0;
}

/*
Input:
50 
Output:
2 5 5 
*/
