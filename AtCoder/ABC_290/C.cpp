#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    set<ll> s;
    rep(i, n)
    {
        cin >> a[i];
        s.insert(a[i]);
    }

    vector<int> ans;
    if (k < s.size())
    {
        int c = 0;
        for (auto itr = s.begin(); itr != s.end(); itr++)
        {
            c++;
            ans.push_back(*itr);
            if (c == k)
                break;
        }
    }
    else
    {
        for (auto itr = s.begin(); itr != s.end(); itr++)
        {
            ans.push_back(*itr);
        }
    }
    int cans = 0;
    rep(i, ans.size())
    {
        if (i == ans[i])
            cans++;
        else
            break;
    }
    cout << cans << endl;

    return 0;
}