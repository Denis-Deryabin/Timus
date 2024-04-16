#include <math.h>
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double n, r;
double pi = 3.141592654;
int main()
{
    cin >> n >> r;
    if(r <= n / 2)
    {
        cout << fixed << setprecision(3) << pi * r * r;
        return 0;
    }
    if(r >= n * sqrt(2) / 2)
    {
        cout << fixed << setprecision(3) << n * n;
        return 0;
    }
    cout << fixed << setprecision(3) << (r * (r * asin(-sqrt(r * r - n * n / 4) / r) + (-sqrt(r * r - n * n / 4) * -sqrt(-(-sqrt(r * r - n * n / 4) - r) * (-sqrt(r * r - n * n / 4) + r))) / r) / 2 -
                                         r * (r * asin(-n / 2 / r) + (-n / 2 * -sqrt(-(-n / 2 - r) * (-n / 2 + r))) / r) / 2 + n / 2 * sqrt(r * r - n * n / 4)) * 4;
    return 0;
}
