#include <bits/stdc++.h>
using namespace std;

  priority_queue<int, vector<int>, greater<int> > pq;   

  int arr[10] = {5, 6, 17, 9, 8, 11};
  for (int i = 0; i < 6; i++) 
  {
    pq.push(arr[i]);
  }

  // Heap - By default it is making a MAX HEAP.
  while (!pq.empty())
  {
    cout << pq.top() << " ";
    pq.pop();
  }

  return 0;
}
