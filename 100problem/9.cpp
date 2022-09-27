#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int m;
    cin >> m;
    vector<pair<int, int>> s(m);
    rep(i, m) cin >> s[i].first >> s[i].second;
    int n;
    cin >> n;
    vector<pair<int, int>> xy(n);
    set<pair<int, int>> sxy;
    rep(i, n)
    {
        cin >> xy[i].first >> xy[i].second;
        sxy.insert(xy[i]);
    }
    rep(i, n)
    {
        pair<int, int> a = xy[i];
        int count = 0;
        rep2(j, 1, m)
        {
            pair<int, int> b, c;
            b.first = s[j].first - s[j - 1].first;
            b.second = s[j].second - s[j - 1].second;
            c.first = a.first + b.first;
            c.second = a.second + b.second;
            if (sxy.count(c))
            {
                a = c;
                count++;
            }
            else
                break;
            if (count == m - 1)
            {
                cout << xy[i].first - s[0].first << ' ' << xy[i].second - s[0].second << endl;
            }
        }
    }

    return 0;
}
