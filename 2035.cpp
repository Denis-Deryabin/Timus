#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int x,y,c;
	cin >> x >> y >> c;
	if ((x >= c) && (y >= c))
	{
		x = 0;
		cout << x << " " << c;
		return 0;
	}

	if (x + y >= c)
		if (x >= y)
			cout << c - y << " " << y;
		else
			cout << x << " " << c - x;
	else
		cout <<"Impossible";
	

	

	return 0;
}
