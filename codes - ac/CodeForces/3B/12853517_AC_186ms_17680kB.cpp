#include<bits/stdc++.h>
#define rep(a,b,i) for(int i=a;i<=b;i++)
#define reps(a,b,i) for(int i=a;i>=b;i--)
#define sd(x) scanf("%d",&x)
#define ss(x) scanf("%s",x)
#define sc(x) scanf("%c",&x)
#define sf(x) scanf("%f",&x)
#define slf(x) scanf("%lf",&x)
#define slld(x) scanf("%lld",&x)
#define me(x,b) memset(x,b,sizeof(x))
#define pd(d) printf("%d\n",d);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int maxn=1e6+100;
struct data{
    int v,p,id,w;
}g[maxn];
int i,j,k,n,v;
ll ans;
bool cmp(data a,data b)
{
    return a.w>b.w;
}
bool cmp2(data a,data b){
    return a.id>b.id;
}
int main()
{
    sd(n),sd(v);
    for(i=0;i<n;i++){
        sd(g[i].v),sd(g[i].p);
        g[i].id=i+1;
        g[i].w=g[i].p;
        if(g[i].v==1)
            g[i].w<<=1;
    }
    sort(g,g+n,cmp);
    for(ans=i=j=0;i<n;i++){
        if(j+g[i].v<=v){
            j+=g[i].v;
            ans+=g[i].p;
        }
        else
            break;
    }
    if(j<v&&i<n){
        g[n].p=0;
        for(k=i+1;k<n;k++)
            if(g[k].v==1)
                break;
        for(j=i-1;j>=0;j--)
            if(g[j].v==1)
                break;
        if(j>=0&&g[j].p+g[k].p<g[i].p){
            ans+=g[i].p-g[j].p;
            swap(g[j],g[i]);
        }
        else if(k<n){
            swap(g[i],g[k]);
            ans+=g[i++].p;
        }
    }
    pd(ans);
    sort(g,g+i,cmp2);
    while(i--){
        printf("%d",g[i].id);
        if(i==0)
            printf("\n");
        else
            printf(" ");
    }
    return 0;
}