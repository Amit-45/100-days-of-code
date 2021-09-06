#include <bits/stdc++.h>
using namespace std;
struct Item{
    int value;
    int weight;
};
bool cnp(struct Item a,struct Item b)
{
    double x=(double)a.value/(double)a.weight;
    double y=(double)b.value/(double)b.weight;
    return x>y;
}
class Solution
{
    public:
    double fractionalKnapsack(int W, Item arr[], int n)
    {
    sort(arr,arr+n,cnp);
   int i=0;
   double value=0;
 
   while(W!=0 && i<n)
   {
       if(W>=arr[i].weight)
       {
           W-=arr[i].weight;
           value+=arr[i].value;
       }
       else
       {
           double x=(double)arr[i].value/(double)arr[i].weight;
           x=x*W;
           W=0;
           value+=x;
       }
       i++;
   }
    return value;
    }
        
};
int main()
{
	int t;
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--)
  {

		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
} 
