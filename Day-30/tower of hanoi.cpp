#include <bits/stdc++.h>
using namespace std;
 
void towerOfHanoi(int n, char from,char to, char aux)
{
    if (n == 1)
    {
        cout << "Move D1 from rod " << from <<" to rod "<<to<<"\n";
        return;
    }
    towerOfHanoi(n - 1, from, aux, to);
    cout << "Move D" << n << " from rod " << from <<" to rod " << to << "\n";
    towerOfHanoi(n - 1, aux, to, from);
}
 
int main()
{
    int n ;
    cin >> n;
    towerOfHanoi(n, 'A', 'C', 'B'); 
    return 0;
}

/*
Input:
3

Output:
Move D1 from rod A to rod C
Move D2 from rod A to rod B
Move D1 from rod C to rod B
Move D3 from rod A to rod C
Move D1 from rod B to rod A
Move D2 from rod B to rod C
Move D1 from rod A to rod C

/*
*/
