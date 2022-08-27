#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

bool area(pair<int, int> a, pair<int, int> b, vector<pair<int, int>> v)
{
    bool c, c1;
    rep(i, 4)
    {
        int n = v[i].first * (a.second - b.second) + a.first * (b.second - v[i].second) + b.first * (v[i].second - a.second);
        if (i)
        {
            if (n > 0)
            {
                c1 = 0;
                if (c != c1)
                    return false;
            }
            else if (n < 0)
            {
                c1 = 1;
                if (c != c1)
                    return false;
            }
        }
        else
        {
            if (n > 0)
                c = 0;
            else if (n < 0)
                c = 1;
        }
    }
    return true;
}
int main()
{
    vector<pair<int, int>> v;
    rep(i, 4)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    rep(i, 3)
    {
        rep2(j, i + 1, 4)
        {
            if (!area(v[i], v[i + 1], v))
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}