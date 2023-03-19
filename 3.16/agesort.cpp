#include <bits/stdc++.h>
using namespace std;
int num = 0;
struct Stu
{
    string name;
    string gender;
    int year,month;
}a[15];

bool cmp(Stu a,Stu b)
{
    if (a.year != b.year) return a.year > b.year;
    else return a.month > b.month;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) cin >> a[i].name >> a[i].gender >> a[i].year >> a[i].month;
    sort(a+1,a+n+1,cmp);
    for (int i = 1;i <= n;i++) cout << a[i].name << " " << a[i].gender << " " << a[i].year << " " << a[i].month << endl;
    return 0;
}