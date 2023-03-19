#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long h,a,b;
    scanf("%lld %lld %lld",&h,&a,&b);
    long long sum = 0,num = 0;
    while (sum < h)
    {
        sum +=a;
        if (sum >= h) 
        {
            num++;
            break;
        }
        sum -=b;
        num++;
    }
    printf("%lld",num);
    return 0;
}