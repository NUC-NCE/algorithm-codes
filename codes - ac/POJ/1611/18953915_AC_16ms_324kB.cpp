#include<cstdio>
using namespace std;
const int maxn = 1e5+100;
int par[30100];
int ranks[30100];

void init(int n){
    for(int i = 0; i < n; i++){
        par[i] = i;
        ranks[i] = 1;
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
    {
        par[x]=y;
        ranks[y]=ranks[x]+ranks[y];
    }
    else{
        par[y]=x;
        ranks[x]=ranks[x]+ranks[y];
        if(ranks[x]==ranks[y])
            ranks[x]++;
    }
}
bool same(int x,int y){
    return finds(x) == finds(y);
}
int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)&&n){
        if(n==0&&m==0)
            break;
        init(n);
        while(m--){
            int num,x,w;
            scanf("%d %d",&num,&x);
            for(int i=2;i<=num;i++){
                scanf("%d",&w);
                unite(w,x);
            }

        }
        //printf("%d\n",ranks[finds(0)]);
        int ans=1;
        for(int i=1;i<n;i++)
            if(same(0,i))
                ans++;
        printf("%d\n",ans);
    }
    return 0;
}