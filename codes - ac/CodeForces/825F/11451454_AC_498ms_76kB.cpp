#include<bits/stdc++.h>
using namespace std;
const int max_n=8*(1e3)+10;
char A[max_n];
int n,dp[max_n];
int net[max_n];
int numm(int x)
{
	int ret=0;
	while(x)
	{
		x/=10;
		ret+=1;
	}
	return ret;
}
void Build_Next(char *p)
{
	memset(net,0,sizeof(net));
	int j=0,k=-1,n=strlen(p);
	net[0]=-1;
	while(j<n)
	{
		if(p[j]==p[k]||k==-1)
		{
			j++;k++;
			net[j]=k;
		}
		else
		k=net[k];
	}
	return ;
}
int strpress()
{
	int i,j;dp[0]=0;
	for(i=0;i<=n;i++)
	{
		Build_Next(A+i);
		for(j=i+1;j<=n;j++)
		{
			int len=j-i;
			int d=len-net[len];
			int num=len%d==0?len/d:1;
			dp[j]=min(dp[j],dp[i]+len/num+numm(num));		
		}	
	}	
	return dp[n];
}
int main()
{
	while(gets(A)!=NULL)
	{
		memset(dp,0x3f,sizeof(dp));
		n=strlen(A);
		int ret=0;
		ret=strpress();
		printf("%d\n",ret);
	}
}