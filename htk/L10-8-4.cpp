#include <bits/stdc++.h>
using namespace std;

struct S
{
    int l,r;
}a[101];

void xian(int x)
{
    cout << x << " ";
    if (a[x].l != 0) xian(a[x].l);
    if (a[x].r != 0) xian(a[x].r);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) cin >> a[i].l >> a[i].r;
    xian(1);
    return 0;
}