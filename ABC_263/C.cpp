#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    rep(i, n) v.push_back(0);
    rep(i, m - n) v.push_back(1);
    do
    {
        rep(i, v.size()) if (v[i] == 0) cout << i + 1 << ' ';
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));

    return 0;
}