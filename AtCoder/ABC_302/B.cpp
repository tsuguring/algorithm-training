#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> v(h, vector<char>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            char c;
            cin >> c;
            v[i][j] = c;
        }
    }
    int dx[] = {1, 1, 1, 0, 0, 0, -1, -1, -1};
    int dy[] = {1, 0, -1, 1, 0, -1, 1, 0, -1};
    vector<pair<int, int>> ans;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (v[i][j] == 's')
            {
                int nextx = j;
                int nexty = i;
                for (int k = 0; k < 9; k++)
                {
                    nextx = j + dx[k];
                    nexty = i + dy[k];
                    if (nextx < w and nextx >= 0 and nexty < h and nexty >= 0)
                    {
                        if (v[nexty][nextx] == 'n')
                        {

                            nextx += dx[k];
                            nexty += dy[k];
                            if (nextx < w and nextx >= 0 and nexty < h and nexty >= 0)
                            {
                                if (v[nexty][nextx] == 'u')
                                {

                                    nextx += dx[k];
                                    nexty += dy[k];
                                    if (nextx < w and nextx >= 0 and nexty < h and nexty >= 0)
                                    {
                                        if (v[nexty][nextx] == 'k')
                                        {

                                            nextx += dx[k];
                                            nexty += dy[k];
                                            if (nextx < w and nextx >= 0 and nexty < h and nexty >= 0)
                                            {
                                                if (v[nexty][nextx] == 'e')
                                                {
                                                    for (int x = 0; x < 5; x++)
                                                    {
                                                        ans.push_back(make_pair(nexty + 1, nextx + 1));
                                                        nexty -= dy[k];
                                                        nextx -= dx[k];
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i = ans.size() - 1; i >= 0; i--)
        cout << ans[i].first << ' ' << ans[i].second << endl;

    return 0;
}