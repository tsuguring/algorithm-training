#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    map<int, vector<int>> ma;
    rep(i, m)
    {
        cin >> a[i];
    }

    stack<int> s;
    int cn = 0;
    rep2(i, 1, n + 1)
    {
        bool c = false;
        rep(j, m)
        {
            if (i == a[j])
                c = true;
        }
        if (!c)
        {
            cn++;
            if (cn == 1)
                cout << i;
            else
                cout << ' ' << i;
            while (!s.empty())
            {
                int t = s.top();
                s.pop();
                cn++;
                cout << ' ' << t;
            }
        }
        else
            s.push(i);
    }
    cout << endl;

    return 0;
}