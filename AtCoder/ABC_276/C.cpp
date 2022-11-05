#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];
    bool c = false;
    do
    {
        if (c)
            break;
        c = true;
    } while (prev_permutation(p.begin(), p.end()));

    rep(i, p.size())
    {
        if (i)
            cout << ' ' << p[i];
        else
            cout << p[i];
    }
    cout << endl;

    return 0;
}