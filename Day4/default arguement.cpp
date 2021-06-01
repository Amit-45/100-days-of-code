//Default argument in functions
#include <bits/stdc++.h>
using namespace std;
void getdetails(int roll, string name = "NA", string address = "NA")
{
    cout << "Name : " << name << endl;
    cout << "Roll : " << roll << endl;
    cout << "Address : " << address << endl;
}
int main()
{
    int name, roll;

    getdetails(102);
}
//All default arguments must appear at the end
//Default argument values can be provided either in the declaration or in definition
