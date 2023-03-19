#include <bits/stdc++.h>
using namespace std;
long long a[100001];

int main()
{
    long long n,m;
    cin >> n;
    for (long long  i = 1;i <= n;i++) cin >> a[i];
    // scanf("%ld",&m);
    cin >> m;
    // cout << m;
    sort(a+1,a+n+1);
    long long l = 1,r = n,mid;
    while (l <= r)
    {
        mid = (l+r)/2;
        if (a[mid] > m)
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    long long s1 = a[r],s2 = a[r+1];
    if (s1 == m) s1 = a[r-1];
    if (m-s1 == abs(m-s2)) printf("%lld",s1);
    else if (m-s1 > abs(m-s2)) printf("%lld",s2);
    else printf("%lld",s1);
    return 0;
}
