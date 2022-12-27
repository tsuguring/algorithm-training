#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> p(n), q(n), v(n);
    rep(i, n) cin >> p[i];
    rep(i, n)
    {
        cin >> q[i];
        v[i] = i + 1;
    }
    int count = 0;
    int cp, cq;
    do
    {
        count++;
        if (v == p)
            cp = count;
        if (v == q)
            cq = count;
    } while (next_permutation(v.begin(), v.end()));
    cout << abs(cp - cq) << endl;
    return 0;
}