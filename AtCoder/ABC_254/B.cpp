#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a;
    rep(i, n)
    {
        vector<int> aj = {};
        rep(j, i + 1)
        {
            if (j == 0 or i == j)
            {
                aj.push_back(1);
            }
            else
            {
                aj.push_back(a[i - 1][j - 1] + a[i - 1][j]);
            }
        }
        a.push_back(aj);
    }
    rep(i, a.size())
    {
        rep(j, a[i].size())
        {
            if (j)
                cout << ' ' << a[i][j];
            else
                cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}