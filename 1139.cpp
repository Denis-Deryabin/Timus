#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a=1, b,v, n, m;
	cin >> n >> m;
	if (m > n) swap(n, m);
	n = n - 1;
	m = m - 1;
	b = n;
	v = m;
	while (a > 0)
	{
		a = n % m;
		n = m;
		m = a;
	}
	if (n == 1)
		cout << b + v - 1;
	else
		cout << v+b-n;
		
	return 0;
}
