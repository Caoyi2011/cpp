#include <bits/stdc++.h>
using namespace std;
struct Ckl
{
    int h,w;
}a[100000];
int main()
{
    int n,k;
    cin >> n >> k;
    for (int i = 1;i <= n;i++)
    {
        int h,w;
        cin >> h >> w;
        a[i].h = h;
        a[i].w = w; 
    }
    int ans = 0;
    for (int i = 1;i <= 100000;i++)
    {
        bool sf = true;
        for (int j = 1;j <= n;j++)
        {
            if (a[j].h >= i && a[j].w >= i) sf = true;
            else 
            {
                sf = false;
                break;
            }
        }
        if (!sf) continue;
        int r = 0;
        for (int j = 1;j <= n;j++)
        {
            r += floor(a[j].h/i) * floor(a[j].w/i);
        }
        if (r >= k) ans = i;
        else break;
    }
    // cout << floor(sqrt((sum/10)));
    cout << ans;
    return 0;
}