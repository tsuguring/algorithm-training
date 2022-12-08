#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int h, w;
    cin >> h >> w;
    char c;
    int count = 0;
    rep(i, h) rep(j, w)
    {
        cin >> c;
        if (c == '#')
            count++;
    }
    cout << count << endl;
    return 0;
}