#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
int main()
{
    int k;
    int SIZE = 8;
    cin >> k;
    int x[SIZE], y[SIZE];
    rep(i, k) cin >> x[i] >> y[i];
    vector<int> v(SIZE);
    rep(i, SIZE) v[i] = i;
    do
    {
        bool flag = 1;
        rep(i, k) if (v[x[i]] != y[i]) flag = 0;
        if (flag)
        {
            bool flag2 = 1;
            rep(i, 8) rep(j, i) if (i - v[i] == j - v[j] || i + v[i] == j + v[j]) flag2 = 0;
            if (flag2)
            {
                rep(i, SIZE)
                {
                    rep(j, SIZE)
                    {
                        if (v[i] == j)
                            cout << 'Q';
                        else
                            cout << '.';
                    }
                    cout << endl;
                }
            }
        }
    } while (next_permutation(v.begin(), v.end()));

    return 0;
}