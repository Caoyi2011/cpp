#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "";
    cin >> a;
    long long sum = 0;
    for (int i = 0;i < a.length();i++) 
    {
        sum += a[i]-'0';
    }
    printf("%lld",sum);
    return 0;
}