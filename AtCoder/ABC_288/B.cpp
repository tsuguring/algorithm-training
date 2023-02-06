#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<string> s(n), t;
    rep(i, n) cin >> s[i];
    rep(i, k) t.push_back(s[i]);
    sort(t.begin(), t.end());
    rep(i, t.size()) cout << t[i] << endl;

    return 0;
}