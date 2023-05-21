#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    int pai;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        if (i)
            if (abs(ai - pai) > 1)
            {
                if (ai > pai)
                {
                    for (int j = 0; j < (ai - pai) - 1; j++)
                    {
                        a.push_back(pai + j + 1);
                    }
                }
                else
                {
                    for (int j = 0; j < (pai - ai) - 1; j++)
                    {
                        a.push_back(pai - (j + 1));
                    }
                }
            }
        a.push_back(ai);
        pai = ai;
    }

    for (int i = 0; i < a.size(); i++)
    {
        if (i)
            cout << ' ' << a[i];
        else
            cout << a[i];
    }
    cout << endl;
    return 0;
}