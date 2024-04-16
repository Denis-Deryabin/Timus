#include <cstdio>
#include <vector>
using namespace std;
typedef vector<int> ss;
vector<ss> a(1001), b(1001);
vector<int> la(1001), lb(1001), st(1001), r(101), h(101);
int l, lr, lh, n, i, j, s, k, m;
void main()
{
  for (i = 0; i < 1001; ++i) { a[i].resize(101); b[i].resize(101); }
  scanf("%d%d", &n, &s);
  if (s % 2) { printf("0"); return; }
  s /= 2;
  if (s / n >= 10) { printf("0"); return; }
  if (s * 2 > n * 9)s = n * 9 - s;
  for (i = 0; i <= s; ++i)
  {
    if (i <= 9)a[i][1] = 1;
    la[i] = 1;
  }
  la[0] = 1; la[1] = 1;
  for (i = 2; i <= n; ++i)
  {
    b = a; lb = la;
    for (j = 1; j <= s; ++j)
      for (m = 0; m <= j - 1; ++m)
        if (j - m <= 9)
        {
          for (k = 1; k <= max(la[j], lb[m]); ++k)
          {
            a[j][k] = a[j][k] + b[m][k];
            a[j][k + 1] = a[j][k + 1] + a[j][k] / 10;
            a[j][k] = a[j][k] % 10;
          }
          while (a[j][la[j] + 1])la[j] = la[j] + 1;
        }
  }
  lr = la[s]; lh = la[s];
  r = a[s]; h = a[s];
  for (j = lr; j >= 1; --j)
  {
    for (k = lh; k >= 2; --k)r[j + k - 1] += r[j] * h[k];
    r[j] = r[j] * h[1];
  }
  l = 0;
  for (j = 1; j <= lr + lh; ++j)
  {
    l += r[j];
    r[j] = l % 10;
    l = l / 10;
  }
  if (r[lr + lh])lr += lh;
  else lr += lh - 1;
  for (i = lr; i >= 1; --i) printf("%d", r[i]);
}
