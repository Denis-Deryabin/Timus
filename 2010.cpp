#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int a=0,b=0, x, y, n;
	cin >> n >> x >> y;

	if ((x + 1 > 0) && (x + 1 <= n) && (y + 1 > 0) && (y + 1 <= n)) a++;
	if ((x + 1 > 0) && (x + 1 <= n) && (y - 1 > 0) && (y - 1 <= n)) a++;
	if ((x - 1 > 0) && (x - 1 <= n) && (y + 1 > 0) && (y + 1 <= n)) a++;
	if ((x - 1 > 0) && (x - 1 <= n) && (y - 1 > 0) && (y - 1 <= n)) a++;
	if ((x + 1 > 0) && (x + 1 <= n) && (y > 0) && (y <= n)) a++;
	if ((x - 1 > 0) && (x - 1 <= n) && (y > 0) && (y <= n)) a++;
	if ((x > 0) && (x <= n) && (y + 1 > 0) && (y + 1 <= n)) a++;
	if ((x > 0) && (x <= n) && (y - 1 > 0) && (y - 1 <= n)) a++;
	cout << "King: " << a << endl;
	a = 0;

	if ((x + 2 > 0) && (x + 2 <= n) && (y + 1 > 0) && (y + 1 <= n)) a++;
	if ((y + 2 > 0) && (y + 2 <= n) && (x + 1 > 0) && (x + 1 <= n)) a++;
	if ((y + 2 > 0) && (y + 2 <= n) && (x - 1 > 0) && (x - 1 <= n)) a++;
	if ((y - 2 > 0) && (y - 2 <= n) && (x + 1 > 0) && (x + 1 <= n)) a++;
	if ((y - 2 > 0) && (y - 2 <= n) && (x - 1 > 0) && (x - 1 <= n)) a++;
	if ((x + 2 > 0) && (x + 2 <= n) && (y - 1 > 0) && (y - 1 <= n)) a++;
	if ((x - 2 > 0) && (x - 2 <= n) && (y + 1 > 0) && (y + 1 <= n)) a++;
	if ((x - 2 > 0) && (x - 2 <= n) && (y - 1 > 0) && (y - 1 <= n)) a++;
	cout << "Knight: " << a << endl;
	a = 0;

	if (x + y == n + 1)
		a = n-1;
	else
		if (x + y > n + 1)
			a = n - x + n - y;
		else 
			a = x + y - 2;
	//cout<< a << endl;
	b = a;
	if (x == y)
		a = a + n-1;
	else
		if (x > y)
			a = a + n - x + y - 1;
		else 
			a = a + n - y + x - 1;
	//cout<< a - b << endl;

	cout << "Bishop: " << a << endl;
	b = n - 1 + n - 1;
	cout << "Rook: " << b << endl;
	cout << "Queen: " << a+b;





	return 0;
}
