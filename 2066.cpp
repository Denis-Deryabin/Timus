
#include <iostream>
using namespace std;
int main()
{
    int a, b, c,x,y,mx,mn,sr;
    cin >> a >> b >> c;
    mx = max(a, max(b, c));
    mn = min(a, min(b, c));
    sr = a + b + c - mn - mx;
    x = mn - sr * mx;
    y = mn - sr - mx;
    cout << min(x, y);
    return 0;
}
