#include <iostream>
#include <string>
using namespace std;



int main()
{
	string a,c,q;
	c = "abcdefghijklmnopqrstuvwxyz";
	int n,r=0,m=-1;
	cin >> a;
	n=a.length();
	for (int i = 0; i < 26; i++)
	{
		r = 0;
		for (int j = 0; j < n; j++)
			if (a[j] == c[i])
				r++;
		
		if (r > m)
		{
			m = r;
			q = c[i];
		}
	}
	cout << q;
	return 0;
}
