#include <bits/stdc++.h>
using namespace std;
int a[5];
int main()
{
    int s;
    scanf("%d",&s);
    int cnt = 1;
    while (s)
    {
        a[cnt] = s%10;
        s/=10;
        cnt++;
    }
    for (int i = 1;i <= 4;i++)
    {
        a[i] = (a[i]+5)%10;
    }
    for (int i = 1;i <= 4;i++) printf("%d",a[i]);
    return 0;
}