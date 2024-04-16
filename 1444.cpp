#include <iostream>
#include <string>
#include <cmath>

using namespace std;
class point {
public:
    int x,y;
    double gr;
    int id;
};
void Cin(int n, point*& P,int& pol,int& otr) {
    cin >> P[0].x >> P[0].y;
    for (int i = 1; i < n; i++) {
        cin >> P[i].x >> P[i].y;
        P[i].x = P[i].x - P[0].x;
        P[i].y = P[i].y - P[0].y;
        P[i].id = i + 1;
        if (P[i].x == 0) {
            if (P[i].y > 0)
                P[i].gr = 90;
            else
                P[i].gr = 270;
        }
        else 
            if (P[i].y == 0)
                if (P[i].x > 0)
                    P[i].gr = 0;
                else
                    P[i].gr = 180;
            else {
                if (P[i].x > 0 && P[i].y > 0)
                    P[i].gr = atan2(P[i].y, P[i].x) * 180 / 3.1415926535897932384;
                if (P[i].x < 0 && P[i].y > 0)
                    P[i].gr = 180 - atan2(P[i].y, abs(P[i].x)) * 180 / 3.1415926535897932384;
                if (P[i].x < 0 && P[i].y < 0)
                    P[i].gr = 180 + atan2(abs(P[i].y), abs(P[i].x)) * 180 / 3.1415926535897932384;
                if (P[i].x > 0 && P[i].y < 0)
                    P[i].gr = 360 - atan2(abs(P[i].y), P[i].x) * 180 / 3.1415926535897932384;
            }
        if (P[i].x < 0)
            pol=2;
        if (P[i].x > 0)
            otr=2;
        P[i].x = abs(P[i].x);
        P[i].y = abs(P[i].y);
    }
    P[0].x = 0;
    P[0].y = 0;
}
void Sort(int n, point*& P,int pol,int otr) {
    if (pol == 1) 
        for (int i = 1; i < n; i++) {
            P[i].gr = P[i].gr + 90;
            if (P[i].gr >= 360)
                P[i].gr = P[i].gr - 360;
        }
    if (otr == 1)
        for (int i = 1; i < n; i++) {
            P[i].gr = P[i].gr - 90;
        }
       
    double gr = 999,g1=400;
    int x = 999,g;
    cout << n << endl << 1 << endl;
    for (int i = 1; i < n; i++) {
        
        gr = 400;
        for (int j = 1; j < n; j++) {
            if (P[j].gr < gr) {
                gr = P[j].gr;
                x = P[j].x;
                g = j;
                if (i == 1)
                    g1 = P[j].gr;
            }
            if (P[j].gr == g1) {
                x = min(x, P[j].x);
                if (x == P[j].x)
                    g = j;
            }
            else
            if (P[j].gr == gr && x < P[j].x) {
                x = P[j].x;
                g = j;

            }
            
               
        }
        
        
        cout << g+1 << endl;
        P[g].gr = 1000;
    }
}


int main() {
    int n, pol=1,otr=1;
    cin >> n;
    point* P = new point[n];
    Cin(n, P,pol,otr);
    Sort(n, P,pol,otr);
    return 0;
}
