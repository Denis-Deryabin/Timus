
#include <iostream>
using namespace std;

int main()
{
	int a,b=0,i;
	cin >> a;
	cin >> b;
	i = a + b - 1;
	b = i - b;
	a = i - a;
	cout << a << endl;
	cout << b;

	return 0;
}
