#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    long long ans;
    if (a % b)
        ans = (a / b) + 1;
    else
        ans = a / b;
    cout << ans << endl;
    return 0;
}