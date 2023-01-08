#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[n - 1 - i];
    rep(i, n) cout << s[i] << endl;
    return 0;
}