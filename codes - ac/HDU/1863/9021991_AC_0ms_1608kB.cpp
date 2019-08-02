#include <iostream>
#include <cstring>
#include <cstdio>
#define INF 0xfffff
using namespace std;
int cost[105][105];
int mincost[105];
int used[105];
int M;
int prim()
{
	for(int i=1;i<=M;i++)
	{
		mincost[i]=cost[i][1];
	}
	mincost[1]=0;
	used[1]=1;
	int sum=0;
	for(int i=1;i<=M-1;i++)
	{
		int wa = INF;
		int sur;
		for(int j=1;j<=M;j++)
		{
			if(!used[j]&& wa>mincost[j])
			{
				wa=mincost[j];
				sur=j;
			}
		}
		if(wa == INF)
			return 0;
		used[sur]=1;
		sum+=mincost[sur];
		for(int j = 1; j <= M; j++)
		{
			if(!used[j]&& cost[sur][j]<mincost[j] && cost[sur][j]!=INF)
			{
				mincost[j]=cost[sur][j];
			}
		}
	}
	return sum;
}
int main()
{
	int N;
	while(scanf("%d%d",&N,&M),N)
	{
		int a,b,c;
		memset(cost,0x3f,sizeof(cost));
		memset(mincost,0x3f,sizeof(mincost));
		memset(used,0,sizeof(used));
		for(int i=1;i<=N;++i)
		{
			scanf("%d %d %d",&a,&b,&c);
			cost[a][b]=cost[b][a]=c;
		}
		int ans=prim();
		if(ans)
			printf("%d\n",ans);
		else
			printf("?\n");
	}
	return 0;
}
