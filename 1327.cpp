#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int a, b,c;
	cin >> a >> b;
	c = (b - a+1) / 2;
	if ((b % 2 != 0) && (a % 2 != 0))
		c++;
	cout << c;
	return 0;
}
