#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "";
    cin >> a;
    for (int i = 0;i < a.length();i++)
    {
        if (a[i] >= 97 && a[i] <= 122)
            a[i] -= 32;
    }
    int num = 0;
    for (int i = 0;i <= a.length()-6;i++)
    {
        string str = "";
        for (int j = i;j <= i+6;j++)
        {
            str += a[j];
        }
        // cout << str;
        if (str == "LANQIAO") 
        {
            num++;
            // cout << "      yes";
        }
        // cout << endl;
    }
    printf("%d",num);
    return 0;
}