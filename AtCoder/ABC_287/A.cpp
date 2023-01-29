#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    int f = 0, a = 0;
    rep(i, n)
    {
        cin >> s[i];
        if (s[i] == "For")
            f++;
        else
            a++;
    }
    if (f > a)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}