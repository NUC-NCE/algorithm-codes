#include"stdio.h"
#include"cstdio"
#include"string"
#include"map"
#include"string.h"
#include"iostream"
#include"algorithm"
using namespace std;
const int max_n=1e5+10;
int head[max_n],visit[max_n];
int num;
int Sg[max_n];
struct Edge
{
	int vale;
	int last;
}edge[max_n];
void add(int v,int u)
{
	edge[num].vale=u;
	edge[num].last=head[v];
	head[v]=num++;
}
void dfs(int v)
{
	int k=head[v];
	Sg[v]=0;
	for(;k!=-1;k=edge[k].last)
	{
		int u=edge[k].vale;
		dfs(u);
		Sg[v]^=(1+Sg[u]);
	}
	return ;
}
int main()
{
	int t;
	while(scanf("%d",&t)!=EOF)
	{
		string s="";
		while(t--)
		{
			num=0;
			memset(head,-1,sizeof(head));
			memset(visit,0,sizeof(visit));
			memset(Sg,0,sizeof(Sg));
			int n,i;
			scanf("%d",&n);
			for(i=1;i<n;i++)
			{
				int a,b;
				scanf("%d%d",&a,&b);
				add(a,b);
				visit[b]++;
			}
			int root=1;
			for(i=1;i<=n;i++)
			{
				if(!visit)
				root=i;
			}
			dfs(root);
			if(Sg[root]) s+='1';
			else s+='0';
			int res=0;
			for(int k=head[root];k!=-1;k=edge[k].last)
			{
				res^=Sg[edge[k].vale];
			}
			if(res) s+='1';
			else s+='0';
		}
		cout<<s;
		printf("\n");
	}
}