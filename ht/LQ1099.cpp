#include <bits/stdc++.h>
using namespace std;

struct C
{
    int s,j;
}a[51];

bool cmp(C a,C b)
{
    // if (a.j == b.j) return a.s < b.s;
    // else return a.j > b.j;
    return (a.j/(a.s*1.0)) > (b.j/(b.s*1.0));
    // return ((a.s*1.0)/a.j) < ((b.s*1.0)/b.j);
}

int main()
{
    int t,m;
    scanf("%d %d",&t,&m);
    for (int i = 1;i <= m;i++) scanf("%d %d",&a[i].s,&a[i].j);
    sort(a+1,a+m+1,cmp);
    int sum = 0;
    for (int i = 1;i <= m;i++)
    {
        // for (int k = 1;k <= m;k++)
        // {
            if ((t-a[i].s) >= 0)
            {
                sum += a[i].j;
                t -= a[i].s;
            }
        //     else break;
        // }
    }
    printf("%d",sum);
    return 0;
}