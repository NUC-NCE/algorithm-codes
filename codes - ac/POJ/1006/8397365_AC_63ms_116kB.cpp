#include<iostream>
using namespace std;
int a[4];
int m[4];
int exgcd(int a,int b,int &x,int &y)
{
	int d=a;
	if(b!=0)
	{
		d=exgcd(b,a%b,y,x);
		y=y-(a/b)*x;
	}
	else
	{
		x=1;
		y=0;
	}
	return d;
}
int CRT(int a[],int m[],int n)  
{  
    int M = 1;  
    int ans = 0;  
    for(int i=1; i<=n; i++)  
        M *= m[i];  
    for(int i=1; i<=n; i++)  
    {  
        int x, y;  
        int Mi =M / m[i];  
        exgcd(Mi, m[i], x, y);  
        ans = (ans + Mi * x * a[i]) % M;  
    }  
    if(ans < 0) ans += M;  
    return ans;  
}  

 int main()
 {
 	int x,c,z,d,w=0;
 	m[1]=23;
 	m[2]=28;
 	m[3]=33;
 	while(~scanf("%d %d %d %d",&z,&x,&c,&d))
 	{
 		if(z==-1&&x==-1&&c==-1&&d==-1)
 			break;
 		w=w+1;
 		a[1]=z;
 		a[2]=x;
 		a[3]=c;
 		int p=CRT(a,m,3);
 		if(p<=d)
 			p+=21252;
 		printf("Case %d: the next triple peak occurs in %d days.\n",w,p-d);
	 }
	 return 0;
 }