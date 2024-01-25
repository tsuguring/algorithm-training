#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int row = (int)sqrt(s.size());
    int column = ceil(sqrt(s.size()));
    // cout << s.size() << ' ' << row << ' ' << column << endl;
    int start = 1;
    for (int i = 0;;)
    {
        if (i > s.size() - 1)
        {
            i = start;
            start++;
            cout << ' ';
        }
        else
        {
            cout << s[i];
            i += column;
        }
        if (start - 1 == column)
            break;
    }
    cout << endl;

    return 0;
}