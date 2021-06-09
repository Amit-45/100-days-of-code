#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[]={1,2,3,4,5};
  
  int *ptr1=arr;
  cout<<ptr1<<" "<<*ptr1<<endl;  //0x7ffdc0560f90 1
  
  int *ptr2=ptr1+3;
  cout<<ptr2<<" "<<*ptr2<<endl;  //0x7ffdc0560f9c 4
  
  cout<<ptr2-ptr1<<endl;   //3 
 
}

//Subtraction can only be done with similar type of pointers
//Gives the difference of objects rather than giving the difference of bytes 


