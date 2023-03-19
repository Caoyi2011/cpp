#include <bits/stdc++.h>
using namespace std;
int a[101];
int main()
{
    int n;
    scanf("%d",&n);
    int jg = 0,yx = 0;
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
        if (a[i] >= 60) jg++;
        if (a[i] >= 85) yx++;
    }
    cout << (int)((jg*100.0)/n+0.5) << "%" << endl << (int)((yx*100.0)/n+0.5) << "%";
    return 0;
}