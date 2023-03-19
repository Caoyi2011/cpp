#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d %d",&n);
    if (n%2 == 1) printf("%d",n/2+1);
    else printf("%d",n/2);
    return 0;
}