#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int x, y, n;
    cin >> x >> y >> n;
    if (x * 3 < y)
    {
        cout << x * n << endl;
    }
    else
        cout << y * (n / 3) + x * (n % 3) << endl;
    return 0;
}