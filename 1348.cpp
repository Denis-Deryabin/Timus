#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double dist(double x, double y, double x1, double y1, double x2, double y2)
{
    double p, p2, p3, per, h;
    p = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    p2 = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
    p3 = sqrt((x - x2) * (x - x2) + (y - y2) * (y - y2));
    per = (p + p2 + p3) / 2;

    if ((p * p + p2 * p2 <= p3 * p3) || (p * p + p3 * p3 <= p2 * p2))
        h = min(p2, p3);
    else
        h = 2 * sqrt(per * (per - p) * (per - p2) * (per - p3)) / p;
    return h;
}

double distm(double x, double y, double x1, double y1, double x2, double y2)
{
    double p, p2, p3, per, h;
    p = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    p2 = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
    p3 = sqrt((x - x2) * (x - x2) + (y - y2) * (y - y2));
    per = (p + p2 + p3) / 2;

    h = max(p2, p3);
    return h;
}

int main()
{
    double x, y, x1, y1, x2, y2,a;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x >> y >> a;
    if (a > dist(x, y, x1, y1, x2, y2)) cout << 0 << endl;
    else cout << fixed << setprecision(2) << dist(x, y, x1, y1, x2, y2) - a << endl;
    if (a > distm(x, y, x1, y1, x2, y2)) cout << 0;
    else cout << fixed << setprecision(2) << distm(x, y, x1, y1, x2, y2) - a;
    
    return 0;
}
