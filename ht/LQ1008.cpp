#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ts = 108,sl = 18,cs = 20;
    int zz = 0,qt = 0,c = 0;
    for (int i = 0;i <= sl;i++)
    {
        for (int j = 0;j <= sl;j++)
        {
            zz = i;
            qt = j;
            c = 18-zz-qt;
            if (((zz*8)+(qt*6)+(c*6)) == ts && ((zz*0)+(qt*2)+(c*1)) == cs)
            {
                printf("%d\n%d\n%d",zz,qt,c);
                break;
            }
        }
    }
    return 0;
}