#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int r, c;
    cin >> r >> c;
    int x[15][15] = {};
    rep(i, 15)
    {
        rep(j, 15)
        {
            if (i == 0 || i == 14 || j == 0 || j == 14)
            {
                x[i][j] = 1;
            }
            else if (i == 2 && j < 13 && j > 1 || i == 12 && j < 13 && j > 1 || j == 2 && i < 13 && i > 1 || j == 12 && i < 13 && i > 1)
            {
                x[i][j] = 1;
            }
            else if (i == 4 && j < 11 && j > 3 || i == 10 && j < 11 && j > 3 || j == 4 && i < 11 && i > 3 || j == 10 && i < 11 && i > 3)
            {
                x[i][j] = 1;
            }
            else if (i == 6 && j < 9 && j > 5 || i == 8 && j < 9 && j > 5 || j == 6 && i < 9 && i > 5 || j == 8 && i < 9 && i > 5)
            {
                x[i][j] = 1;
            }
        }
    }

    if (x[r - 1][c - 1])
        cout << "black" << endl;
    else
        cout << "white" << endl;
    return 0;
}