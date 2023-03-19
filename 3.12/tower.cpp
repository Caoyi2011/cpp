#include <bits/stdc++.h>
using namespace std;

void mov(int n,char a,char b,char c)
{
    if (n == 1) cout << a << "->" << c << endl;
    else
    {
        mov(n-1,a,c,b);
        cout << a << "->" << c << endl;
        mov(n-1,b,a,c); 
    }
}

int main()
{
    freopen("tower.in","r",stdin);
    freopen("tower.out","w",stdout);
    int n;
    cin >> n;
    mov(n,'A','B','C');
    return 0;
}