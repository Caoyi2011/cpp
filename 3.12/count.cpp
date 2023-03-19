#include <bits/stdc++.h>
using namespace std;
int num = 0;
void count(int n)
{
    num++;
    for (int i = 1;i <= n/2;i++) count(i);

}

int main()
{
    freopen("count.in","r",stdin);
    freopen("count.out","w",stdout);
    int n;
    cin >> n;
    count(n);
    cout << num;
    return 0;
}