#include <iostream>
using namespace std;

double BinaryPower(double b, unsigned long long e) {
    double v = 1.0;
    while (e != 0) {
        if ((e & 1) != 0) {
            v *= b;
        }
        b *= b;
        e >>= 1;
    }
    return v;
}

int main()
{
    long long n;
    cin >> n;
    

    long long rt = sqrt(n), count = 0;
    bool ans = true;

    for (long long i = 2; i <= rt && i <= n; i = i + 2)
    {
        if (i == 4)
            i--;
    
        while (n % i == 0)
        {
            count++;
            n = n / i;
        }

        if (count > 20)
        {
            ans = false;
            break;
        }
        else
            if (count == 20)
            {
                if (n != 1) ans = false;
                break;
            }
            else
                if (count == 19)
                {
                    if ((i + 1) * (i + 1) > n)
                    {
                        if (i + 1 <= n) break;
                        else
                        {
                            ans = false;
                            break;
                        }
                    }
                }

        if (ans == false)
            break;
        if (BinaryPower(i + 1, 20 - count) > n)
        {
            ans = false;
            break;
        }
    }

    if (ans && n != 1)
    {
        count++;
    }

    if (count != 20)
    {
        ans = false;
    }

    if (ans)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
