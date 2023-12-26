#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    deque<int> v;
    rep(i, n)
    {
        auto pick = lower_bound(v.begin(), v.end(), a[i]);
        if (pick == v.begin())
        {
            v.push_front(a[i]);
        }
        else
        {
            pick--;
            *pick = a[i];
        }
    }
    cout << v.size() << endl;

    return 0;
}