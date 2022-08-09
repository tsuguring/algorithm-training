#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

void compression(string s, vector<pair<char, int>> &v)
{
    int c = 1;
    rep(i, s.length() - 1)
    {
        if (s[i] != s[i + 1])
        {
            v.push_back({s[i], c});
            c = 0;
        }
        c++;
    }
    v.push_back({s[s.length() - 1], c});
}

int main()
{
    string s, t;
    cin >> s >> t;
    vector<pair<char, int>> sv, tv;
    bool ans = false;
    compression(s, sv);
    compression(t, tv);
    if (sv.size() != tv.size())
        cout << "No" << endl;
    else
    {
        rep(i, sv.size())
        {
            if (sv[i].first == tv[i].first)
            {
                if ((sv[i].second >= 2 && sv[i].second < tv[i].second) || sv[i].second == tv[i].second)
                    ans = true;
                else
                {
                    ans = false;
                    break;
                }
            }
            else
            {
                ans = false;
                break;
            }
        }
        if (ans)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}