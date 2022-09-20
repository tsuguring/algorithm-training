#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    vector<string> s(10);
    int x[10] = {}, y[10] = {};
    rep(i, 10) cin >> s[i];
    rep(i, 10) rep(j, 10) if (s[i].at(j) == '#')
    {
        y[i] = 1;
        x[j] = 1;
    }
    int xma = 0, xmi = 11, yma = 0, ymi = 11;
    rep(i, 10)
    {
        if (x[i] == 1)
        {
            xma = max(xma, i + 1);
            xmi = min(xmi, i + 1);
        }
        if (y[i] == 1)
        {
            yma = max(yma, i + 1);
            ymi = min(ymi, i + 1);
        }
    }

    cout << ymi << ' ' << yma << endl;
    cout << xmi << ' ' << xma << endl;

    return 0;
}