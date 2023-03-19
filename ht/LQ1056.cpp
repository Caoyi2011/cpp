#include <bits/stdc++.h>
using namespace std;

int h(int s)
{
    int sum = 0;
    while (s)
    {
        sum +=s%10;
        s/=10;
    }
    return sum;
}

bool hws(int s)
{
    int a[7] = {-1,-1,-1,-1,-1,-1,-1};
    int cnt = 1;
    while (s)
    {
        a[cnt] = s%10;
        s/=10;
        cnt++;
    }
    if (a[6] == -1)
    {
        if (a[1] == a[5] && a[2] == a[4]) return true;
    }
    else 
    {
        if (a[1] == a[6] && a[2] == a[5] && a[3] == a[4]) return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 10000;i <= 999999;i++)
    {
        if (hws(i) && h(i) == n) 
        {
            cout << i << endl;
        }
    }
    // cout << hws(899998);
    return 0;
}