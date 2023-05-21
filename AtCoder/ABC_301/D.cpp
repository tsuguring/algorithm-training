#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    long long n;
    cin >> n;
    long long c = 0;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            c |= 1LL << i;
    }
    if (c > n)
        cout << -1 << endl;
    else
    {
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '?' and (c | 1LL << i) <= n)
                c |= (1LL << i);
        }
        cout << c << endl;
    }
    return 0;
}