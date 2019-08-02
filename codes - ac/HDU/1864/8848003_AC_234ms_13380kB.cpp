#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
double c[32];
double k[3];
double q;
int n,m;
char a,b;
double price;
int dp[3000500];
int main()
{
	while(cin>>q>>n)
	{
	    if(!n)
            break;
		int p=0;
		for(int i=1;i<=n;i++)
		{
			k[0]=k[1]=k[2]=0;
			cin>>m;
			double sum=0;
			int flag=1;

			for(int j=1;j<=m;j++)
			{
				cin>>a>>b>>price;
				sum+=price;
				if(a!='A'&&a!='B'&&a!='C')
				{
					flag=0;
					continue;
				}
				k[a-'A']+=price;
				if(sum>1000||k[a-'A']>600)
					flag=0;
			}
			if(flag)
				c[p++]=sum;
		}
		memset(dp,0,sizeof(dp));

		int max_n=int(q*100);
		for(int i=0;i<p;i++)
            for(int j=max_n;j>=int(c[i]*100);j--)
            {
                if(dp[j]<dp[j-int(c[i]*100)]+int(c[i]*100))
                   dp[j]=dp[j-int(c[i]*100)]+int(c[i]*100);
            }
		printf("%.2f\n",double(dp[max_n]/100.00));
	}
	return 0;
}
