#include <iostream>
using namespace std;

bool del(int y)
{
	int sq = sqrt(y);
	for (int k = 3; k <= sq; k++)
		if (y % k == 0)
			return false;
	return true;

}
int prosto(int x)
{
	for (int j = x+2; j < 163847; j += 2)
	{
		if (del(j))
			return j;
	}
}


int main()
{
	int a[15001];
	a[0] = 2;
	a[1] = 3;
	for (int i = 2; i < 15001; i++)
	{
		a[i] = prosto(a[i - 1]);
	}
	
	int n,k;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		cout << a[k - 1] << endl;
	}
	return 0;
}
