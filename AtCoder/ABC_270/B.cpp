#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (x > 0)
    {
        if (0 < y & y < x)
        {
            if (y < z)
            {
                cout << -1 << endl;
            }
            else
            {
                if (z < 0)
                {
                    cout << abs(z) * 2 + x << endl;
                }
                else
                    cout << x << endl;
            }
        }
        else
            cout << x << endl;
    }
    else
    {
        if (x < y & y < 0)
        {
            if (z < y)
                cout << -1 << endl;
            else
            {
                if (z > 0)
                    cout << z * 2 + abs(x);
                else
                    cout << abs(x) << endl;
            }
        }
        else
            cout << abs(x) << endl;
    }
    return 0;
}