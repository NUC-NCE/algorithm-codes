#include <stdio.h>
#define MAX 50010
int parent[MAX],rak[MAX];
void init(int n)
{
    for(int i=0;i<=n;i++)
    {
        parent[i]=i;
        rak[i]=0;
    }
}
int found(int x)
{
    if(parent[x]==x)
        return x;
    else
        return parent[x]=found(parent[x]);
}
void unite(int x,int y)
{
    x=found(x);
    y=found(y);
    if(x==y)
        return;
    if(rak[x]<rak[y])
        parent[x]=y;
    else
    {
        parent[y]=x;
        if(rak[x]==rak[y])
            rak[x]++;
    }
}
int main()
{
    int n,m,t=1;
    while(scanf("%d %d",&n,&m)&&n+m)
    {
        init(n);
        while(m--)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            unite(a,b);
        }
        int sum=0;
        for(int i=1;i<=n;i++)
            if(parent[i]==i)
                sum++;
        printf("Case %d: %d\n",t++,sum);
    }
    return 0;
}