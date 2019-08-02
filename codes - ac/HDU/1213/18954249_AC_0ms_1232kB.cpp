#include<cstdio>
using namespace std;
int par[100100];
int ranks[100100];
void init(int n)
{
    for(int i = 0; i <= n; i++)
    {
        par[i] = i;
        ranks[i] = 0;
    }
}
int finds(int x){
    if(par[x]==x)
        return x;
    else
        return par[x]=finds(par[x]);
}

void unite(int x,int y){
    x=finds(x);
    y=finds(y);
    if(x==y)
        return ;
    if(ranks[x]<ranks[y])
        par[x]=y;
    else
    {
        par[y]=x;
        if(ranks[x]==ranks[y])
            ranks[x]++;
    }
}
bool same(int x,int y){
    return finds(x) == finds(y);
}
int main()
{
    int n,m,cas=1;
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        int u,v;
        init(n);
        while(m--){
            scanf("%d%d",&u,&v);
            unite(u,v);
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(finds(i)==i)
                ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}