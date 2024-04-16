#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int h=0;
    int n = s.length();
    int* sn = new int[n];
    for (int i = 0; i < n; i++)
        sn[i] = s[i] - 97;

    for (int i = (n-1); i > 0; i--)
    {
        if (sn[i] > sn[i - 1])
            sn[i] = sn[i] - sn[i - 1];
        else
        {
            sn[i] = 26 - sn[i - 1] + sn[i];
            if (sn[i] > 25)
                sn[i] = sn[i] - 26;
        }
    }

    if (sn[0] < 5)
        sn[0] = sn[0] + 21;
    else
        sn[0] = sn[0] - 5;
    for (int i = 0; i < n; i++)
    {
        char k = sn[i] + 97;
        cout << k;
    }


}
