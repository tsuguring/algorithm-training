#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> town(n);
    vector<int> v(n);
    rep(i, n)
    {
        cin >> town[i].first >> town[i].second;
        v[i] = i;
    }
    double sum = 0, number = 0;
    do
    {
        rep(i, v.size() - 1)
        {
            sum += sqrt(pow(town[v[i]].first - town[v[i + 1]].first, 2) + pow(town[v[i]].second - town[v[i + 1]].second, 2));
        }
        number++;
    } while (next_permutation(v.begin(), v.end()));
    printf("%.8f", sum / number);

    return 0;
}