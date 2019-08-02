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
int n,m;
int maps[110][110];
int dp[110][110];
int dis[4][2]={0,1,1,0,0,-1,-1,0};

int dfs(int x,int y){
    if(dp[x][y])
        return dp[x][y];
    int maxn=0;
    rep(0,3,i){
        rep(1,m,j){
            int tx=x+dis[i][0]*j;
            int ty=y+dis[i][1]*j;
            if(tx<0||ty<0||tx>=n||ty>=n)
                continue;
            if(maps[tx][ty]>maps[x][y])
                maxn=max(maxn,dfs(tx,ty));
        }
    }
    return dp[x][y]=maxn+maps[x][y];
}
int main()
{
    while(~(sd(n),sd(m))&&(n+m!=-2)){
        rep(0,n-1,i)
            rep(0,n-1,j)
                sd(maps[i][j]);
        me(dp,0);
        pd(dfs(0,0));
    }
    return 0;
}