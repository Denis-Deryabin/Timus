#include <iostream>
#include <string>
using namespace std;



int main() 
{
    int n,b;
    string s;
    cin >> n;
    b = n + 2;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int q = 0; q < s.length(); q++)
            if (s[q] == '+') b++;
    }
    if (b == 13) b++;
    cout << b * 100;

    return 0;
}
