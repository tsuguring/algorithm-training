#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> h(n);
    rep(i, n)
    {
        cin >> h[i].first;
        h[i].second = i + 1;
    }
    sort(h.begin(), h.end());
    cout << h.back().second << endl;
    return 0;
}