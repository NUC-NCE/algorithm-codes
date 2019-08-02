#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#define INF 0x3f3f3f3f
using namespace std;
int n;
int i,j;
const int N=105;
double cost[N][N];
int used[N];
double mincost[N];
int x[N],y[N];
double costs(int i,int j)
{
	return sqrt(1.0*(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
}
void prim()
{
	double sum=0;
	memset(used,0,sizeof(used));
	int sur=1;
	for(i=1;i<=n;++i)
	{
		mincost[i]=cost[1][i];
	}
	used[1]=1;
	for(i=1;i<n;++i)
	{
		double wa=INF;
		for(j=1;j<=n;++j)
		{
			if(!used[j]&&wa>mincost[j])
            {
				wa=mincost[j];
				sur=j;
			}
		}
		if(wa==INF)
		{
			printf("oh!\n");
			return ;
		}
		sum+=wa;
		used[sur]=1;
		for(j=1;j<=n;++j)
		{
			if(!used[j]&&mincost[j]>cost[sur][j])
			{
				mincost[j]=cost[sur][j];
			}
		}
	}
    printf("%.1lf\n",sum*100);
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(i=1;i<=n;++i)
            scanf("%d%d",&x[i],&y[i]);
        for(i=1;i<=n;++i)
        {
            for(j=1;j<=n;++j)
            {
                cost[i][j]=costs(i,j);
                if(cost[i][j]>1000||cost[i][j]<10)
                {
                    cost[i][j]=INF;
                }
            }
        }
		prim();
	}
	return 0;
}
