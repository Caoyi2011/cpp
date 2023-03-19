#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int sum = 0;
    if(str[0] == 'D') sum += 30;
    if(str[1] == 'C') sum += 30;
    if(str[2] == 'B') sum += 30;
    if(str[3] == 'A') sum += 30;
    if(str[4] == 'D') sum += 30;
    printf("%d",sum);
    return 0;
}