#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[] = {1, 2, 4, 5, 6};
    
    int *ptr = array;//ptr stores the address of the first array element
    
    cout<<ptr<<" "<<*ptr<<endl; //0x7ffd0be68550 1
    
    ptr++;  //As pointer is of integer type , there is an increment of 4 in its address
    
    cout<<ptr<<" "<<*ptr<<endl;   //0x7ffd0be68554 2
    
    ptr--; //As pointer is of integer type , there is an decrement of 4 in its address
    
    cout<<ptr<<" "<<*ptr<<endl; //0x7ffd0be68550 1
    
    ptr=ptr+3;   //shift of 12 bytes
    
    cout<<ptr<<" "<<*ptr<<endl; //0x7ffd0be6855c 5
    
    
 
}

//In pointers we can decrement and increment(both pre and post)
//We can also add and subtract integers from pointers
