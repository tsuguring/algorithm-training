#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int n;
        cin >> n;
        vector<int> column(n);
        vector<int> row(n);
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for (int k = 0; k < n; k++)
            {
                int c;
                cin >> c;
                column[k] += c;
                sum += c;
            }
            row[j] = sum;
        }
        sort(column.begin(), column.end());
        sort(row.begin(), row.end());
        if (column == row)
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }

    return 0;
}