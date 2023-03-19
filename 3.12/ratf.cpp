#include <bits/stdc++.h>
using namespace std;
long num = 0,n,k;
void r(long n)
{
    if (n <= k || (n+k)%2 != 0)
    {
        num++;
        return;
    }
    r((n+k)/2);
    r((n-k)/2);
}

int main()
{
    // freopen("ratf.in","r",stdin);
    // freopen("ratf.out","w",stdout);
    long n,k;
    cin >> n >> k;
    r(n);
    cout << num;
    return 0;
}