#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    string s;
    cin >> s;
    if (s == "Monday")
        cout << 5 << endl;
    else if (s == "Tuesday")
        cout << 4 << endl;
    else if (s == "Wednesday")
        cout << 3 << endl;
    else if (s == "Thursday")
        cout << 2 << endl;
    else
        cout << 1 << endl;
    return 0;
}