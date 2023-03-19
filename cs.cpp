// #include <iostream>
// using namespace std;
// int n, flag[105], a[105];
// void build(int step)
// {
//     if (step == n+1)
//     {
//         for (int i = 1;i <= n;i++)
//         {
//             if (flag[i] == 1)
//                 cout << a[i] << " ";
//         }
//         cout << endl;
//         return;
//     }
//     flag[step] = 1;
//     build(step+1);
//     flag[step] = 0;
//     build(step+1);
// }
// int main()
// {

//     cin >> n;
//     for (int i = 1; i <= n; i++)
//         a[i] = i;
//     build(1);
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int n, m, flag[105], a[105], num;
// void build(int step)
// {
//     if (step == n+1)
//     {
//         for (int i = 1;i <= n;i++)
//         {
//             if (num == m)
//             {
//                 if (flag[i] == 1)
//                     cout << a[i] << " ";
//                 cout << endl;
                
//             }
//         }
        
//         return;
//     }
//     if (num > m)
//     {
//         return;
//     }
//     num++;
//     flag[step] = 1;
//     build(step + 1);
//     num--;
//     flag[step] = 0;
//     build(step + 1);
// }
// int main()
// {

//     cin >> n >> m;
//     for (int i = 1; i <= n; i++)
//         a[i] = i;
//     build(1);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int a[4];

int main()
{
    while (a[1] != 1)
    {
        a[4]++;
        if (a[4] == 1000) {a[3]++;a[4] = 0;}
        if (a[3] == 60) {a[2]++;a[3] = 0;}
        if (a[2] == 60) {a[1]++;a[2] = 0;}
        if (a[1] == 24) {a[0]++;a[1] = 0;}
        cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << " " << endl;
    }
    
    return 0;
}