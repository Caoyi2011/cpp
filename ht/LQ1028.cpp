#include <bits/stdc++.h>
using namespace std;
int a[21][21];  
int main()
{
    int n;
    scanf("%d",&n);
    a[1][1] = 1;
    printf("%d\n",a[1][1]);
    for (int i = 2;i <= n;i++)
    {
        for (int j = 1;j <= i;j++)
        {
            a[i][j] = a[i-1][j]+a[i-1][j-1];
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}