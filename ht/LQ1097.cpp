#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    for (int i = 4;i <= n;i++)
    {
        if (i%2 == 0) sum += i;
        else for (int j = 2;j <= i-1;j++)
        {
            if (i%j == 0)
            {
                sum += i;
                break;
            }
        }
    }
    printf("%d",sum);
}