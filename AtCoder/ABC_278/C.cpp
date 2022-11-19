#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    ll n, q;
    map<int, set<int>> m;
    vector<string> ans;
    cin >> n >> q;
    rep(i, q)
    {
        int t;
        ll a, b;
        cin >> t >> a >> b;
        if (t == 1)
            m[a].insert(b);
        else if (t == 2)
        {
            m[a].erase(b);
        }
        else
        {
            if (m[a].find(b) != m[a].end() and m[b].find(a) != m[b].end())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}