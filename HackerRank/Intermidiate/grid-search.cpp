#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPatternPresent(vector<string> &grid, vector<string> &pattern, int startRow, int startCol)
{
    int patternRows = pattern.size();
    int patternCols = pattern[0].size();
    int gridRows = grid.size();
    int gridCols = grid[0].size();

    for (int i = 0; i < patternRows; i++)
    {
        for (int j = 0; j < patternCols; j++)
        {
            int gridRow = startRow + i;
            int gridCol = startCol + j;

            if (gridRow >= gridRows || gridCol >= gridCols || grid[gridRow][gridCol] != pattern[i][j])
            {
                return false;
            }
        }
    }

    return true;
}

string findPattern(vector<string> &grid, vector<string> &pattern)
{
    int gridRows = grid.size();
    int gridCols = grid[0].size();
    int patternRows = pattern.size();
    int patternCols = pattern[0].size();

    for (int i = 0; i <= gridRows - patternRows; i++)
    {
        for (int j = 0; j <= gridCols - patternCols; j++)
        {
            if (isPatternPresent(grid, pattern, i, j))
            {
                return "YES";
            }
        }
    }

    return "NO";
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int gridRows, gridCols;
        cin >> gridRows >> gridCols;

        vector<string> grid(gridRows);
        for (int i = 0; i < gridRows; i++)
        {
            cin >> grid[i];
        }

        int patternRows, patternCols;
        cin >> patternRows >> patternCols;

        vector<string> pattern(patternRows);
        for (int i = 0; i < patternRows; i++)
        {
            cin >> pattern[i];
        }
        string result = findPattern(grid, pattern);
        cout << result << endl;
    }

    return 0;
}
