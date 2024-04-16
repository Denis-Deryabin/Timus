#include <iostream>
#include <string>
using namespace std;


int main()
{
	int n[50], a, i,c=0;
	string N,k;
	cin >> N;
	a=N.length();
	for (i = 0; i < a; i++)
	{
		k = N[i];
		n[i] = stoi(k);
	
	}
	for (i = 0; i < a; i++)
	{
		c = c * 10 + n[i];
		c = c % 7;
	}
	cout << c;
}
