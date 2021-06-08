//Write a program to print a number which is entered from keyboard using pointer.
#include<iostream>
using namespace std;

int main()
{
    int x, *y;
    cout << "Enter a number\n";
    cin >> x;
    y = &x;
    cout << "The value of the address of pointer of "<< x << " is "<< &y<<"\n";
    return 0;
}
