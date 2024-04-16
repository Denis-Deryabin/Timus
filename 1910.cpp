#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int n, e1 = 0, e2 = 0, e3 = 0, m = 0, num = -1, xnum;
    cin >> n;
    for (int i = 0; i < n; i++) {
        num++;
        e1 = e2;
        e2 = e3;
        cin >> e3;
        if (e1 + e2 + e3 > m) {
            m = e1 + e2 + e3;
            xnum = num;
        }
    }
    cout << m << " " << xnum;
    return 0;
}
