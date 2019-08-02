#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int maxn=2e5+100;
vector<int> edge[maxn];
int a[maxn];
int n,k,ans;
void dfs(int u,int root){
    a[u]=1;
    for(auto v:edge[u]){
        if(v==root)
            continue;
        dfs(v,u);
        if(a[v]>=k&&n-a[v]>=k)
            ans++;
        a[u]+=a[v];
    }
}
int main()
{

    int T;
    scanf("%d",&T);
    while(T--){
        ans=0;
        scanf("%d%d",&n,&k);
        for(int i=1,u,v;i<n;i++){
            scanf("%d%d",&u,&v);
            edge[u].push_back(v);
            edge[v].push_back(u);
        }
        dfs(1,1);
        printf("%d\n",ans);
        for(int i=1;i<=200000;i++)
            edge[i].clear();
    }
    return 0;
}
