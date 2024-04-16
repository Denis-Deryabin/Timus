#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
char cap(char x) {
    int z = x;
    if ((z > 64) && (z < 91)) {
        z += 32;
        char c;
        c = z;
        return c;
    }
    return x;
}
char anticap(char x) {
    int z = x;
    if ((z > 96) && (z < 123)) {
        z -= 32;
        char c;
        c = z;
        return c;
    }
    return x;
}

bool SentEndKa(char z) {
    if ((z == '.') || (z == '?') || (z == '!')) return 1;
    else return 0;
}

bool IsChar(char z) {
    if (((z > 64) && (z < 91)) || ((z > 96) && (z < 123))) return 1;
    return 0;
}

int main() {
    string s;
    bool SentEnd = 1;
    getline(cin, s);
    while (s != "") {
        string fixed = "";
        for (int i = 0; i < size(s); i++) {
            char curs = s[i];
            if (SentEnd == 1) {
                if (IsChar(curs)) {
                    fixed += anticap(curs);
                    SentEnd = 0;
                }
                else fixed += curs;
            }
            else {
                fixed += cap(curs);
                SentEnd = SentEndKa(curs);
            }
        }
        cout << fixed << endl;
        getline(cin, s);
    }
    return 0;
}
