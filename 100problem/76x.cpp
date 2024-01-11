#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> a(n), s(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        s[i + 1] = s[i] + a[i];
    }

    for (int i = 1; i <= n; ++i)
    {
        long long ans = 0;
        for (int j = 0; i + j <= n; ++j)
        {
            ans = max(ans, s[i + j] - s[j]);
        }
        cout << ans << endl;
    }
    return 0;
}
