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
    vector<pair<int, int>> e;
    for (int i = 0; i < n; i++)
    {
        int isLight, prevLight;
        cin >> isLight;
        if (!i)
            e.push_back(make_pair(isLight, 1));
        else
        {
            if (isLight == prevLight)
            {
                e.push_back(make_pair(isLight, 1));
            }
            else
            {
                e.back().second++;
            }
        }
        prevLight = isLight;
    }

    int maxl = 0;
    for (int i = 0; i < e.size(); i++)
    {
        if (i == 0)
            maxl = max(maxl, e[i].second + e[i + 1].second);
        else if (i == e.size() - 1)
            maxl = max(maxl, e[i].second + e[i - 1].second);
        else
            maxl = max(maxl, e[i].second + e[i + 1].second + e[i - 1].second);
    }

    cout << maxl << endl;
    return 0;
}