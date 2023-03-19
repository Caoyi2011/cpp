#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];

long long js(int x,int y,int s,int t)
{
    int sum = 0;
    for (int i = x;i <= x+s-1;i++)
        for (int j = y;j <= y+t-1;j++)
            sum += a[i][j];
    return sum;
}

int main()
{
    int n,m,s,t;
    cin >> n >> m >> s >> t;
    for (int i = 1;i <= n;i++)
        for (int j = 1;j <= m;j++) cin >> a[i][j];
    
    long long minn = 1000000000;
    for (int i = 1;i <= n-s+1;i++)
        for (int j = 1;j <= m-t+1;j++)
            minn = min(js(i,j,s,t),minn);
    cout << minn;
    return 0;
}