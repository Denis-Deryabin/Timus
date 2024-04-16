#include <iostream>
#include <queue>

using namespace std;

int country[100];
int fm[100];
bool vern = true;

struct edge {
    int st;
    int en;
};

edge map[10000];

int ennm = 0;

void bfs( int n) {
    queue<int> que;
    que.push(1);
    int cons;
    fm[1] = 1;

    while (!(que.empty()) and vern) {
        cons = que.front();
        que.pop();

        for (int i = 0; i < ennm; i++) {
            if (map[i].st == cons) {
                if (fm[map[i].en] == 0) {
                    que.push(map[i].en);
                    fm[map[i].en] = fm[map[i].st] + 1;
                }
                else
                    if (fm[map[i].en] == fm[map[i].st])
                        vern = false;
            }
            if (map[i].en == cons) {
                if (fm[map[i].st] == 0) {
                    que.push(map[i].st);
                    fm[map[i].st] = fm[map[i].en] + 1;
                }
                else
                    if (fm[map[i].en] == fm[map[i].st])
                        vern = false;
            }
        }

    }
}

int main() {
    int n, cur;
    cin >> n;

    for (int i = 1; i < n + 1;) {
        cin >> cur;
        if (cur == 0) i++;
        else {
            map[ennm++] = { i, cur };
        }
    }

    bfs( n);

    if (vern != 1) {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 1; i < n + 1; i++) {
        cout << (fm[i] + 1) % 2;
    }

    cout << endl;

    return 0;
}
