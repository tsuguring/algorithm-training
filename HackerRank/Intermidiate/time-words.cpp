#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int h, m;
    cin >> h >> m;
    string word[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                     "eleven", "twelve", "thirteen", "fourteen", "quarter", "sixteen", "seventeen", "eighteen", "nineteen",
                     "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five",
                     "twenty six", "twenty seven", "twenty eight", "twenty nine"};
    if (m == 0)
        cout << word[h] << ' ' << "o' "
             << "clock" << endl;
    else if (m < 30)
    {
        if (m == 15)
            cout << word[m] << " past " << word[h] << endl;
        else
        {
            cout << word[m];
            if (m == 1)
                cout
                    << " minute past ";
            else
                cout << " minutes past ";
            cout << word[h] << endl;
        }
    }
    else if (m > 30)
    {
        if (h == 12)
        {
            if (m == 45)
                cout << word[60 - m] << ' ' << "to one" << endl;
        }
        else
        {
            if (m == 45)
                cout << word[60 - m] << " to "
                     << word[h + 1] << endl;
            else
            {
                cout << word[60 - m];
                if (m == 59)
                    cout << " minute to ";
                else
                    cout << " minutes to ";
                cout << word[h + 1] << endl;
            }
        }
    }
    else
        cout << "half past " << word[h] << endl;
    return 0;
}