#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int num = 0;
    if (n%3 == 0) num = n/3;
    else
    {
        num = (n/3.0)+0.9;
        // int f = n,z = 0;
        // while (true)
        // {
        //     if (f <= 0 || z >= n) break;
        //     if (f % 2 == 0) {f+=1; z-=1; num++;}
        //     else if (f/3 >= 1) {f-=3; z+=3; num++;}
        //     else 
        //     {
        //         if (f == 2) {f+=1; z-=1; num++;}
        //         if (f == 1) {f+=1; z-=1; num++;}
        //     }
        // }
    }
    printf("%d",num);
    return 0;
}