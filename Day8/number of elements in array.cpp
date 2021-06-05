//Program to find the number of elements in an array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,6};
    
    int n=sizeof(arr)/sizeof(arr[0]); //Number of elements
    
    cout<<n<<"\n";

    return 0;
}
//Output: 5
