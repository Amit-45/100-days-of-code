#include <bits/stdc++.h>
using namespace std;

typedef long long lli;

#define pb push_back

vector < lli > height;
vector < int > s;
lli Histogram(vector<lli> &height)
{
    s.clear();
    height.push_back(0);
  
    lli sum = 0;
    int f = 0;
    while(f < height.size())
    {
        if(s.empty() || height[f] > height[s.back()])
        {
            s.push_back(f);
            f++;
        }
        else{
            int t = s.back();
            s.pop_back();
            sum = max(sum, height[t] * (s.empty() ? f : f - s.back() - 1));  }}
    return sum;   }
int main(void)
{
    int a,b,c,base=0;

    int n;
    while( scanf("%d",&n)==1 )
    {
        height.assign(n, 0);
        for(a=0; a<n;a++) scanf("%lld",&height[a]);
        printf("%lld\n",Histogram(height));
    }
    return 0;
}


/*                                       
    Input:  5                                            
            1 2 3 4 5                                          
    Output: 9                                           
  
*/
