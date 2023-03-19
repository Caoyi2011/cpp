#include<bits/stdc++.h>
using namespace std;
int a[30];
int main()
{
    int n;
    scanf("%d",&n);
    int x = 2;
    while (x <= n)
    {
        a[x] = x;
        n -= x;
        x++;
    }
    if (n == x - 1) a[x - 1]++;
    for (int i = x - 1; n >= 1 && i >= 2; i--)
    {
        a[i]++;
        n--;
    }
    int ans = 1;
    for (int i = 2; i < x; i++) ans *= a[i];
    printf("%d",ans);
    return 0;
}