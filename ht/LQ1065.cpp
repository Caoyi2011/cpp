#include <bits/stdc++.h>
using namespace std;

long long f(int x, int y, int jx, int jy)
{

	if (x > jx || y > jy)
		return 0;
	if (x == jx || y == jy)
		return 1;
	return f(x + 1, y, jx, jy) + f(x, y + 1, jx, jy);
}

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%lld",f(0, 0, x - 1, y - 1));
	return 0;
}

// int f2(int x,int y,int jx,int jy)
// {
//     int n1 = 0,n2 = 1;
//     for (int x = 1,y = 1;1==1;x++,y++)
//     {

//     }
// }