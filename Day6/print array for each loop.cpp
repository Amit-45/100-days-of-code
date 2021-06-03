//Program to print the elements of an array using for each loop
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3] = {1, 2, 3};

    //For each loop
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}
//Output : 1 2 3 
