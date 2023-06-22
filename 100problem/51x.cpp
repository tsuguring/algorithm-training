#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
#define INF 1e9
#define MOD 10007

int getId(char participant)
{
    if (participant == 'J')
        return 0;
    else if (participant == 'O')
        return 1;
    else
        return 2;
}

int main()
{
    int days;
    cin >> days;
    string participants;
    cin >> participants;

    vector<vector<int>> table(days, vector<int>(1 << 3, 0));

    for (int i = 0; i < days; i++)
    {
        if (i)
        {
            for (int j = 0; j < 1 << 3; j++)
            {
                if (!(j & (1 << getId(participants[i]))))
                {
                    table[i][j] = 0;
                }
                else
                {
                    for (int k = 0; k < 1 << 3; k++)
                    {
                        if (j & k)
                            table[i][j] = (table[i - 1][k] + table[i][j]) % MOD;
                    }
                }
            }
        }
        else // i=0の時、つまり初日
        {
            for (int j = 0; j < 1 << 3; j++)
            {
                if ((j & (1 << getId('J')) and (j & (1 << getId(participants[i]))))) // もしJと1日目の責任者が参加していれば
                {
                    table[i][j] = 1;
                }
                else
                    table[i][j] = 0;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < 8; i++)
    {
        ans = (ans + table[days - 1][i]) % MOD;
    }
    cout << ans << endl;

    return 0;
}