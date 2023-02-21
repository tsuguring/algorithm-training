#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<char> s(n);
    rep(i, n) cin >> s[i];

    int count = 0;
    rep(i, n)
    {
        if (count == k)
            s[i] = 'x';
        else if (s[i] == 'o')
            count++;
    }
    rep(i, n) cout << s[i];
    cout << endl;
    return 0;
}