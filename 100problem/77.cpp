#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> dist(n - 1), move(m), s(n, 0);
    rep(i, n - 1) cin >> dist[i];
    rep(i, m) cin >> move[i];
    rep(i, n - 1)
    {
        s[i + 1] = s[i] + dist[i];
    }
    int now = 0;
    int sumDist = 0;
    rep(i, m)
    {
        sumDist += abs(s[move[i] + now] - s[now]);
        now += move[i];
        sumDist %= 100000;
    }

    cout << sumDist << endl;

    return 0;
}