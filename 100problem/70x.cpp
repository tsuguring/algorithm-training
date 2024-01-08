#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

#define M 1000000007
ll power(int m, int n)
{
    if (n == 0)
        return 1;
    ll res = power(m, n / 2);
    if (n % 2)
        res = (res * res % M) * m % M;
    else
        res = res * res % M;
    return res;
}
int main()
{
    ll m, n;
    cin >> m >> n;

    cout << power(m, n) << endl;
    return 0;
}