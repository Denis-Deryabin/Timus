#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int n,q=0;
	cin >> n;
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n];
		for (int k = 0; k < n; k++)
			cin >> a[i][k];
	}

	
	for (int i = 0; i < n; i++)
	{
		q = 0;
		for (int k = i; k >= 0; k--)
		{
			if((q>=0)&&(q<n))
			cout << a[k][q] << " ";
			q++;
		}
	}
	int i;
	for (int k = 1; k <n; k++)
	{
		i = n - 1;
		for (int q=k; q<n ; q++)
		{
			if ((q >= 0) && (q < n))
			cout << a[i][q] << " ";
			i--;
		}
	}


	return 0;
}
