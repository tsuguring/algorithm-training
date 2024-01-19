#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> stone;
    for (int i = 0; i < n; i++)
    {
        int color;
        cin >> color;
        if (!i)
            stone.push_back(make_pair(color, 1));
        else
        {
            if (stone.back().first == color)
                stone.back().second++;
            else
            {
                if (!(i % 2))
                {
                    stone.push_back(make_pair(color, 1));
                }
                else
                {
                    stone.back().first = color;
                    stone.back().second++;
                    int cs = stone.back().second;
                    stone.pop_back();
                    if (stone.back().first == color and !stone.empty())
                    {
                        stone.back().second += cs;
                    }
                    else
                        stone.push_back(make_pair(color, cs));
                }
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < stone.size(); i++)
    {
        if (!stone[i].first)
            ans += stone[i].second;
    }
    cout << ans << endl;
    return 0;
}