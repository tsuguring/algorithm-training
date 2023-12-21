#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

vector<int> c;

int getMinOp()
{
    vector<int> l;
    l.push_back(c[0]);
    rep2(i, 1, c.size())
    {
        if (l.back() < c[i])
            l.push_back(c[i]);
        else
        {
            *lower_bound(l.begin(), l.end(), c[i]) = c[i];
        }
    }
    return l.size();
}

int main()
{
    int n;
    cin >> n;
    c.resize(n);
    rep(i, n) cin >> c[i];

    cout << n - getMinOp() << endl;

    return 0;
}