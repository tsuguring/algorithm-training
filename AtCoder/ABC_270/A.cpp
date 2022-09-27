#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;
int main()
{
    int a, b;
    cin >> a >> b;

    if (a == 1)
    {
        if (b == 6 or b == 7)
            cout << 7 << endl;
        else if (b == 2 or b == 3)
            cout << 3 << endl;
        else if (b == 4 or b == 5)
            cout << 5 << endl;
        else
            cout << 1 << endl;
    }
    else if (a == 2)
    {
        if (b == 5 or b == 7)
            cout << 7 << endl;
        else if (b == 1 or b == 3)
            cout << 3 << endl;
        else if (b == 4 or b == 6)
            cout << 6 << endl;
        else
            cout << 2 << endl;
    }
    else if (a == 3)
    {
        if (b == 4 or b == 7)
            cout << 7 << endl;
        else
            cout << 3 << endl;
    }
    else if (a == 4)
    {
        if (b == 3 or b == 7)
            cout << 7 << endl;
        else if (b == 1 or b == 5)
            cout << 5 << endl;
        else if (b == 2 or b == 6)
            cout << 6 << endl;
        else
            cout << 4 << endl;
    }
    else if (a == 5)
    {
        if (b == 2 or b == 3 or b == 6 or b == 7)
            cout << 7 << endl;
        else
            cout << 5 << endl;
    }
    else if (a == 6)
    {
        if (b == 1 or b == 3 or b == 5 or b == 7)
            cout << 7 << endl;
        else
            cout << 6 << endl;
    }
    else if (a == 7)
    {
        cout << 7 << endl;
    }
    else
    {
        cout << b << endl;
    }
    return 0;
}