#include<bits/stdc++.h>
using namespace std;

int f(int n,int m)
{
	if(n>m) return 0;
	if(n==m) return 1;
	return f(n+1,m)+f(n+2,m);
}

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int num = f(n,m);
	printf("%d",num);
    return 0;
}