#include <cmath>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int n,x=1,x1,h=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if ((s[0] == 'A') || (s[0] == 'P') || (s[0] == 'O') || (s[0] == 'R'))
		{
			x1 = 1;
			h = h + abs(x - x1);
			x = x1;
		}
		else
			if ((s[0] == 'B') || (s[0] == 'M') || (s[0] == 'S'))
			{
				x1 = 2;
				h = h + abs(x - x1);
				x = x1;
			}
			else
			{
				x1 = 3;
				h = h + abs(x - x1);
				x = x1;
			}
	}
	cout << h;

	return 0;
}
