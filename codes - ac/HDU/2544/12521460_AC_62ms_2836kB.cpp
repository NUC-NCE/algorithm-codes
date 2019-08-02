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
const int maxn=1e5+100;
const int INF=1e9;
struct node{
    int next,to,w;
} e[maxn];

int n,m,l,r;
int t;
int cnt=1,head[maxn],dis[maxn],vis[maxn];

void add(int x,int y,int len){
    e[cnt].to=y;
    e[cnt].w=len;
    e[cnt].next=head[x];
    head[x]=cnt;
    cnt++;
}
void spfa(int x){
    //memset(dis,INF,sizeof(dis));
    memset(vis,0,sizeof(vis));
    queue<int> q;
    while(!q.empty())
        q.pop();
    q.push(x);
    dis[x]=0;
    vis[x]=1;
    while(!q.empty()){
        int cur=q.front();
        vis[cur]=0;
        q.pop();
        for(int i=head[cur];~i;i=e[i].next){
            if(dis[e[i].to]>e[i].w+dis[cur]){
                dis[e[i].to]=e[i].w+dis[cur];
                if(!vis[e[i].to]){
                    vis[e[i].to]=1;
                    q.push(e[i].to);
                }
            }
        }
    }
}
int main(){
    while(cin>>n>>m&&(n+m)){
        rep(0,n,i)
            e[i].w=INF,dis[i]=INF,vis[i]=0;
        memset(head,-1,sizeof(head));
        for(int i=1;i<=m;i++){
            int x,y,len;
            cin>>x>>y>>len;
            add(x,y,len);
            add(y,x,len);
        }
        spfa(1);
        /*rep(0,n-1,i)
            pd(dis[i]);*/
        if(dis[n]>=INF)
            puts("-1");
        else
            cout<<dis[n]<<endl;
    }
    return 0;
}
