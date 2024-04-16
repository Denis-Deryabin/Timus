#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int n, b = 0;
	cin >> n;
	for (int i = 0; i <= sqrt(n);i++)
		for (int i1 = 0; i1 <= sqrt(n); i1++)
			for (int i2 = 0; i2 <= sqrt(n); i2++)
				for (int i3 = 0; i3 <= sqrt(n); i3++)
					if (i * i + i1 * i1 + i2 * i2 + i3 * i3 == n)
					{
						if (i == 0) b++;
						if (i1 == 0) b++;
						if (i2 == 0) b++;
						if (i3 == 0) b++;
						cout << 4 - b;
						return 0;
					}

	return 0;
}
