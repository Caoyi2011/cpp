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
    freopen("couprime.in","r",stdin);
    freopen("couprime.out","w",stdout);
    int n;
    cin >> n;
    int num = 0;
    for (int i = 2;i <= n;i++)
    {
        if (ss(i)) 
        {
            num++;
            // cout << i << " ";
        }
    }
    cout << num;
    return 0;
}