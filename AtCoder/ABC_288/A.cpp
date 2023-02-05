#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    rep(i, n)
    {
        cin >> a[i] >> b[i];
        cout << a[i] + b[i] << endl;
    }

    return 0;
}