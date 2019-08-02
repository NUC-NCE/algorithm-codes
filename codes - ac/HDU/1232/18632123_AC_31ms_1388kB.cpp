#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int par[1100];
int n,m;
int fun(int x){
    if(x==par[x])
        return x;
    else
        return par[x]=fun(par[x]);
}
void unions(int u,int v){
    int x1=fun(u);
    int y1=fun(v);
    if(x1!=y1)
        par[y1]=x1;
}
int main()
{
    while(scanf("%d",&n)!=EOF&&n){
        scanf("%d",&m);
        memset(par,0,sizeof(par));
        for(int i=1;i<=n;i++)
            par[i]=i;
        while(m--){
            int x,y;
            scanf("%d%d",&x,&y);
            unions(x,y);
        }
        int sum=0;
        for(int i=1;i<=n;i++)
            if(par[i]==i)
                sum++;
        printf("%d\n",sum-1);
    }
    return 0;
}
