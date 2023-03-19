#include <bits/stdc++.h>
using namespace std;
int a[31][31];
int n,m;
int d(int yk,int yw,int k,int w,int s)
{
    if (a[k][w] == 0) return 0;
    if (a[k][w] == 1)
    {
        if (s == 1) return abs(yk-(k-1));
        if (s == 0) return abs(yw-(w-1));
    }
    return d(yk,yw,k+1,w,1)*d(yk,yw,k,w+1,0);
}

int main()
{
        
    scanf("%d %d",&n,&m);
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= m;j++) 
        {
            int x;
            cin >> x;
            a[i][j] = 1-x;
        }
    }
    int maxx = 1;
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= m;j++)
        {
            if (a[i][j] == 1) maxx = max(maxx,d(i,j,i,j,-1));
        }
    }
    printf("%d",maxx);
    return 0;
}