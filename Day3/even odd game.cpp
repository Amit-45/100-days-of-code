//There are n cups .First cup is picked by you.
//If you pick the last cup you win else opponent wins the game
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the total number of cups : " << endl;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Opponent wins!!" << endl;
    }
    else
    {
        cout << "You win!!" << endl;
    }

    return 0;
}
