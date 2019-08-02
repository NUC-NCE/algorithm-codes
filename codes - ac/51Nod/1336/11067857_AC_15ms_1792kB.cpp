#include<cstdio>
#include<algorithm>
const int N=100000,inf=0x3f3f3f3f;
int es[N],enx[N],ev[N],e0[N],ep;
int h[N],q[N],S,T;
inline void adde(int a,int b,int c){
    es[ep]=b;enx[ep]=e0[a];ev[ep]=c;e0[a]=ep++;
    es[ep]=a;enx[ep]=e0[b];ev[ep]=0;e0[b]=ep++;
}
bool bfs(){
    int ql=0,qr=0;
    for(int i=0;i<=T;i++)h[i]=0;
    h[S]=1;q[qr++]=S;
    while(ql!=qr){
        int w=q[ql++];
        for(int i=e0[w];i;i=enx[i]){
            int u=es[i];
            if(!h[u]&&ev[i]){
                h[u]=h[w]+1;
                q[qr++]=u;
            }
        }
    }
    return h[T];
}
int dfs(int w,int f){
    if(w==T)return f;
    int c,u,used=0;
    for(int i=e0[w];i;i=enx[i]){
        u=es[i];
        if(h[u]!=h[w]+1||!ev[i])continue;
        c=f-used;
        if(c>ev[i])c=ev[i];
        c=dfs(u,c);
        used+=c;
        ev[i]-=c;
        ev[i^1]+=c;
        if(used==f)return f;
    }
    if(!used)h[w]=0;
    return used;
}
int qs[53][3],xs[107],ps[107],xp,pp;
bool d[107][107];
int main(){
    int _T,n,q;
    for(scanf("%d",&_T);_T;_T--){
        scanf("%d%d",&n,&q);
        for(int i=0;i<q;i++)scanf("%d%d%d",qs[i],qs[i]+1,qs[i]+2);
        xp=pp=0;
        xs[xp++]=1;
        xs[xp++]=n+1;
        ps[pp++]=1;
        ps[pp++]=n+1;
        for(int i=0;i<q;i++){
            xs[xp++]=qs[i][2];
            xs[xp++]=qs[i][2]+1;
            ps[pp++]=qs[i][0];
            ps[pp++]=qs[i][1]+1;
        }
        std::sort(xs,xs+xp);
        xp=std::unique(xs,xs+xp)-xs;
        std::sort(ps,ps+pp);
        pp=std::unique(ps,ps+pp)-ps;
        for(int i=0;i<xp;i++)for(int j=0;j<pp;j++)d[i][j]=1;
        for(int i=0;i<q;i++){
            for(int j=0;j<xp-1;j++){
                if(xs[j]>qs[i][2]){
                    for(int k=0;k<pp-1;k++)if(qs[i][0]<=ps[k]&&ps[k]<=qs[i][1]){
                        d[j][k]=0;
                    }
                }else if(xs[j]==qs[i][2]){
                    for(int k=0;k<pp-1;k++)if(qs[i][0]>ps[k]||ps[k]>qs[i][1]){
                        d[j][k]=0;
                    }
                }
            }
        }
        S=xp+pp+1;T=S+1;
        for(int i=1;i<=T;i++)e0[i]=0;
        ep=2;
        for(int i=0;i<xp-1;i++)adde(S,i+1,xs[i+1]-xs[i]);
        for(int i=0;i<pp-1;i++)adde(xp+i+1,T,ps[i+1]-ps[i]);
        for(int i=0;i<xp-1;i++)for(int j=0;j<pp-1;j++)if(d[i][j])adde(i+1,xp+j+1,n);
        int ans=0;
        while(bfs())ans+=dfs(S,inf);
        puts(ans==n?"Possible":"Impossible");
    }
    return 0;
}