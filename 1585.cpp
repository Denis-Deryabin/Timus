#include <cmath>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int n, q=0,w=0,e=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s[0] == 'E') q++;
		if (s[0] == 'M') w++; 
		if (s[0] == 'L') e++;
                cin>>s;
	}
	if ((q > w) && (q > e))  cout << "Emperor Penguin";
	if ((w > q) && (w > e))  cout << "Macaroni Penguin";
	if ((e > q) && (e > w))  cout << "Little Penguin";
	

	return 0;
}
