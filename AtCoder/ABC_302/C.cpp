#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    bool isAlmost = false;
    sort(s.begin(), s.end());
    do
    {
        for (int i = 0; i < s.size() - 1; i++)
        {
            int cd = 0;
            for (int j = 0; j < m; j++)
            {
                if (s[i][j] != s[i + 1][j])
                    cd++;
            }
            if (cd != 1)
                break;
            if (i == s.size() - 2)
                isAlmost = true;
        }
    } while (next_permutation(s.begin(), s.end()));
    if (!isAlmost)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

    return 0;
}