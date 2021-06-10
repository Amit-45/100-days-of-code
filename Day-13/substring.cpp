/*Given a string S and two integers L and R. Print the characters in the range L to R of the string.
NOTE: Assume zero based indexing.

Example 1:

Input: 
S = "cdbkdub"
L = 0 , R = 5
Output: "cdbkdu" 
Explanation: Starting from index 0 ('c')
to index 5 ('u').
Example 2:

Input: 
S = "sdiblcsdbud"
L = 3 , R = 7
Output: "blcsd"
Explanation: Starting from index 3 ('b')
to index 7 ('d').

Your Task:  
You don't need to read input or print anything. Complete the function substring() which takes S, L, R as input parameters and returns the string from the range L to R.


Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(|S|)

Constraints:
1<= |S| <=1000
1 <= L <= 800
1 <= R <= 900

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string substring(string S, int L, int R) {
        return S.substr(L, R-L+1);
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int L, R;
        cin >> L >> R;
        Solution ob;
        cout << ob.substring(S, L, R) << endl;
    }
    return 0;
}

