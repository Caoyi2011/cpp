#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h,s;
    scanf("%d %d",&h,&s);
    string str = "";
    cin >> str;
    for (int i = 0;i < str.length();i++)
    {
        if (str[i] == 'u' && s != 0) 
            s--;
        if (str[i] == 'd' && s != h) 
            s++;
    }
    printf("%d",s);
    return 0;
}