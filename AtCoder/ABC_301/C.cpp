#include <iostream>
#include <map>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    map<char, int> sm, tm;
    int sa = 0, ta = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '@')
        {
            sm[s[i]]++;
        }
        else
            sa++;
        if (t[i] != '@')
        {
            tm[t[i]]++;
        }
        else
            ta++;
    }

    for (auto sitr = sm.begin(); sitr != sm.end(); sitr++)
    {
        if (tm[sitr->first])
        {
            if (tm[sitr->first] >= sitr->second)
            {
                tm[sitr->first] -= sitr->second;
                sitr->second = 0;
            }
            else
            {
                sitr->second -= tm[sitr->first];
                tm[sitr->first] = 0;
            }
        }
    }
    bool ans = true;
    for (auto sitr = sm.begin(); sitr != sm.end(); sitr++)
    {
        if (sitr->second)
        {
            if (sitr->first == 'a' or sitr->first == 't' or sitr->first == 'c' or sitr->first == 'o' or sitr->first == 'd' or sitr->first == 'e' or sitr->first == 'r')
            {
                if (ta < sitr->second)
                {
                    ans = false;
                    break;
                }
                else
                    ta -= sitr->second;
            }
            else
                ans = false;
        }
    }
    for (auto titr = tm.begin(); titr != tm.end(); titr++)
    {
        if (titr->second)
        {
            if (titr->first == 'a' or titr->first == 't' or titr->first == 'c' or titr->first == 'o' or titr->first == 'd' or titr->first == 'e' or titr->first == 'r')
            {
                if (sa < titr->second)
                {
                    ans = false;
                    break;
                }
                else
                    sa -= titr->second;
            }
            else
                ans = false;
        }
    }
    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}