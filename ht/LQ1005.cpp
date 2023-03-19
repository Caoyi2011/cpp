#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int sum = 6;
    for (int i = 1950;i <= n;i++)
    {
        if ((i%4 == 0 && i%100!= 0) || i%400 == 0) sum += 366;
        else sum += 365;
    }
    printf("%d",(sum%7));
    return 0;
}