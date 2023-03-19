#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    if (a*a > b*c) cout << "SQUARE";
    else if (a*a < b*c) cout << "RECTANGLE";
    else cout << "SAME";
    return 0;
}