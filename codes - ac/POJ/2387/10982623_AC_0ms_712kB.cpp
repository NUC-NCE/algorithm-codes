#include<cstring>
#include<queue>
#include<cstdio>
#define INF 0x3f3f3f
#define maxn 10100//点数
#define maxm 20100//边数
using namespace std;
int dis[maxn];//储存起点到当前点的最短路
int visit[maxn];//标记当前点是否在队列中
int head[maxn];
int n,top;

struct node
{
	int to,val,next;
}edge[maxm];

void add(int a,int b,int c)//建立邻接表
{
	edge[top].to=b;
	edge[top].val=c;
	edge[top].next=head[a];//指向上一个，edge[].next指向的是前一个，相当于链表里的指针的作用
	head[a]=top++;
}

void spfa(int start)
{
	int i,j,next,u,v;
	queue<int>q;
	for(i=1;i<=n;++i)
	   dis[i]=INF;
	dis[start]=0;
	visit[start]=1;
	q.push(start);
	while(!q.empty())
	{
		u=q.front();
		q.pop();
		visit[u]=0;//消除标记
		for(i=head[u];i!=-1;i=edge[i].next)//遍历以u为前点的所有边
		{
			v=edge[i].to;
			if(dis[v]>dis[u]+edge[i].val)
			{
				dis[v]=dis[u]+edge[i].val;
				if(!visit[v])
				{
					visit[v]=1;
					q.push(v);
				}
			}
		}
	}
	printf("%d\n",dis[n]);
}

int main()
{
	int m,i,a,b,c;
	while(~scanf("%d%d",&m,&n))
	{
		top=0;//建表从零开始
		for(i=1;i<=n;++i)
		{
			visit[i]=0;
			head[i]=-1;
		}
		while(m--)
		{
			scanf("%d%d%d",&a,&b,&c);
			add(a,b,c);
			add(b,a,c);
		}
		spfa(1);
	}
	return 0;
}
