#include <string>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char* a = new char[n];
    char* o = new char[n];
    char p;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> o[i];
    }
    cin >> p;
    for (int i = 0; i < n; i++)
    {
        if (p == a[i])
        {
            cout << a[i] << o[i] << endl;
        }
    }
}
