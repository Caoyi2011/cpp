#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int num = 0;
    for (int i = 1;i < n;i++)
    {
        int sum = 0;    
        for (int j = 1;j < i;j++)
        {
            if (i%j == 0) sum += j;
        }
        if (sum == i) 
        {
            printf("%d\n",i);
            num++;
        }
    }
    printf("%d",num);
    return 0;
}