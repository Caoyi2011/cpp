#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    scanf("%lld",&n);
    long long cnt = 0;
    for (long long i = 1;i <= (n*18);i++)
    {
        if ((i%18) == (i%27)) cnt++;
        else
        {
            if ((i%18) == 0 && (i%27) == 18) cnt++;
        }
    }
    printf("%lld",cnt);
    return 0;
}