#include <bits/stdc++.h>
using namespace std;
int a[51];
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1;i <= n;i++) scanf("%d",&a[i]);
    int c1 = 0,c2 = 0,c3 = 0;
    int zc1 = 0,zc2 = 0,zc3 = 0;
    int b = 1;
    while(b<=n)
    {
        if (c1 == 0)
        {
            c1+=a[b];
            zc1+=a[b];
            b++;
        }
        if (c2 == 0)
        {
            c2+=a[b];
            zc2+=a[b];
            b++;
        }
        if (c3 == 0)
        {
            c3+=a[b];
            zc3+=a[b];
            b++;
        }
        c1--;
        c2--;
        c3--;
    }
    printf("%d",min(zc1,min(zc2,zc3)));
    return 0;
}