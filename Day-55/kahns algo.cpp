//Kahn’s Algorithm for Topological Sort
#include <bits/stdc++.h>
using namespace std;

vector <int> topoSort(vector<int>adj[],int n,vector <int> indegree)
{
  queue<int> q;
  vector <int> topo;
  for (int i = 0; i < n; i++)
    if (indegree[i] == 0) q.push(i);

  while(q.size()>0)
  {
    int node = q.front();
    q.pop();
    topo.push_back(node);
    for(auto it:adj[node])
    {
      indegree[it]--;
      if(indegree[it]==0)
      {
        q.push(it);
      }
    }
  }
  return topo;
}

int main(){
  int n,m;
  cin>>n>>m;
  vector <int> adj[n];
  vector <int> indegree(n,0);
  int a,b;
	for(int i = 0; i<m ; i++)
  {
		cin >> a >> b;
		adj[a].push_back(b);
    indegree[b]++;
	}	
  vector <int> res = topoSort(adj,n,indegree);
  for(int i{0};i<res.size();i++){
    cout<<res[i]<<" ";
  }
  return 0;
}
