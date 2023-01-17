#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    map<char, ll> c = {
        make_pair('A', 1),
        make_pair('B', 2),
        make_pair('C', 3),
        make_pair('D', 4),
        make_pair('E', 5),
        make_pair('F', 6),
        make_pair('G', 7),
        make_pair('H', 8),
        make_pair('I', 9),
        make_pair('J', 10),
        make_pair('K', 11),
        make_pair('L', 12),
        make_pair('M', 13),
        make_pair('N', 14),
        make_pair('O', 15),
        make_pair('P', 16),
        make_pair('Q', 17),
        make_pair('R', 18),
        make_pair('S', 19),
        make_pair('T', 20),
        make_pair('U', 21),
        make_pair('V', 22),
        make_pair('W', 23),
        make_pair('X', 24),
        make_pair('Y', 25),
        make_pair('Z', 26)};
    string s;
    cin >> s;
    ll ans = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        ans += ll(pow(26, s.size() - (i + 1))) * ll(c[s.at(i)]);
    }
    cout << ans << endl;

    return 0;
}