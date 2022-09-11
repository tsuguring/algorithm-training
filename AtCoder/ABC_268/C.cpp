#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> p(n), cnt(n);
    rep(i, n) cin >> p[i];
    rep(i, n)
    {
        int j = (p[i] - i - 1 + n) % n;
        rep(k, 3) cnt[(j + k) % n]++;
    }
    int ans = *max_element(cnt.begin(), cnt.end());
    cout << ans << endl;

    return 0;
}