#include <bits/stdc++.h>
using namespace std;
struct Z
{
    int y,bc;
}a[101];

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1;i <= n;i++) scanf("%d %d",&a[i].y,&a[i].bc);
    int sum = 0;
    a[0].y = 100000;
    a[0].bc = 100000;
    int minn = 100000,minx = 0,jl = 0;
    for (int i = 1;i <= n;i++)
    {
        minn += a[i-1].bc;
        if (a[i-1].y + a[i-1].bc < minn)
        {
            minn = a[i-1].y + a[i-1].bc;
            minx = i-1;
        }
        if (minn < a[i].y)
        {
            sum += minn;
        }
        else 
        {
            sum += a[i].y;
        }
        
    }
    printf("%d",sum);
    return 0;
}