#include <bits/stdc++.h>
using namespace std;
int a[10001],qzh[10001];
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1;i <= n;i++) scanf("%d",&a[i]);
    sort(a+1,a+n+1);
    long long sum = 0;
    for (int i = 1;i <= n;i++)
    {
        qzh[i] = qzh[i-1] + a[i];
        cout << qzh[i] << " ";
    }
    return 0;
}