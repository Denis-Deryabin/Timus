#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	//Р·Р°РІРѕРґРёС‚ РґР°РЅРЅС‹Рµ
	string nm, s;
	int a;
	string dev[6];
	int st[6];
	for (int i = 0; i < 6; i++)
	{
		cin >> nm >> s >> a;
		dev[i] = s;
		st[i] = a;
	}

	int mx = 0, ii,b=0,jj,ii2,jj2=0,jj22=0;
	for (int i = 0; i < 5; i++)
	{
		int count = 1;
		for (int j = i + 1; j < 6; j++)
		{
			if (dev[i] == dev[j])
			{
				count++;
				jj2 = j;
			}
		}
		if (count == mx)
		{
			ii2 = i;
			jj22 = jj2;
			b++;
		}
		if (count > mx)
		{
			ii = i;
			jj = jj2;
			mx = count;
			b = 0;
		}
		
	}
	jj2 = jj22;

	if ((mx != 1) && (b == 0))
	{
		cout << dev[ii];
		return 0;
	}
	if ((mx == 1)||(b==2)||((mx==3)&&(b==1)))
	{
		int mn = 1000001, h;
		for (int i = 0; i < 6; i++)
		{
			if (st[i] < mn)
			{
				mn = st[i];
				h = i;
			}
		}
		cout << dev[h];
	}	
	else
	{
		if (min(st[ii], st[jj]) < min(st[ii2], st[jj2]))
			cout << dev[ii];
		else
			cout << dev[ii2];
	}
	
}
