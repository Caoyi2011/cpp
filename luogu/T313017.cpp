#include <bits/stdc++.h>
using namespace std;
vector<int> ssb;

bool ss(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int xb(int x)
{
    // for (int i = 0; i < ssb.size(); i++)
    // {
    //     if (ssb[i] == x)
    //         return i;
    // }
    // return -1;
    // for (int i = 0; i < ssb.size(); i++)
    // {
    //     if (ssb[i] <= x && x < ssb[i+1])
    //         return i;
    // }
    // return -1;
    int l = 0,r = ssb.size()-1;
    int mid = (l+r)/2;
    while (l<r)
    {
        mid = (l+r)/2+1;
        if (mid <= x)
        {
            l = mid;
        }
        else r = mid-1;
    }
    return mid;
}

int main()
{
    int n;
    cin >> n;
    ssb.push_back(2);
    ssb.push_back(3);
    ssb.push_back(5);
    ssb.push_back(7);
    ssb.push_back(11);
    ssb.push_back(13);
    ssb.push_back(17);
    ssb.push_back(19);
    ssb.push_back(23);
    for (int i = 25; i <= 1000000; i += 2)
    {
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0 || i % 11 == 0 || i % 13 == 0 || i % 17 == 0 || i % 19 == 0 || i % 23 == 0) continue;
        if (ss(i))
        {
            ssb.push_back(i);
        }
    }

    for (int i = 1;i <= n;i++)
    {
        int a;
        cin >> a;
        for (int j = xb(a);j >= 0;j--)
        {
            if (a%ssb[j] == 0) {
                printf("%d\n",j+1);
                break;
            }
        }
    }
    return 0;
}