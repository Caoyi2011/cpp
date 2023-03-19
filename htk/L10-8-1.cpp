#include <bits/stdc++.h>
using namespace std;
vector<int> a[1001];
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for (int i = 1;i <= m;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for (int i = 1;i <= 1000;i++)
    {
        if (a[i].size() > 0)
        {
            sort(a[i].begin(),a[i].end());
            cout << a[i].size() << " ";
            for (int j = 0;j < (a[i].size()-1);j++) 
            {
                cout << a[i][j] << " ";
            }
            cout << a[i][(a[i].size()-1)];
            cout << endl;
        }
    }
    return 0;
}