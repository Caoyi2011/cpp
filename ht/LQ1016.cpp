#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 60*24;
    long long sum = 0;
    for (int i = 1922;i <= 2020;i++)
    {
        if ((i%4 == 0 && i%100!= 0) || i%400 == 0) sum += t*366;
        else sum += t*365;
    }
    sum -= 22*t;
    cout << sum;
    // printf("%d",52038720);
    return 0;
}