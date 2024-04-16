#include <iostream>
using namespace std;

int main()
{
	int a,b=0,i;
	cin >> a;
	if (a > 0)
	{
		for (i = 0; i < a + 1; i++)
			b = b + i;
		cout << b;
	}
	else
	{
		a = a * (-1);
		for (i = 0; i < a + 1; i++)
			b = b + i;
		b = b - 1;
		b = b * (-1);
		cout << b;
	}

	
	
	return 0;
}
