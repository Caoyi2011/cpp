#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(int i = 100;i <= 999;i++)
    {
        int sz = i,sum = 0;
        while (sz)
        {
            sum += (sz%10) * (sz%10) * (sz%10);
            sz/=10;
        }
        if (i == sum)
        {
            cout << i << endl;
        }
    }
    return 0;
}