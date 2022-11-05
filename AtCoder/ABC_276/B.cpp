#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ab(n, vector<int>(0));
    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        ab[a - 1].push_back(b);
        ab[b - 1].push_back(a);
    }
    rep(i, n) sort(ab[i].begin(), ab[i].end());

    // rep(i, n) rep(j, n)
    // {
    //     cout << ab[i][j] << endl;
    // }

    rep(i, ab.size())
    {
        cout << ab.at(i).size();
        rep(j, ab[i].size()) cout << ' ' << ab[i][j];
        cout << endl;
    }
    return 0;
}