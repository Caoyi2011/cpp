#include <bits/stdc++.h>
using namespace std;
struct Dt
{
	int a, b, x, y;
} d[10001];
int main()
{
	freopen("carpet.in","r",stdin);
    freopen("carpet.out","w",stdout);
	int n, xn, yn, di = -1;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> d[i].a >> d[i].b >> d[i].x >> d[i].y;
	cin >> xn >> yn;
	for (int i = 1; i <= n; i++)
	{
		if (xn >= d[i].a && xn <= d[i].a + d[i].x && yn >= d[i].b && yn <= d[i].b + d[i].y) di = i;
	}
	cout << di;
	return 0;
}