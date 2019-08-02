#include<cstdio>
#include<ctime>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAXN 10000
void Read(int &x){
    char c;
    while(c=getchar(),c!=EOF)
        if(c>='0'&&c<='9'){
            x=c-'0';
            while(c=getchar(),c>='0'&&c<='9')
                x=x*10+c-'0';
            ungetc(c,stdin);
            return;
        }
    exit(0);
}
struct node{
    int v,wt;
    node *next;
}*adj[MAXN+10],edge[MAXN*2+10],*ecnt=edge;
int n,size[MAXN+10],mxs[MAXN+10],heavy,tmp[MAXN+10],ans,cnt;
const int k=2;
bool vis[MAXN+10];
void addedge(int u,int v,int wt){
    node *p=++ecnt;
    p->v=v;
    p->wt=wt;
    p->next=adj[u];
    adj[u]=p;
}
void read(){
    int i,u,v;
    for(i=1;i<n;i++){
        Read(u),Read(v);
        addedge(u,v,1);
        addedge(v,u,1);
    }
}
void dfs(int u,int fa,int tot){
    size[u]=1,mxs[u]=0;
    for(node *p=adj[u];p;p=p->next)
        if(p->v!=fa&&!vis[p->v]){
            dfs(p->v,u,tot);
            size[u]+=size[p->v];
            mxs[u]=max(mxs[u],size[p->v]);
        }
    mxs[u]=max(mxs[u],tot-size[u]);
    if(mxs[u]<mxs[heavy])
        heavy=u;
}
struct Treap_node{
    int val,pri,cnt,size;
    Treap_node *ch[2];
}tree[MAXN+10],*tcnt=tree,*root=0;
inline int Get_size(Treap_node *p){
    return p?p->size:0;
}
void update(Treap_node *p){
    p->size=Get_size(p->ch[0])+Get_size(p->ch[1])+p->cnt;
    return;
}
void Rotate(Treap_node *&x,bool d){
    Treap_node *y=x->ch[!d];
    x->ch[!d]=y->ch[d];
    y->ch[d]=x;
    update(x);
    x=y;
}
void insert(Treap_node *&p,int val){
    if(!p){
        p=++tcnt;
        p->val=val;
        p->pri=rand();
        p->cnt=p->size=1;
        p->ch[0]=p->ch[1]=0;
        return;
    }
    if(val==p->val){
        p->cnt++;
        p->size++;
        return;
    }
    bool d=val>p->val;
    insert(p->ch[d],val);
    if(p->ch[d]->pri>p->pri)
        Rotate(p,!d);
    update(p);
}
int find_size(Treap_node *p,int val){
    if(!p)
        return 0;
    if(val==p->val)
        return Get_size(p->ch[0])+p->cnt;
    if(val>p->val)
        return Get_size(p->ch[0])+p->cnt+find_size(p->ch[1],val);
    return find_size(p->ch[0],val);
}
void dfs2(int u,int fa,int dep){
    size[u]=1;
    ans+=find_size(root,k-dep);
    tmp[++cnt]=dep;
    for(node *p=adj[u];p;p=p->next)
        if(p->v!=fa&&!vis[p->v]){
            dfs2(p->v,u,dep+p->wt);
            size[u]+=size[p->v];
        }
}
void solve(int u){
    heavy=0;
    dfs(u,0,size[u]);
    root=0,tcnt=tree;
    vis[heavy]=1;
    int i;
    insert(root,0);
    for(node *p=adj[heavy];p;p=p->next){
        cnt=0;
        if(!vis[p->v]){
            dfs2(p->v,heavy,p->wt);
            for(i=1;i<=cnt;i++)
                insert(root,tmp[i]);
        }
    }
    for(node *p=adj[heavy];p;p=p->next)
        if(!vis[p->v])
            solve(p->v);
}
inline void init(){
    memset(adj,0,sizeof adj);
    ecnt=edge;
    ans=0;
    memset(vis,0,sizeof vis);
}
int main()
{
    srand(254587867);
    while(Read(n),n){
        init();
        read();
        size[1]=n;
        mxs[0]=0x7fffffff;
        solve(1);
        printf("%d\n",ans-(n-1));
    }
    return 0;
}