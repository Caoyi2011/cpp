#include <bits/stdc++.h>
using namespace std;
int p[1001][11];

int main()
{
    int n,m,x = 10;
    scanf("%d %d",&m,&x);
    for (int i = 1;i <= n;i++)
    {
        // scanf("%d",&x);
        cin >> x;
        int cnt = m;
        while (x)
        {
            p[i][cnt] = x%10;
            x/=10;
            cnt--;
        }
    }
    // int cnt = m;
    // while (x)
    // {
    //     p[1][cnt] = x%10;
    //     x/=10;
    //     cnt--;
    // }
    return 0;
}