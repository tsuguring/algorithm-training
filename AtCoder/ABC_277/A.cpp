#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, x;
    cin >> n >> x;
    rep(i, n)
    {
        int p;
        cin >> p;
        if (p == x)
            cout << i + 1 << endl;
    }
    return 0;
}