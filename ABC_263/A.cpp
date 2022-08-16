#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int c[5];
    rep(i, 5) cin >> c[i];
    bool ans = true;
    rep(i, 5)
    {
        int count = 0;
        rep(j, 5)
        {
            if (c[i] == c[j])
            {
                count++;
            }
        }
        if (count != 2 && count != 3)
            ans = false;
    }
    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}