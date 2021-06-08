/*
Program: Modification in for each loop using references
Task :Increment each element of the array by 2 and print the array elements
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    for (auto &x : arr)
        x = x + 2;
    for (auto x : arr)
        cout << x << " ";

    return 0;
}
