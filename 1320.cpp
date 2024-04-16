#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
    vector<vector<int>> n(1001);
    vector<bool> v(1000, false);

    int x, y;
    while (scanf("%d %d", &x, &y) != EOF)
    {
        n[x].push_back(y);
        n[y].push_back(x);
    }
    for (int i = 1; i < 1000; i++)
    {
        std::stack<int> s;

        if (v[i])
            continue;
        s.push(i);
        int c = 0;
        while (!s.empty())
        {
            auto i = s.top();
            s.pop();
            v[i] = true;
            for (auto it = n[i].begin(); it < n[i].end(); it++)
            {
                if (v[*it])
                    continue;
                c++;
                s.push(*it);
            }
        }
        if (c % 2)
        {
            cout << "0";
            return 0;
        }
    }
    cout << "1";
    return 0;
}
