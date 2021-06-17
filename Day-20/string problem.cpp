//String problem solution(hacker earth )
//Sample input:-		   3						                Sample output:-
// 						         omahgoTuRuLob							  ugly string
// 						         OmAhgotUrulobEI							lovely string
//					           aeKORONAoiBATCHu						  lovely string
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int a = 0, b = 0, c = 0, d = 0, e = 0, j = 0;
		for (int i = 0; i <= s.length(); i++)
		{
			char ch = (char)tolower(s[i]);
			if (ch == 'a')
				a = a + 1;
			if (ch == 'e')
				b = b + 1;
			if (ch == 'i')
				c = c + 1;
			if (ch == 'o')
				d = d + 1;
			if (ch == 'u')
				e = e + 1;
		}

		if (a >= 1 && b >= 1 && c >= 1 && d >= 1 && e >= 1)
		{
			cout << "lovely string" << endl;
		}
		else
		{
			cout << "ugly string" << endl;
		}
	}
}
