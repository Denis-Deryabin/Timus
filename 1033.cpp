#include <iostream>
#include <string>

using namespace std;
const int mx[4] = { 0, 1, 0, -1 };
const int my[4] = { 1, 0, -1, 0 };
const int N = 34;
char mat[N][N];
bool v[N][N];
int n;


bool Prov(int i, int j) {
    if (i < 0 || i >= n) return 0;
    if (j < 0 || j >= n) return 0;
    return 1;
}

int dfs(int i, int j) {
    if (!Prov(i, j) || mat[i][j] == '#')
        return 1;
    if (v[i][j])
        return 0;

    v[i][j] = 1;

    int res = 0;
    for (int k = 0; k < 4; k++)
        res += dfs(i + mx[k], j + my[k]);

    return res;
}

int main() {

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> mat[i];

    int p;
    p =  dfs(n - 1, n - 1)+ dfs(0, 0) - 4;
    cout << p*9;
}
