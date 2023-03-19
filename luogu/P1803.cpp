#include <bits/stdc++.h>
using namespace std;
struct Ks
{
    long long l,r;
}a[1000001];

bool cmp(Ks a,Ks b)
{
    return a.r < b.r;
}

int main()
{
    long long n;
    scanf("%lld",&n);
    for (int i = 1;i <= n;i++) scanf("%lld %lld",&a[i].l,&a[i].r);
    sort(a+1,a+n+1,cmp);
    long long ans = 1;
    long long q = 1;
    for (int i = 2;i <= n;i++)
    {
        if (a[i].l < a[q].r) continue;
        ans++;
        q = i;
    }
    printf("%lld",ans);
    return 0;
}

