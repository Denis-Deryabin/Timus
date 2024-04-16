#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	string s,s1="", s2="",s3="";
	int n,dl;
	cin >> s;
	n = s.length();
	if (n == 1) {
		cout << s << endl;
		return 0;
	}
	for (int i = n; i >= 1; i--)
	{
		dl = i / 2;
		if(i%2==0)
			for (int j = 0; j < n-dl; j++)
			{
				for (int h = j; h < dl + j; h++)
					s1 += s[h];
				for (int h = j + dl; h < dl + j + dl; h++)
					s2 += s[h];

				reverse(s2.begin(), s2.end());
				if (s1 == s2)
				{
					reverse(s2.begin(), s2.end());
					cout << s1 << s2;
					return 0;
				}
				else
				{

					s1 = "";
					s2 = "";
				}
			}
		else
			for (int j = 0; j < n - dl-1; j++)
			{
				for (int h = j; h < dl + j; h++)
					s1 += s[h];
				for (int h = j + dl+1; h < dl + j + dl+1; h++)
					s2 += s[h];
				s3 += s[j + dl];

				reverse(s2.begin(), s2.end());
				if (s1 == s2)
				{
					reverse(s2.begin(), s2.end());
					cout << s1<<s3 << s2;
					return 0;
				}
				else
				{

					s1 = "";
					s2 = "";
					s3 = "";
				}
			}
	}


}

