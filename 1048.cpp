#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int N,c,k=0,N1;
    short* a;
    short* b;
    short* n;
    a = new short[1000000];
    b = new short[1000000];
    n = new short[1000000];
    cin >> N;
    N1 = N;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i] >> b[i];
    }
    N--;
    for (N; N > -1; N--)
    {
        c = a[N] + b[N]+k;
        if (c > 9)
        {
            n[N] = c % 10;
            k = c / 10;
        }
        else
        {
            n[N] = c;
            k = 0;
        }
    }
    for (int i = 0; i < N1; i++)
        cout << n[i];

    return 0;
}
