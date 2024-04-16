#include <iostream>
using namespace std;


int main()
{
    int n, m,k,z=0,l[10];
    cin >> n >> m;
    int* a =new int[n];
    if (m > n)
        m = m-(m / n) * n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
       
        for (int i = 0; i < 10; i++)
        {
            k = m + i - z;
            if (k == n)
            {
                z = z + n;
                k = m + i - z;
            }
            l[i] = a[k];
        }
  
    for (int i = 0; i < 10; i++)
        cout << l[i];
}

