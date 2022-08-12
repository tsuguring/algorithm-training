#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    char a[n][n];
    rep(i, n)
    {
        rep(j, n)
        {
            char x;
            cin >> x;
            a[i][j] = x;
        }
    }
    bool ans = true;
    rep(i, n)
    {
        rep(j, n)
        {
            if (a[i][j] == 'D')
            {
                if (a[j][i] != 'D')
                    ans = false;
            }
            else if (a[i][j] == 'W')
            {
                if (a[j][i] != 'L')
                    ans = false;
            }
            else if (a[i][j] == 'L')
            {
                if (a[j][i] != 'W')
                    ans = false;
            }
        }
    }
    if (ans)
        cout << "correct" << endl;
    else
        cout << "incorrect" << endl;

    return 0;
}