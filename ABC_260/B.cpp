#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

bool c1(tuple<int, int, int> &l, tuple<int, int, int> &r)
{
    if (get<0>(l) != get<0>(r))
        return get<0>(l) > get<0>(r);
    return get<2>(l) < get<2>(r);
}

bool c2(tuple<int, int, int> &l, tuple<int, int, int> &r)
{
    if (get<1>(l) != get<1>(r))
        return get<1>(l) > get<1>(r);
    return get<2>(l) < get<2>(r);
}

bool c3(tuple<int, int, int> &l, tuple<int, int, int> &r)
{
    if (get<0>(l) + get<1>(l) != get<0>(r) + get<1>(r))
        return get<0>(l) + get<1>(l) > get<0>(r) + get<1>(r);
    return get<2>(l) < get<2>(r);
}

int main()
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<tuple<int, int, int>> v;
    vector<int> ans;
    int a[n], b[n];
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n)
    {
        v.push_back(tuple<int, int, int>(a[i], b[i], i + 1));
    }
    sort(v.begin(), v.end(), c1);
    rep(i, x)
    {
        ans.push_back(get<2>(v[0]));
        v.erase(v.begin(), v.begin() + 1);
    }
    sort(v.begin(), v.end(), c2);
    rep(i, y)
    {
        ans.push_back(get<2>(v[0]));
        v.erase(v.begin(), v.begin() + 1);
    }
    sort(v.begin(), v.end(), c3);
    rep(i, z)
    {
        ans.push_back(get<2>(v[0]));
        v.erase(v.begin(), v.begin() + 1);
    }
    sort(ans.begin(), ans.end());
    rep(i, ans.size()) cout << ans[i] << endl;

    return 0;
}