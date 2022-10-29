#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int si = 9;
    string s[si];
    rep(i, si) cin >> s[i];
    vector<pair<int, int>> v;
    set<pair<int, int>> se;
    rep(i, si)
    {
        rep(j, s[i].size())
        {
            if (s[i].at(j) == '#')
            {
                v.push_back(make_pair(i, j));
                se.insert(make_pair(i, j));
            }
        }
    }

    int count = 0;
    if (v.size())
    {
        rep(i, v.size() - 1)
        {
            rep2(j, i + 1, v.size())
            {
                int cx, cy, dx, dy;
                cx = v[j].first - v[j].second + v[i].second;
                cy = v[j].second + v[j].first - v[i].first;
                dx = v[i].first - v[j].second + v[i].second;
                dy = v[i].second + v[j].first - v[i].first;
                if (se.count(make_pair(cx, cy)) and se.count(make_pair(dx, dy)))
                {
                    count++;
                }
            }
        }
    }

    cout << count / 2 << endl;
    return 0;
}