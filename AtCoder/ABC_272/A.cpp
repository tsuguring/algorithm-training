#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    rep(i, n)
    {
        int x;
        cin >> x;
        sum += x;
    }
    cout << sum << endl;
    return 0;
}