#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> r(n);
    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
    }
    int m;
    cin >> m;
    vector<int> p(m);
    for (int i = 0; i < m; i++)
    {
        cin >> p[i];
    }
    r.erase(unique(r.begin(), r.end()), r.end());
    for (int i = 0; i < m; i++)
    {
        cout << (lower_bound(r.begin(), r.end(), p[i], greater<int>()) - r.begin()) + 1 << endl;
    }

    return 0;
}