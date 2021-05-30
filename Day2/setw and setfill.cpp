//Pattern printing program using setw and setfill
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        cout << std::left << std::setfill(' ') << std::setw(n);
        cout << std::string(i, '*')<<"\n";
      
    }
}
/* 
Output:
*   
**  
*** 
****
*/
