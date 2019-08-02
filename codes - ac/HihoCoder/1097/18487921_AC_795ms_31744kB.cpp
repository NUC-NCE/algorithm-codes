#include <bits/stdc++.h>
using namespace std;
int m[2100][2100];
int vis[2100];
int cost[2100];
int n;
void prim() {
    int sum = 0, cnt = 0;
    vis[1] = 1;
    for(int i = 1; i <= n; i++) {
        cost[i] = 0x3f3f3f;
        vis[i]=0;
    }
    cost[1]=0;
    int ans=0;
    while(1) {
        int pos=-1;
        for(int i=1;i<=n;i++)
            if(!vis[i]&&(pos==-1||cost[i]<cost[pos]))
                pos=i;
        if(pos==-1)
            break;
        vis[pos]=1;
        ans+=cost[pos];
        for(int i=1;i<=n;i++)
            cost[i]=min(cost[i],m[pos][i]);
    }
    printf("%d\n", ans);
}
int main()
{
    while(cin>>n){
        memset(m,0,sizeof(m));
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                cin>>m[i][j];
        prim();
    }
    return 0;
}
