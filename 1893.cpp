#include <string>
#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;
	if ((stoi(s) > 0) && (stoi(s) < 3))
		if ((s[1] == 'A') || (s[1] == 'D'))
			cout << "window";
		else cout << "aisle";

	else
		if ((stoi(s) > 2) && (stoi(s) < 10))
			if ((s[1] == 'A') || (s[1] == 'F'))
				cout << "window";
			else cout << "aisle";

		else
			if(stoi(s)<21)
				if ((s[2] == 'A') || (s[2] == 'F'))
					cout << "window";
				else cout << "aisle";
			else
			{
				if ((s[2] == 'A') || (s[2] == 'K'))
				{
					cout << "window";
					return 0;
				}
				if ((s[2] == 'C') || (s[2] == 'D') || (s[2] == 'G') || (s[2] == 'H'))
					cout << "aisle";
				else cout << "neither";
			}

		
	
	return 0;
}
