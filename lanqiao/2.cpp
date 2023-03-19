#include <bits/stdc++.h>
using namespace std;

bool cheak(int s)
{
    while (s)
    {
        if ((s%10) % 2 == 0) {
            return false;
        }
        s/=10;
    }
    return true;
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int num = 0;
    for (int i = n;i <= m;i++)    {
        if (i%2 == 0) continue; 
        else {
            if (cheak(i)) num++;
        }
    }
    printf("%d",num);
    return 0;
}