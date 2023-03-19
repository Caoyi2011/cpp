#include <bits/stdc++.h>
using namespace std;
int a[5001];
int main()
{
    int n;
    scanf("%d",&n);
    int maxx = -10001,minn = 10001,sum = 0;
    double p = 0;
    for (int i = 1;i <= n;i++)
    {
        scanf("%d",&a[i]);
        maxx = max(maxx,a[i]);
        minn = min(minn,a[i]);
        sum += a[i];
    }
    p = (sum*1.0)/(n*1.0);
    int num = 0;
    for (int i = 1;i <= n;i++)
    {
        if (a[i] > p-2 && a[i] < p+2) num++;
    }
    printf("%d\n%d\n%d\n%.2f\n%d\n",maxx,minn,sum,p,num);
    return 0;
}