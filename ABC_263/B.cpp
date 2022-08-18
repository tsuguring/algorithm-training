#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n - 1) cin >> p[i];
    int no = n;
    int c = 0;
    while (no != 1)
    {
        no = p[no - 2];
        c++;
    }
    cout << c << endl;

    return 0;
}