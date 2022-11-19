#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int h, m;
    cin >> h >> m;
    while (1)
    {
        int h1 = (h / 10) * 10 + m / 10;
        int m1 = (m % 10) + (h % 10) * 10;
        if (h1 < 24 and m1 < 59)
            break;
        if (m == 59)
        {
            m = 0;
            if (h == 23)
            {
                h = 0;
            }
            else
                h++;
        }
        else
            m++;
    }
    cout << h << ' ' << m;

    return 0;
}