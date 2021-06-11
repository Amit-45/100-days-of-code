/*
Given a structure area with side, le and wd as data members.
Your task is to assign values to data members and find area of square with side side and area of rectangle with length le and width wd. 
You will be given a function find_areas(side, le, wd) which side, le and wd as an argument.

Example 1:

Input:
side = 25
le = 40
wd = 60
Output: 
625 2400
Explanation:
Area of square with given side 25 is:
625(side*side) and area of rectangle is:
2400(len*wid).

*/

#include <bits/stdc++.h>
using namespace std;

struct area
{
    int sd;
    int len, wid;
    
};





void find_area(int side, int le, int wd)
{

    int s=side;
    int l=le,w=wd;
   
    cout<<s*s<<" ";
    cout<<l*w;

   
}

// { Driver Code Starts.

int main() {
	
	int t;
    cin>>t;
	
	while(t--)
	{
	    int side, length, wide;
	    cin>>side>>length>>wide;
	    
	  
	    
	    find_area(side, length, wide);
	    cout<<endl;
	    
	}
	return 0;
}  
