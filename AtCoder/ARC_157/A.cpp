#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool isOk = false;
    if (b == 0 and c == 0)
    {
        if (a == 0 or d == 0)
            isOk = true;
    }
    else if (abs(b - c) <= 1)
    {
        isOk = true;
    }

    if (isOk)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}