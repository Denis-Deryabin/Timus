#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int n, i = 1,b=0;
	cin >> n;
	for (i; i <= n; i++)
		b = b + i;
	if (b % 2 == 0)
		cout << "black";
	else cout << "grimy";


	
	return 0;
}
