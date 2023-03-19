#include <bits/stdc++.h>
using namespace std;

bool ss(int x)
{
    for (int i = 2;i*i <= x;i++)
    {
        if (x % i == 0) return false;
    }
    return true;
}

int main()
{
    freopen("gueff.in","r",stdin);
    freopen("gueff.out","w",stdout);
    int n;
    cin >> n;
    for (int i = 3;i <= n;i++)
    {
        if (ss(i) && ss(n-i)) 
        {
            printf("%d = %d + %d",n,i,n-i);
            break;
        }
    }
    return 0;
}