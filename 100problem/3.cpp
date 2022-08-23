#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    string s;
    cin >> s;
    vector<int> v(s.length());
    rep(i, s.length())
    {
        int j = i;
        int c = 0;
        rep2(j, i, s.length())
        {
            if (s[j] == 'A' or s[j] == 'C' or s[j] == 'G' or s[j] == 'T')
            {
                c++;
                v[i] = c;
            }
            else
                break;
        }
    }
    cout << *max_element(v.begin(), v.end()) << endl;
    return 0;
}