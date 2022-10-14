#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, m;
    cin >> n >> m;
    bool A[n][n] = {false};
    vector<vector<int>> v(m);

    rep(i, m)
    {
        int k;
        cin >> k;
        rep(j, k)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    rep(i, m)
    {
        rep(j, v[i].size() - 1)
        {
            rep2(k, j + 1, v[i].size())
            {
                A[v[i].at(j) - 1][v[i].at(k) - 1] = true;
                A[v[i].at(k) - 1][v[i].at(j) - 1] = true;
            }
        }
    }

    bool c = true;
    rep(i, n)
    {
        rep(j, n)
        {
            if (i != j)
                if (!A[i][j])
                    c = false;
        }
    }

    if (c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}