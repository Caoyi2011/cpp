#include <bits/stdc++.h>
using namespace std;
int num = 0;
void cheak(int n)
{
    if (n == 24) num++;
}
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    cheak(a + b + c + d);
    cheak(a + b + c - d);
	cheak(a + b + c * d);
	cheak(a + b - c + d);
	cheak(a + b - c - d);
	cheak(a + b - c * d);
	cheak(a + b * c + d);
	cheak(a + b * c - d);
	cheak(a + b * c * d);
    cheak(a - b + c + d);
    cheak(a - b + c - d);
	cheak(a - b + c * d);
	cheak(a - b - c + d);
	cheak(a - b - c - d);
	cheak(a - b - c * d);
	cheak(a - b * c + d);
	cheak(a - b * c - d);
	cheak(a - b * c * d);
    cheak(a * b + c + d);
    cheak(a * b + c - d);
	cheak(a * b + c * d);
	cheak(a * b - c + d);
	cheak(a * b - c - d);
	cheak(a * b - c * d);
	cheak(a * b * c + d);
	cheak(a * b * c - d);
	cheak(a * b * c * d);
    cout << num;
    return 0;
}