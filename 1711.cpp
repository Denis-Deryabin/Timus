#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string** com = new string* [n];
	string a, b, c;
	for (int i = 0; i < n; i++)
	{
		com[i] = new string[3];
		cin >> a >> b >> c;
		if (a > b) swap(a, b);
		if (c < b) swap(b, c);
		if (a > b) swap(a, b);
		com[i][0] = a;
		com[i][1] = b;
		com[i][2] = c;
	}
	a = "a";

	string* rez = new string[n];
	int* num = new int[n];
	for (int i = 0; i < n; i++)
		cin >> num[i];

	for (int i = 0; i < n; i++)
	{
		int k = num[i]-1;
		if (a < com[k][0])
		{
			rez[i] = com[k][0];
			a = com[k][0];
		}
		else
			if (a < com[k][1])
			{
				rez[i] = com[k][1];
				a = com[k][1];
			}
			else
				if (a < com[k][2])
				{
					rez[i] = com[k][2];
					a = com[k][2];
				}
				else
				{
					cout << "IMPOSSIBLE";
					return 0;
				}

	}
	for (int i = 0; i < n; i++)
		cout << rez[i] << endl;

}
