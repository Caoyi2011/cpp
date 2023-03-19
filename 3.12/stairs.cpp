#include <bits/stdc++.h>
using namespace std;

int w(int n)
{
    if (n == 1) return 1;
    if (n == 2) return 2;
    return w(n-1) + w(n-2);
}

int main()
{
    freopen("stairs.in","r",stdin);
    freopen("stairs.out","w",stdout);
    int n;
    cin >> n;
    cout << w(n);
    return 0;
}