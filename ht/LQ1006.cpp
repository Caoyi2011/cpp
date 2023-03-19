#include <bits/stdc++.h>
using namespace std;

bool hws(int s)
{
    int th = s;
    int jh = 0;
    while (th)
    {
        jh = jh*10+(th%10);
        th /= 10;
    }
    if (jh == s) return true;
    else return false;
}

bool ss(int s)
{
    if (s == 1) return false;
    for (int i = 2;i < s;i++)
    {
        if (s%i == 0) 
            return false;
    }
    return true;
}

int main()
{
    int n;
    scanf("%d",&n);
    if (hws(n))
    {
        printf("yes");
        // if (ss(n)) printf("yes");
        // else printf("no");
    }
    else printf("no");
    return 0;
}