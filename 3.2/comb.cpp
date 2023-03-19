#include <bits/stdc++.h>
using namespace std;

long long jc(long long a)
{
    long long c = 1;
    for (int i = 1;i <= a;i++) c *= i;
    return c; 
}

long long zhs(long long n,long long m)
{
    return jc(n)/(jc(m)*jc(n-m));
}

int main()
{
    freopen("comb.in","r",stdin);
    freopen("comb.out","w",stdout);
    int n,m;
    cin >> n >> m;
    long long ans = zhs(n,m);
    cout << ans;
    return 0;
}