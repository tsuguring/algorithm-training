#include <iostream>
#include <vector>
using namespace std;

class UnionFind
{
public:
    vector<long long> par;
    vector<long long> siz;
    UnionFind(long long sz_) : par(sz_), siz(sz_, 1)
    {
        for (long long i = 0; i < sz_; ++i)
            par[i] = i;
    }

    void init(long long sz_)
    {
        par.resize(sz_);
        siz.assign(sz_, 1);
        for (long long i = 0; i < sz_; ++i)
            par[i] = i;
    }

    long long root(long long x)
    {
        while (par[x] != x)
        {
            x = par[x] = par[par[x]];
        }
        return x;
    }

    bool merge(long long x, long long y)
    {
        x = root(x);
        y = root(y);
        if (x == y)
            return false;
        if (siz[x] < siz[y])
            swap(x, y);
        siz[x] += siz[y];
        par[y] = x;
        return true;
    }

    bool issame(long long x, long long y)
    {
        return root(x) == root(y);
    }

    long longsize(long long x)
    {
        return siz[root(x)];
    }
};

int main()
{
    int n, q;
    cin >> n >> q;
    UnionFind UF(n);
    for (int i = 0; i < q; i++)
    {
        int com, x, y;
        cin >> com >> x >> y;
        if (com)
            cout << UF.issame(x, y) << endl;
        else
            UF.merge(x, y);
    }
    return 0;
}