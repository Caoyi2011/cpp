#include <bits/stdc++.h>
using namespace std;
struct P
{
    long long t,bh;
}a[1001];

bool cmp(P a,P b)
{
    return a.t < b.t;
}

long long qzh[1001];
int main()
{
    long long n;
    long long sum = 0;
    scanf("%d",&n);
    for (int i = 1;i <= n;i++) 
    {
        scanf("%lld",&a[i].t);
        a[i].bh = i;
        
        // sum += a[i].t;
    }
    sort(a+1,a+n+1,cmp);

    for (int i = 1;i <= n;i++) 
    {
        printf("%lld ",a[i].bh);
        qzh[i] = qzh[i-1]+a[i].t;
        sum += qzh[i-1];
    }
    // printf("\n");
    // for (int i = 0;i <= n;i++) printf("%lld ",qzh[i]);
    double ans = sum/(n*1.0);
    printf("\n%.2f",ans);
    return 0;
}

