#include <bits/stdc++.h>
using namespace std;

bool hws(int x)
{
    int f = 0,z = x;
    while (x)
    {
        f = f*10+x%10;
        x/=10;
    }
    return f == z;
}

int main()
{
    freopen("hws.in","r",stdin);
    freopen("hws.out","w",stdout);
    int n;
    cin >> n;
    int num = 0;
    for (int i = 1;i <= n;i++)
    {
        if (hws(i)) 
        {
            num++;
            // cout << i << " ";
        }
    }
    cout  << num;
    return 0;
}