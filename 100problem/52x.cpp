#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
#define INF 1e9

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> doll(n), cnt(n, 0);
    vector<vector<int>> sum(m, vector<int>(n, 0));
    rep(i, n)
    {
        cin >> doll[i];
        doll[i]--;
        cnt[doll[i]]++;
        sum[doll[i]][i] = 1;
    }

    rep(i, m) rep2(j, 1, n) sum[i][j] += sum[i][j - 1]; // 区画が0~j個目までのぬいぐるみiの数

    vector<int> table(1 << m, INF);
    table[0] = 0;

    rep(i, 1 << m) // 整理されているぬいぐるみの種類の部分集合(e.g. {1, 2})
    {
        int organized_cnt = 0; // 整理されているぬいぐるみの種類の合計数
        rep(j, m)
        {
            if (i & (1 << j))
                organized_cnt += cnt[j];
        }
        rep(k, m) // 次に選択するぬいぐるみの種類
        {
            if (!(i & (1 << k))) // 整理されているぬいぐるみの種類に次に選択するぬいぐるみの種類は含まれてはいけない
            {
                int last_cnt = table[i];
                // rep2(l, organized_cnt, organized_cnt + cnt[k])
                // {
                //     if (doll[l] != k)
                //     {
                //         last_cnt++;
                //     }
                // }
                int k_cnt = sum[k][organized_cnt + cnt[k] - 1]; // kと初期状態の棚に入っているぬいぐるみの種類が異なる数の合計
                if (organized_cnt > 0)
                    k_cnt -= sum[k][organized_cnt - 1];
                last_cnt += cnt[k] - k_cnt;
                table[i + (1 << k)] = min(table[i + (1 << k)], last_cnt);
            }
        }
    }
    cout << table[(1 << m) - 1] << endl;

    return 0;
}