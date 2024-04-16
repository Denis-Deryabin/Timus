#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

void swap(double& r1, double& r2) {
    double swapChar = r1;
    r1 = r2; r2 = swapChar;
}

struct point {
    double x;
    double y;
};

void pSwap(point& r1, point& r2) {
    point swapChar = r1;
    r1 = r2; r2 = swapChar;
}

class Square {

public:
    point p1;
    point p2;
    point p3;
    point p4;

    void pointsFill() {
        double x = (p3.x - p1.x) / 2;
        double y = (p3.y - p1.y) / 2;
        p2.x = p1.x + x + y;
        p2.y = p1.y - x + y;
        p4.x = p1.x + x - y;
        p4.y = p1.y + x + y;
    }

    double rangeToP[5];

    void findRanges(point p) {
        rangeToP[1] = sqrt((p.x - p1.x) * (p.x - p1.x) + (p.y - p1.y) * (p.y - p1.y));
        rangeToP[2] = sqrt((p.x - p2.x) * (p.x - p2.x) + (p.y - p2.y) * (p.y - p2.y));
        rangeToP[3] = sqrt((p.x - p3.x) * (p.x - p3.x) + (p.y - p3.y) * (p.y - p3.y));
        rangeToP[4] = sqrt((p.x - p4.x) * (p.x - p4.x) + (p.y - p4.y) * (p.y - p4.y));
    }

    double diametr;

    void findDiametr() {
        diametr = sqrt((p3.x - p1.x) * (p3.x - p1.x) + (p3.y - p1.y) * (p3.y - p1.y));
    }

    bool isPointInside() {
        return (diametr * diametr + 0.001 > rangeToP[1] * rangeToP[1] + rangeToP[3] * rangeToP[3]);
    }

    void sortByRange() {
        if (rangeToP[2] > rangeToP[3]) {
            swap(rangeToP[2], rangeToP[3]); pSwap(p2, p3);
        };
        if (rangeToP[2] > rangeToP[4]) {
            swap(rangeToP[2], rangeToP[4]); pSwap(p2, p4);
        };
        if (rangeToP[1] > rangeToP[3]) {
            swap(rangeToP[1], rangeToP[3]); pSwap(p1, p3);
        };
        if (rangeToP[1] > rangeToP[4]) {
            swap(rangeToP[1], rangeToP[4]); pSwap(p1, p4);
        };
        if (rangeToP[1] > rangeToP[2]) {
            swap(rangeToP[1], rangeToP[2]); pSwap(p1, p2);
        };
    }

    double nearestSide;

    void findNearsetSide() {
        nearestSide = sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
    }

    double findHeight() {
        double temp = (rangeToP[1] + rangeToP[2] + nearestSide) / 2;
        return (2 * sqrt(temp * (temp - rangeToP[1]) * (temp - rangeToP[2]) * (temp - nearestSide))) / nearestSide;
    }

    bool isHeightExist() {
        return !(((rangeToP[1] * rangeToP[1] + nearestSide * nearestSide - rangeToP[2] * rangeToP[2]) / (2 * rangeToP[1] * nearestSide) < 0) || ((rangeToP[2] * rangeToP[2] + nearestSide * nearestSide - rangeToP[1] * rangeToP[1]) / (2 * rangeToP[2] * nearestSide) < 0));
    }

};

int main() {
    cout.precision(8);
    int n;
    cin >> n;
    double* ans = new double[n];
    Square* sqrs = new Square[n];
    for (int i = 0; i < n; i++) {
        cin >> sqrs[i].p1.x >> sqrs[i].p1.y >> sqrs[i].p3.x >> sqrs[i].p3.y;
    }
    point p;
    cin >> p.x >> p.y;
    for (int i = 0; i < n; i++) {
        sqrs[i].pointsFill();
        sqrs[i].findRanges(p);
        sqrs[i].findDiametr();

        if (sqrs[i].diametr == 0) {
            ans[i] = sqrs[i].rangeToP[1];
            continue;
        }

        if (sqrs[i].isPointInside() == 1) {
            ans[i] = 0;
            continue;
        }

        sqrs[i].sortByRange();
        sqrs[i].findNearsetSide();

        if (sqrs[i].isHeightExist() == 0) {
            ans[i] = sqrs[i].rangeToP[1];
            continue;
        }

        ans[i] = sqrs[i].findHeight();

    }
    for (int f = 0; f < n; f++) {
        if (f != 0) cout << " ";
        int index; double judge = 9999999999999999999;
        for (int j = 0; j < n; j++) {
            if (ans[j] < judge - 0.000000000001) {
                judge = ans[j];
                index = j;
            }
        }
        cout << index + 1;
        ans[index] = 9999999999999999999;
    }
    cout << endl;
    return 0;

}
