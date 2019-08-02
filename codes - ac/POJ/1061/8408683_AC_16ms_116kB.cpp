#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
long long extgcd(long long a,long long b,long long &x,long long &y)
{
	long long d=a;
	if(b!=0)
	{
		d=extgcd(b,a%b,y,x);
		y-=(a/b)*x;
	}
	else
	{
		x=1;y=0;
	}
	return d;
 } 
 int main()
 {
 	long long x,y,m,n,l;
 	long long X,Y,d,r;
 	while(~scanf("%lld %lld %lld %lld %lld",&x,&y,&m,&n,&l))
 	{
 		d=extgcd(n-m,l,X,Y);
 		r=l/d;
 		if((x-y)%d)
 			printf("Impossible\n");
 		else
 			printf("%lld\n",((x-y)/d*X%r+r)%r);
	 }
	 return 0;
 }