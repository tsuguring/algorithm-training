#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int l1, l2, r1, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if (l1 == l2)
    {
        if (r1 > r2)
        {
            cout << r2 - l1 << endl;
        }
        else
            cout << r1 - l1 << endl;
    }
    else if (l1 < l2)
    {
        if (r1 > l2)
        {
            if (r1 > r2)
            {
                cout << r2 - l2 << endl;
            }
            else
                cout << r1 - l2 << endl;
        }
        else
            cout << 0 << endl;
    }
    else
    {
        if (r2 > l1)
        {
            if (r2 > r1)
            {
                cout << r1 - l1 << endl;
            }
            else
                cout << r2 - l1 << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}
