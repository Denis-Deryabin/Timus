#include<iostream>
using namespace std;

int main() {
	unsigned long long n, a, b, c, s;
	int i;
	unsigned long long  x[100001];
	memset(x, 0, sizeof(x));
	cin >> n;
	for (i = 1; i <= n + 1; i++)
	{
		cin >> a >> b >> c;
		x[a] = x[a] + c;
		x[b + 1] = x[b + 1] - c;
	}; s = 0;
	for (i = 1; i <= n; i++)
	{
		s = s + x[i];
		if (i == n) cout << s << endl; else
			cout << s << " ";
	}
};
