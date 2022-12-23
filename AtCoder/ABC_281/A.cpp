#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int k;
    cin >> k;
    rep(i, k)
    {
        cout << a[i];
    }
    cout << endl;

    return 0;
}