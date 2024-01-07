#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
using ll = long long;

#define MAX 1e5
void writeIsPrime(vector<bool> &isPrime)
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= isPrime.size(); i++)
    {
        if (!isPrime[i])
            continue;
        for (int j = i * 2; j <= isPrime.size(); j += i)
        {
            isPrime[j] = false;
        }
    }
}

int main()
{
    int q;
    cin >> q;
    vector<bool> isPrime(MAX + 1, true);
    writeIsPrime(isPrime);
    vector<int> sumLike2017(MAX + 1, 0);
    rep2(i, 2, sumLike2017.size())
    {
        sumLike2017[i] = sumLike2017[i - 1];
        if (isPrime[i] and isPrime[(i + 1) / 2])
            sumLike2017[i] += 1;
    }
    rep(i, q)
    {
        int l, r;
        cin >> l >> r;
        cout << sumLike2017[r] - sumLike2017[l - 1] << endl;
    }
    return 0;
}