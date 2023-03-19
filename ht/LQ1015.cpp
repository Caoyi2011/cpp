#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 0;
    for (int i = 10000;i <= 99999;i++)
    {
        int th = i;
        bool y = true;
        while (th)
        {
            if (th%10 == 4)
            {
                y = false;
                break;
            }
            th /= 10;
        }
        if (y) num++;
    }
    printf("%d",num);
    return 0;
}