#include <bits/stdc++.h>
using namespace std;

void zyz(int n,int p)
{
    if (n == 1) return;
    else if (n%p == 0) {cout << p << " ";zyz(n/p,p);}
    else zyz(n,p+1);
}

int main()
{
    freopen("zyz.in","r",stdin);
    freopen("zyz.out","w",stdout);
    int n;
    cin >> n;
    zyz(n,2);
    return 0;
}