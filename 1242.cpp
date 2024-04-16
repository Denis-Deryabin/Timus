#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <string>

using namespace std;
class graph {
    int n;
    vector<int> children[1001];
    vector<int> parent[1001];
    int* used;
public:

    graph() {
        cin >> n;
        string a1;
        int b,a;
        cin >> a1;
        while (a1 != "BLOOD") {
            a = stoi(a1);
            cin >> b;
            children[a].push_back(b);
            parent[b].push_back(a);
            cin >> a1;
        }
        used = new int[n + 1];
        for (int i = 0; i <= n; i++)
            used[i] = 0;
    }
    void dfs(int sus) {
        stack<int> st;
        int t;
        st.push(sus);
        used[sus] = 1;
        while (!st.empty()) {
            t = st.top();
            bool flag = true;
            for (auto set : children[t]) {
                if (!used[set]) {
                    st.push(set);
                    used[set] = 1;
                    flag = false;
                }
            }
            if (flag)
                st.pop();
        }
    }
    void dfs1(int sus) {
        stack<int> st;
        int t;
        st.push(sus);
        used[sus] = 1;
        while (!st.empty()) {
            t = st.top();
            bool flag = true;
            for (auto set : parent[t]) {
                if (!used[set]) {
                    st.push(set);
                    used[set] = 1;
                    flag = false;
                }
            }
            if (flag)
                st.pop();
        }
    }
    void print() {
        /*for (int i = 0; i <= n; i++) {
            cout << used[i] << " ";
        }
        cout << endl;*/
        bool flag = true;
        for (int i = 1; i <= n; i++) {
            if (used[i] == 0) {
                cout << i << " ";
                flag = false;
            }
        }
        if (flag)
            cout << 0;
    }
};

int main() {
    graph gr;
    
    int s;
    cin >> s;
    gr.dfs(s);
    gr.dfs1(s);
    cin >> s;
    gr.dfs(s);
    gr.dfs1(s);
    cin >> s;
    gr.dfs(s);
    gr.dfs1(s);
    cin >> s;
    gr.dfs(s);
    gr.dfs1(s);
    cin >> s;
    gr.dfs(s);
    gr.dfs1(s);
    cin >> s;
    gr.dfs(s);
    gr.dfs1(s);
    cin >> s;
    gr.dfs(s);
    gr.dfs1(s);
    cin >> s;
    gr.dfs(s);
    gr.dfs1(s);
    cin >> s;
    gr.dfs(s);
    gr.dfs1(s);
    cin >> s;
    gr.dfs(s);
    gr.dfs1(s);
    gr.print();
    return 0;
}
