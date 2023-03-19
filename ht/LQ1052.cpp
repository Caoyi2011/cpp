#include <bits/stdc++.h>
using namespace std;
int a[1001];
int main()
{
    int n,k;
    cin >> n;
    for (int i = 1;i <= n;i++) cin >> a[i];
    cin >> k;
    for (int i = 1;i <= n;i++)
    {
        if (a[i] == k) 
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}