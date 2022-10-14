#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<ll> even, odd;
    rep(i, n)
    {
        ll a;
        cin >> a;
        if (a % 2)
            even.push_back(a);
        else
            odd.push_back(a);
    }
    if (even.size() < 2 && odd.size() < 2)
    {
        cout << -1 << endl;
    }
    else if (even.size() < 2 && odd.size() >= 2)
    {
        sort(odd.begin(), odd.end());
        ll sumodd = odd.back();
        odd.erase(odd.end() - 1);
        sumodd += odd.back();
        cout << sumodd << endl;
    }
    else if (odd.size() < 2 && even.size() >= 2)
    {
        sort(even.begin(), even.end());
        ll sumeven = even.back();
        even.erase(even.end() - 1);
        sumeven += even.back();
        cout << sumeven << endl;
    }
    else
    {
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        ll sumeven = even.back();
        even.erase(even.end() - 1);
        sumeven += even.back();
        ll sumodd = odd.back();
        odd.erase(odd.end() - 1);
        sumodd += odd.back();
        cout << max(sumeven, sumodd) << endl;
    }

    return 0;
}