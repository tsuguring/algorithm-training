#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    map<int, int> m;
    rep(i, n)
    {
        int a;
        cin >> a;
        m[a] += 1;
    }
    int c = 0;
    for (auto itr = m.rbegin(); itr != m.rend(); itr++)
    {
        cout << itr->second << endl;
        c++;
    }
    rep2(i, c, n)
    {
        cout << 0 << endl;
    }
    return 0;
}