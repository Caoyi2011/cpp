#include <bits/stdc++.h>
using namespace std;
int a[4];
int main()
{
    for (int i = 100;i <= 999;i++)
    {
    
        int s = i;
        // printf("%d: %d%d%d s: %d \n",i,a[1],a[2],a[3],s);
        int cnt = 1;
        while (s)
        {
            a[cnt] = s % 10;
            s/=10;
            cnt++;
        }
        
        if (a[1] > a[3] && a[3] > a[2])
        {
            int j = a[1]+a[2]+a[3];
            int c = a[1]*a[2]*a[3];
            if (j == c) printf("%d",i);
        }
    }
    return 0;
}