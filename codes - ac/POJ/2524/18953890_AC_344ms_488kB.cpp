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
    while(scanf("%d %d",&n,&m)&&n+m){
        init(n);
        while(m--)
        {
            int u,v;
            scanf("%d %d",&u,&v);
            unite(u,v);
        }
        int ans=0;
        for(int i=1;i<=n;i++)
            if(par[i]==i)
                ans++;
            
        printf("Case %d: %d\n",cas++,ans);
    }
    return 0;
}
//int main()
//{
//    int n,m;
//    while(scanf("%d %d",&n,&m)&&n){
//        if(n==0&&m==0)
//            break;
//        init(n);
//        while(m--){
//            int num,x,w;
//            scanf("%d %d",&num,&x);
//            for(int i=2;i<=num;i++){
//                scanf("%d",&w);
//                unite(w,x);
//            }
//
//        }
//        //printf("%d\n",ranks[finds(0)]);
//        int ans=1;
//        for(int i=1;i<n;i++)
//            if(same(0,i))
//                ans++;
//        printf("%d\n",ans);
//    }
//    return 0;
//}
