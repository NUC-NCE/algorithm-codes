#include<cstdio>
#include<iostream>
using namespace std;
const int MAX_N = 1005;
int par[MAX_N];
void init(int n)
{
    for(int i=0;i<n;i++)
    {
        par[i]=i;
    }
}
int find(int x)
{
    if(par[x]==x)
    {
        return x;
    }
    else
    {
        return par[x] = find(par[x]);
    }
}
void join(int x,int y)
{
    int fx=find(x),fy=find(y);
    if(x!=y)
        par[fx]=fy;
}

int main()
 {
  int t,n,m,i,x,y,ans;
  scanf("%d",&t);
  while(t--)
  {
   scanf("%d %d",&n,&m);
   for(i=1;i<=n;i++)
    par[i]=i;
   for(i=1;i<=m;i++)
   {
    scanf("%d%d",&x,&y);
    join(x,y);
   }
   for(ans=0,i=1;i<=n;i++)
    if(par[i]==i)
     ans++;
   printf("%d\n",ans);
  }
  return 0;
 }
