#include<iostream>
using namespace std;
int main() {
    int naselenie = 1;
    double P, Q;
    cin >> P >> Q;
    bool flag = true;
    while (flag) {
        double x = (P * naselenie) / 100;
        double y = (Q * naselenie) / 100;
        for (double i = 1; i < y; i++) {
            if ((i - x > 0.00000000001) && (0.00000000001 < y - i)) {
                cout << naselenie;
                flag = false;
                break;
            }
        }
        naselenie++;
    }
}
