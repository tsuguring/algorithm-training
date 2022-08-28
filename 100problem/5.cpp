#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    if (a + b < (2 * c))
    {
        cout << x * a + y * b << endl;
    }
    else
    {
        if (x < y)
        {
            if (c * 2 * y < c * 2 * x + (y - x) * b)
            {
                cout << c * 2 * y << endl;
            }
            else
                cout << c * 2 * x + (y - x) * b << endl;
        }
        else
        {
            if (c * 2 * x < c * 2 * y + (x - y) * a)
            {
                cout << c * 2 * x << endl;
            }
            else
                cout << c * 2 * y + (x - y) * a << endl;
        }
    }

    return 0;
}