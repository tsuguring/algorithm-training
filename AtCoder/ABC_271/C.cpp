#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<bool> flag(n + 2, false);
    vector<int> a(n);
    int sell = 0;
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] >= flag.size())
            sell++;
        else if (flag[a[i]])
            sell++;
        else
            flag[a[i]] = true;
    }
    int now = 1;
    int m = n + 1;
    while (1)
    {
        while (flag[now])
            now++;
        while (m != 0 and !flag[m])
            m--;

        if (sell >= 2)
        {
            sell -= 2;
            flag[now] = true;
        }
        else
        {
            if (now >= m)
                break;
            flag[m] = false;
            sell++;
        }
    }

    cout << now - 1 << endl;

    return 0;
}