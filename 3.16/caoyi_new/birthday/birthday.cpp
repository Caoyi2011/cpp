#include <bits/stdc++.h>
using namespace std;
struct Stu
{
	string name;
    int month,day;
    bool yg = false;
} a[181];

bool cmp(Stu a,Stu b)
{
    if (a.month != b.month) return a.month < b.month;
    else if (a.day != b.day) return a.day < b.day;
    else if ((a.name).length() != (b.name).length()) return (a.name).length() < (b.name).length();
    else return a.name < b.name;
}

/* 

*/

int main()
{
	// freopen("birthday.in","r",stdin);
    // freopen("birthday.out","w",stdout);
	int n;
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> a[i].name >> a[i].month >> a[i].day;
    }
    sort(a+1,a+n+1,cmp);
    bool ym = false;
    for (int i = 1;i <= n;i++)
    {
        bool sf = false;
        if (a[i].yg) continue;
        a[i].yg = true;
        int num = 0;
        for (int j = i+1;j <= n;j++)
        {
            if (a[j].month == a[i].month && a[j].day == a[i].day)
            {
                ym = true;
                num++;
                if (!sf)
                {
                    sf = true;
                    cout << a[i].month << " " << a[i].day << " " << a[i].name << " ";
                }
                cout << a[j].name << " ";
                a[j].yg = true;
            }
        }
        if (num > 0) cout << endl;
    }
    if (!ym) cout << "None";
    return 0;
}