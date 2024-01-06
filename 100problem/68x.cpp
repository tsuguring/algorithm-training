#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

void printPrimeFactor(int n)
{
    for (int i = 2; (i * i) <= n; i++)
    {
        while (!(n % i))
        {
            cout << ' ' << i;
            n /= i;
        }
    }
    if (n != 1)
        cout << ' ' << n;
}
int main()
{
    int n;
    cin >> n;

    cout << n << ':';
    printPrimeFactor(n);
    cout << endl;
    return 0;
}