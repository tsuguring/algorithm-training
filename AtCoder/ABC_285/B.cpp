#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<char> c(n);
    rep(i, n) cin >> c[i];
    rep(i, n - 1)
    {
        int l = 0;
        rep(j, n - i - 1)
        {
            if (c[j] == c[j + i + 1])
            {
                break;
            }
            l++;
        }
        cout << l << endl;
    }
    return 0;
}