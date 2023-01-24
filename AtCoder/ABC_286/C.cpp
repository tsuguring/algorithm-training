#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    ll a, b;
    cin >> n >> a >> b;
    deque<char> deq;
    rep(i, n)
    {
        char s;
        cin >> s;
        deq.push_back(s);
    }
    vector<pair<int, int>> v;
    rep(i, n)
    {
        // rep(i, deq.size())
        // {
        //     cout << deq[i];
        // }
        // cout << endl;
        int cnt = 0;
        rep(j, n / 2)
        {
            if (deq[j] != deq[n - 1 - j])
                cnt++;
        }
        // cout << cnt << endl;
        v.push_back(make_pair(i, cnt));
        int f = deq.front();
        deq.pop_front();
        deq.push_back(f);
    }
    ll mi = 1e15;
    rep(i, v.size())
    {
        mi = min(mi, ll(v[i].first) * a + ll(v[i].second) * b);
    }
    cout << mi << endl;
    return 0;
}