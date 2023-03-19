#include <bits/stdc++.h>
using namespace std;
struct Apple
{
    int gd,lq;
};
Apple z[5001];
bool cmp(Apple x,Apple y)
{
    return x.lq<y.lq;
}
int main()
{
    int n,s,a,b;
    scanf("%d %d\n%d %d",&n,&s,&a,&b);
    for (int i = 1;i <=n;i++) scanf("%d %d",&z[i].gd,&z[i].lq);
    sort(z+1,z+n+1,cmp);
    int ans = 0;
    for (int i = 1;i <= n;i++)
    {
        if (z[i].gd <= (a+b) && z[i].lq <= s)
        {
            s -= z[i].lq;
            ans++;
        }
        if (s <= 0) break;
    }
    printf("%d",ans);
    return 0;
}