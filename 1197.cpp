#include <string>
#include <iostream>
using namespace std;

int main()
{
	int n, i, x, y;
	string s,f;
	cin >> n;
	for (i = 0;i<n;i++)
	{
		int q = 0;
		cin >> s;
		x = s[0] - 'a' + 1;
		y = s[1] - '0';
		if ((x + 2 > 0) && (x + 2 < 9) && (y + 1 > 0) && (y + 1 < 9)) q++;
		if ((y + 2 > 0) && (y + 2 < 9) && (x + 1 > 0) && (x + 1 < 9)) q++;
		if ((y + 2 > 0) && (y + 2 < 9) && (x - 1 > 0) && (x - 1 < 9)) q++;
		if ((y - 2 > 0) && (y - 2 < 9) && (x + 1 > 0) && (x + 1 < 9)) q++;
		if ((y - 2 > 0) && (y - 2 < 9) && (x - 1 > 0) && (x - 1 < 9)) q++;
		if ((x + 2 > 0) && (x + 2 < 9) && (y - 1 > 0) && (y - 1 < 9)) q++;
		if ((x - 2 > 0) && (x - 2 < 9) && (y + 1 > 0) && (y + 1 < 9)) q++;
		if ((x - 2 > 0) && (x - 2 < 9) && (y - 1 > 0) && (y - 1 < 9)) q++;
		cout << q << endl;
	}
	return 0;
	}
