#include<cstdio>
#include<iostream>
using namespace std;
void exgcd(int a,int b,int &x,int &y)
{
	int d=a;
	if(b!=0)
	{
		exgcd(b,a%b,y,x);
		y=y-(a/b)*x;
	}
	else
	{
		x=1;
		y=0;
	}
}
int main()
{
	int b=9973;
	int x,y,t,n,a;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&a);
		exgcd(a,b,x,y);
		x=(n*x)%b;
		x=(x%b+b)%b;
		printf("%d\n",x);
	}
	return 0;
}