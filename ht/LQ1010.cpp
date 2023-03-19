#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int jb = 1;jb <= 5;jb++)
    {
        for (int js = 0;js <= 5;js++)
        {
            if (jb == js) continue;
            for (int jg = 0;jg <= 5;jg++)
            {
                if (jg == js || jg == jb) continue;
                int jj = jb*100+js*10+jg;

                for (int tb = 1;tb <= 5;tb++)
                {
                    if (tb == jg || tb == js || tb == jb) continue;
                    for (int ts = 0;ts <= 5;ts++)
                    {
                        if (tb == ts || ts == jg || ts == js || ts == jb) continue;
                        for (int tg = 0;tg <= 5;tg++)
                        {
                            if (tg == ts || tg == jg || tg == js || tg == jb) continue;
                            int tj = tb*100+ts*10+tg;
                            if (jj/2 == tj/4 && jj%2 == 0 && tj%4 == 0) printf("%d %d\n%d %d\n\n",jj/2,tj/4,jj,tj);
                        }
                    }
                }

            }
        }
    }
    return 0;
}