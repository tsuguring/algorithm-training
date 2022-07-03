#include <bits/stdc++.h>
using namespace std;
#define r(i, n) for (int i = 0; i < (n); i++)
#define r2(i, x, n) for (int i = x; i < (n); i++)
const long long l = numeric_limits<long long>::max();
int main()
{
    int X;
    cin >> X;
    int H = X < 60 ? 21 : 22;
    int M = X % 60;
    printf("%d:%02d", H, M);
    return 0;
}