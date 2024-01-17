#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    while (1)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        map<string, int> m;
        rep(i, n)
        {
            string start, end;
            cin >> start >> end;
            m[start]++;
            m[end]--;
        }

        int maxTrain = 0, now = 0;
        for (auto itr = m.begin(); itr != m.end(); itr++)
        {
            now += itr->second;
            maxTrain = max(maxTrain, now);
        }
        cout << maxTrain << endl;
    }

    return 0;
}