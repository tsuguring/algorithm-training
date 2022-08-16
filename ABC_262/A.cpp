#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int y;
    cin >> y;
    if (y % 4 == 2)
        cout << y << endl;
    else
    {
        while (y % 4 != 2)
        {
            y++;
        }
        cout << y << endl;
    }
    return 0;
}