#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;

int calcCost(vector<vector<int>> all, vector<vector<int>> s)
{
    int cost1 = 0, cost2 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int rever = 2 - j;
            cost1 += abs(all[i][j] - s[i][j]);
            cost2 += abs(all[i][rever] - s[i][j]);
        }
    }

    return min(cost1, cost2);
}

int main()
{
    vector<vector<int>> s(3, vector<int>(3));
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            cin >> s[i][j];
        }

    vector<vector<vector<int>>> allMagicSquare = {{{4, 9, 2}, {3, 5, 7}, {8, 1, 6}}, {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}}, {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}}, {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}}};
    int minCost = 100;
    for (int i = 0; i < 4; i++)
    {
        minCost = min(minCost, calcCost(allMagicSquare[i], s));
    }

    cout << minCost << endl;
    return 0;
}