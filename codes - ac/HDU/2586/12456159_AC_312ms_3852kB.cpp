#include<iostream>
#include<algorithm>
#include<queue>
#include<cstring>
#define maxn (100000+10)
using namespace std;
const int INF=0x3f3f3f;
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
void spfa(int x)/*源点*/{
    memset(vis,0,sizeof(vis));
    queue<int> q;
    q.push(x);
    dis[x]=0;
    while(!q.empty()){
        int cur=q.front();
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
    cin>>t;
    while(t--){
        memset(head,-1,sizeof(head));
        cin>>n>>m;
        for(int i=1;i<n;i++){
            int x,y,len;
            cin>>x>>y>>len;
            add(x,y,len);
            add(y,x,len);
        }
        while(m--){
            memset(dis,INF,sizeof(dis));
            cin>>l>>r;
            spfa(l);
            cout<<dis[r]<<endl;
        }
    }
    return 0;
}
