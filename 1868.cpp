#include <iostream>
#include <string>
using namespace std;

int Fu(string* uniki, string unik, string bet)
{
    int q=0, x=0;
    if (bet[0] == 'g') { q = 0; x = 3; }
    if (bet[0] == 's') { q = 4; x = 7; }
    if (bet[0] == 'b') { q = 8; x = 11; }
    for (int l = 0; l < 12; l++)
        if ((unik == uniki[l]) and (l >= q) and (l <= x))
            return 1;
    return 0;
}
int main()
{
    string* uni = new string [12];
    for (int i = 0; i < 12; i++)
        cin >> uni[i];

    int n, m,k;
    cin >> n;

    int* K = new int[n];
    

    string unik, gg, bet;

    for (int i = 0; i < n; i++)
    {
        k = 0;
        cin >> m;
        for (int p = 0; p < m; p++)
        {
            cin >> unik >> gg >> bet;
            if (Fu(uni, unik, bet) == 1)
                k++;
        }
        K[i] = k;
    }
    m = 0;
    int o = 0;

    for (int i = 0; i < n; i++)
    {
        if (K[i] == m)
        {
            o++;
        }
        if (K[i] > m)
        {
            m = K[i];
            o = 1;
        }
    }
        cout << o * 5;
}
