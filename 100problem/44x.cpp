#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
#define INF 1000001
int main()
{
    vector<int> data, odd_data;
    rep2(i, 1, 200)
    {
        int num = i * (i + 1) * (i + 2) / 6;
        data.push_back(num);
        if (num % 2)
            odd_data.push_back(num);
    }

    vector<int> t(INF), ot(INF);
    rep(i, INF + 1)
    {
        t[i] = INF;
        ot[i] = INF;
    }
    t[0] = ot[0] = 0;

    rep(i, INF)
    {
        rep(j, data.size())
        {
            if (data[j] <= i + 1)
                t[i + 1] = min(t[i + 1], t[(i + 1) - data[j]] + 1);
        }
    }
    rep(i, INF)
    {
        rep(j, odd_data.size())
        {
            if (odd_data[j] <= i + 1)
                ot[i + 1] = min(ot[i + 1], ot[(i + 1) - odd_data[j]] + 1);
        }
    }

    // rep(i, 36) cout << t[i] << ' ' << ot[i] << endl;

    while (1)
    {
        int n;
        cin >> n;
        if (!n)
            break;
        cout << t[n] << ' ' << ot[n] << endl;
    }
    return 0;
}