#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int t;
    cin >> t;
    rep(i, t)
    {
        int n, sum = 0;
        cin >> n;
        rep(j, n)
        {
            int x;
            cin >> x;
            if (x % 2 != 0)
                sum++;
        }
        cout << sum << endl;
    }
    return 0;
}