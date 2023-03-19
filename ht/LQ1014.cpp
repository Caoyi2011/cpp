#include <bits/stdc++.h>
using namespace std;

bool cheak(string x, string y)
{
    for (int i = 0; i <= x.length(); i++)
    {
        if (x[i] >= 97 && x[i] <= 122)
            x[i] -= 32;
        if (y[i] >= 97 && y[i] <= 122)
            y[i] -= 32;
    }
    if (x == y)
        return true;
    else
        return false;
}

int main()
{
    string a = "", b = "";
    cin >> a >> b;
    if (a.length() == b.length())
    {
        if (a == b)
            printf("%d", 2);
        else
        {
            if (cheak(a,b))
                printf("%d", 3);
            else
                printf("%d", 4);
        }
    }
    else
        printf("%d", 1);
    return 0;
}