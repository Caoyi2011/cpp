#include <bits/stdc++.h>
using namespace std;
int a[101];
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1;i <= n;i++) scanf("%d",&a[i]);
    int x;
    scanf("%d",&x); 
    int h = a[n];   
    for (int i = n-1;i >= x;i--)
    {  
        swap(a[i],a[i+1]);
    }
    a[x] = h;
    for (int i = 1;i <= n;i++) printf("%d ",a[i]);
    return 0;
}