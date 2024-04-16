#include <iostream>
#include <algorithm>

using namespace std;

struct interval {
    int s, e;

    interval() {}

    bool operator < (interval X)const {
        return e < X.e;
    }
}
I[100000];

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> I[i].s >> I[i].e;
        
    }
    sort(I, I + N);

    int last = 0, ans = 0;

    for (int i = 0; i < N; ++i) {
        if (I[i].s > last) {
            last = I[i].e;
            ans++;
        }
    }

    cout << ans;

    return 0;
}
