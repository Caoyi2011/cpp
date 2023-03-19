#include <bits/stdc++.h>
using namespace std;
struct Stu
{
	int xh,yw,ss,yy,zf;
} a[301];

bool cmp(Stu a,Stu b)
{
    if (a.zf != b.zf) return a.zf > b.zf;
    else if (a.yw != b.yw) return a.yw > b.yw;
    else return a.xh < b.xh;
}

int main()
{
	freopen("scholar.in","r",stdin);
    freopen("scholar.out","w",stdout);
	int n;
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        a[i].xh = i;
        cin >> a[i].yw >> a[i].ss >> a[i].yy;
        a[i].zf = a[i].yw + a[i].ss + a[i].yy;
    }
    sort(a+1,a+n+1,cmp);
    for (int i = 1;i <= 5;i++)
    {
        cout << a[i].xh << " " << a[i].zf << endl;
    }
    return 0;
}