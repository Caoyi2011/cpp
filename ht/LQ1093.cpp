#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    if (a+b > c && a+c > b && b+c > a) cout << "yes";
    else cout << "no";
    return 0;
}