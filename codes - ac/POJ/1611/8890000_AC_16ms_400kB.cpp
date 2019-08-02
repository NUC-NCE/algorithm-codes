#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
int par[30005];
int a[30005];
int t;
void init(int n)
{
    for(int i=0;i<n;i++)
        par[i]=i;
}
int find(int x)
{
	if(par[x]==x)
		return x;
	else
		return par[x]=find(par[x]);
}
void bcj()
{
    for(int j=1;j<=t-1;j++)
    {
                if(find(a[j])!=find(a[j+1]));
                par[find(a[j+1])]=find(a[j]);
    }

}
int main()
{
    int n,m;
    while(~scanf("%d %d",&n,&m))
    {
    	memset(a,0,sizeof(a));
        if(m==0&&n==0)
            break;
        init(n);
        for(int i=0;i<m;i++)
        {
            scanf("%d",&t);
            for(int j=1;j<=t;j++)
                scanf("%d",&a[j]);
            bcj();
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(find(0)==find(i))
                ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
