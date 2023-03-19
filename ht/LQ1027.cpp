#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    if (n%12 == 0) printf("monkey");
    if (n%12 == 1) printf("rooster");
    if (n%12 == 2) printf("dog");
    if (n%12 == 3) printf("pig");
    if (n%12 == 4) printf("rat");
    if (n%12 == 5) printf("ox");
    if (n%12 == 6) printf("tiger");
    if (n%12 == 7) printf("rabbit");
    if (n%12 == 8) printf("dragon");
    if (n%12 == 9) printf("snake");
    if (n%12 == 10) printf("horse");
    if (n%12 == 11) printf("sheep");
    return 0;
}