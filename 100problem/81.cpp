#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> color(1000002, 0);
    rep(i, n)
    {
        int a, b;
        cin >> a >> b;
        color[a]++;
        color[b + 1]--;
    }
    rep(i, color.size() + 1)
    {
        color[i + 1] += color[i];
    }
    cout << *max_element(color.begin(), color.end()) << endl;
    return 0;
}