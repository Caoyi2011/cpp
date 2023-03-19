#include <bits/stdc++.h>
using namespace std;
int a[5001];
int main()
{
    int n;
    scanf("%d",&n);
    int maxx = -10001,minn = 10001,sum = 0;
    for (int i = 1;i <= n;i++)
    {
        scanf("%d",&a[i]);
        maxx = max(maxx,a[i]);
        minn = min(minn,a[i]);
        sum += a[i];
    }
    printf("%d\n%d\n%d",maxx,minn,sum);
    return 0;
}