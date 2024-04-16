#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    int h, w, n, pages, strings, chars;
    string s;
    pages = 1; strings = 1; chars = 0;
    cin >> h >> w >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        int len = s.length();
        if ((chars == 0) && (len <= w)) {
            chars = len;
            continue;
        }
        if (chars + len + 1 <= w) chars += 1 + len;
        else {
            chars = len;
            strings++;
            if (strings > h) { strings = 1; pages++; };
        }
    }
    cout << pages << endl;
    return 0;
}
