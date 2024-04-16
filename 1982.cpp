#include <iostream>
#include <vector>
#include <iostream>
#define int long long
const int inf = 1e9 + 7;
using namespace std;

signed main() {
    
    int n, k;
    cin >> n >> k;
    
    int** mas = new int* [n];
    for (int i = 0; i < n; i++)
        mas[i] = new int[n];
    vector <int> a(k);
    for (int i = 0; i < k; i++) {
        cin >> a[i];
        a[i]--;
    }
    
    int** vis = new int* [n];
    for (int i = 0; i < n; i++)
        vis[i] = new int[n];
    vector <int> min_e(n, inf);
    vector <int> sel_e(n, -1);
    vector <bool> used(n, false);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mas[i][j];
            if (find(a.begin(), a.end(), i) != a.end() and find(a.begin(), a.end(), j) != a.end()) {
                mas[i][j] = 0;
                mas[j][i] = 0;
            }
            vis[i][j] = 0;
        }
        min_e[i] = inf;
        sel_e[i] = -1;
        used[i] = false;
    }


    int v = -1;
    for (int i = 0; i < n; i++) {
        v = -1;
        for (int j = 0; j < n; j++) {
            if (!used[j] and v == -1) {
                v = j;
            }

            if (v != -1) {
                if (!used[j] and min_e[j] < min_e[v] and j != v) {
                    v = j;
                }
            }
        }
        if (v != -1) {
            used[v] = true;
            for (int to = 0; to < n; to++) {
                if (!used[to] and mas[v][to] < min_e[to] and to != v) {
                    min_e[to] = mas[v][to];
                    sel_e[to] = v;
                }
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        v = sel_e[i];
        if (v != -1) {
            if (vis[i][v] == 0) {
                ans = ans + min_e[i];
                vis[i][v] = 1;
                vis[v][i] = 1;
            }
        }
    }
    if (n == 1) cout << 0 << endl;
    else cout << ans << endl;
    return 0;
}
